import os
import discord
import help_bot as hb
from dotenv import load_dotenv
import discord.ext.commands as commands

load_dotenv('bot.env')

TOKEN = os.getenv('DISCORD_TOKEN')

client = commands.Bot(command_prefix = '!')

@client.event
async def on_ready():
    print('We have logged in as {0.user}'.format(client))

@client.command()
async def cls(ctx, arg):
    if hb.check_roles(str(ctx.author.roles), 'Admin'):
        await ctx.channel.purge(limit=int(arg))
    else:
        await ctx.send('You are not allowed to do that')

@client.command()
async def add_role(ctx, arg):
    if hb.check_roles(str(ctx.author.roles), 'Admin'):
        await ctx.author.add_roles(discord.utils.get(ctx.guild.roles, name=arg))
    else:
        await ctx.send('You are not allowed to do that')

@client.command()
async def create_role(ctx, role_name):
    if hb.check_roles(str(ctx.author.roles), 'Admin'):
        await ctx.guild.create_role(name=role_name)
        await ctx.send("Role ***" + role_name +  "*** created")
    else:
        await ctx.send('You are not allowed to do that')

@client.command()
async def delete_role(ctx, role_name):
    if hb.check_roles(str(ctx.author.roles), 'Admin'):
        role = discord.utils.get(ctx.message.guild.roles, name=role_name)
        await role.delete()
        await ctx.send("The role {} has been deleted!".format(role.name))
    else:
        await ctx.send('You are not allowed to do that')

@client.command()
async def search_function(ctx, description):
    tab = hb.search_function(description, hb.get_function_name('../includes/'))
    resume = "```c\n"
    for line in tab:
        resume += line + "\n"
    resume += "```"
    await ctx.send(resume)

@client.command()
async def tree(ctx):
        mess = hb.get_tree('../includes/')
        fmess = mess[0:2000].rfind('|')
        mess1 = "```c\n" + mess[0:fmess] + "```"
        mess2 = "```c\n|\t\t" + mess[fmess:] + "```"
        await ctx.send(mess1)
        await ctx.send(mess2)

@client.command()
async def help_bot(ctx):
    await ctx.send(hb.get_help())

@client.command()
async def poll(ctx):
    options = ['1️⃣ Yes Or No', '2️⃣ Multiple Choice']
    embed = discord.Embed(title="What type of poll you want ?" , description="\n".join(options), color=0x00ff00)
    msg_embed = await ctx.send(embed=embed)
    reaction = await client.wait_for("reaction_add", check=poll)
    if (reaction[0].emoji == '1️⃣'):
        user = await client.fetch_user(ctx.author.id)
        msg = await user.send("What is your question ?")
        question = await client.wait_for("message", check=lambda m: m.author == ctx.author)
        answers = ['\n\u2705 Yes\n', '\u274C No']
        new_embed = discord.Embed(title="Poll : " + question.content, description="\n".join(answers), color=0x00ff00)
        await msg_embed.edit(embed=new_embed)
        await msg_embed.remove_reaction('1️⃣', user)
        await msg_embed.add_reaction('\N{WHITE HEAVY CHECK MARK}')
        await msg_embed.add_reaction('\N{CROSS MARK}')
    
    
    elif (reaction[0].emoji == '2️⃣'):
        user = await client.fetch_user(ctx.author.id)
        msg = await user.send("What is your question ?")
        question = await client.wait_for("message", check=lambda m: m.author == ctx.author)
        msg = await user.send("What are the choices ? (Four compulsory choices, separated by comma)")
        choices = await client.wait_for("message", check=lambda m: m.author == ctx.author)
        choices = choices.content.split(',')

        if (len(choices) > 4):
            await msg_embed.delete()
            await user.send("You can't have more than four choices")
            return
        if (len(choices) < 4):
            await msg_embed.delete()
            await user.send("You can't have less than four choices")
            return
        
        answers = ['1️⃣ '+ choices[0] + '\n', '2️⃣ '+ choices[1] + '\n', '3️⃣ '+ choices[2] + '\n', '4️⃣ '+ choices[3] + '\n']
        new_embed = discord.Embed(title=question.content, description="\n ".join(answers), color=0x00ff00)
        await msg_embed.edit(embed=new_embed)
        await msg_embed.remove_reaction('2️⃣', user)
        await msg_embed.add_reaction('1️⃣')
        await msg_embed.add_reaction('2️⃣')
        await msg_embed.add_reaction('3️⃣')
        await msg_embed.add_reaction('4️⃣')

client.run(TOKEN)