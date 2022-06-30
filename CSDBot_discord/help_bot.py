import os

def get_function_name(directory):
    tab = []
    for file in os.listdir(directory):
        for line in open(directory + file):
            if line.startswith('int') or \
                line.startswith('int *') or \
                    line.startswith('char') or \
                        line.startswith('char *') or \
                            line.startswith('char **') or \
                                line.startswith('void') or \
                                    line.startswith('float') or \
                                        line.startswith('double') or \
                                            line.startswith('long') or \
                                                line.startswith('short') or \
                                                    line.startswith('unsigned') or \
                                                        line.startswith('node_t'):
                tab.append(line)
    return tab


def get_tree(directory):
    resume = "------CSDLib.h------\n\n"
    for file in os.listdir(directory):
        resume += "|->\t------" + file + "------\n\n"
        for line in open(directory + file):
            if line.startswith('int') or \
                line.startswith('int *') or \
                    line.startswith('char') or \
                        line.startswith('char *') or \
                            line.startswith('char **') or \
                                line.startswith('void') or \
                                    line.startswith('float') or \
                                        line.startswith('double') or \
                                            line.startswith('long') or \
                                                line.startswith('short') or \
                                                    line.startswith('unsigned') or \
                                                        line.startswith('node_t'):
                resume += "|\t\t|->" + line + "\n"
    resume  = resume[24:len(resume)]
    return(resume)

def search_function(function_names, tab):
    res = []
    for line in tab:
        if function_names + '_' in line.split('(')[0] or '_' + function_names in line.split('(')[0]:
            res.append(line)
    return res

def check_roles(role_names, role):
    if role in role_names:
        return True
    return False

def get_help():
    res = '```\n ADMIN COMMANDS:\n'
    res += '\t!cls + number of messages to delete (delete messages)\n'
    res += '\t!add_role + role name (add a role to the user)\n'
    res += '\t!create_role + new role name (create a role)\n'
    res += '\t!delete_role + role name (delete a role)\n\n'
    res += ' USERS COMMANDS:\n'
    res += '\t!poll (create a poll with reactions)[beta]\n'
    res += '\t!search_function + part of function name (search a function in files of CSDLib)\n'
    res += '\t!tree (show the tree of files and functions of CSDLib)\n'
    res += '\t!help_bot (show this message)\n'

    res += '```'
    return res