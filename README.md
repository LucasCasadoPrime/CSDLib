![version](https://img.shields.io/badge/version-1.2.3-blue)

<!-- PROJECT LOGO -->
<br />
<div  align="center">
<a  href="https://github.com/LucasCasadoPrime/CSDLib/blob/master/assets/logo.png">
<img  src="assets/logo.png"  alt="Logo"  width="80"  height="80">
</a>
<h3  align="center">CSDLib</h3>
<p  align="center">
An awesome C Lib that all beginners must have to start!
<br />
<a  href="https://github.com/LucasCasadoPrime/CSDLib/issues">Report Bug</a>
·
<a  href="https://github.com/LucasCasadoPrime/CSDLib/issues">Request Feature</a>
</p>
</div>


<!-- TABLE OF CONTENTS -->
<details>
<summary>Table of Contents</summary>
	<ol>
		<li>
			<a  href="#about-the-project">About The Project</a>
		</li>
		<li>
			<a  href="#getting-started">Getting Started</a>
				<ul>
					<li><a  href="#installation">Installation</a></li>
				</ul>
		</li>
		<li><a  href="#usage">Usage</a></li>
		<li><a  href="#roadmap">Roadmap</a></li>
		<li><a  href="#contributing">Contributing</a></li>
		<li><a  href="#contact">Contact</a></li>
        <li><a  href="#acknowledgments"> Acknowledgments</a></li>
        <li><a  href="#contributors"> Contributors</a></li>
		<li><a  href="#license">License</a></li>
	</ol>
</details>

<!-- ABOUT THE PROJECT -->

## About The Project
This is a usefull C library to make your project faster and easier, made especially for Epitech students to learn and understand C language and it's particularities.

To be informed about the project, you can visit the [Discord](https://discord.gg/2uWZjPVxn4)

<p  align="right">(<a  href="#top">back to top</a>)</p>


<!-- GETTING STARTED -->

## Getting Started  

### Installation

1. Clone the repo

```sh
git clone https://github.com/your_username_/CSDLib.git
```
2. To install the library, you need to run this command:

```sh
bash install.sh
```
3. To launch unit tests, you need to run this command:

```sh
bash unit_test.sh
```
Here, you can see the result of the tests.

Now you can use the library!
Don't forget to include the library in your project and the compilation flag!

```c
#include "CSDLib/CSDLib.h"
```

```sh
gcc -Wall -Wextra -Werror -I./include -lCSDlib -o my_program
```

<!-- USAGE EXAMPLES -->
## Usage

This lib have five modules and multiple functions in them to help you.

The modules are :

	. Strings management

	. String's Array management

	. Int Array management

	. Files management

	. Linked list generic system
<br /><br />


The particularities of CSDLib are :
	
 1. All function are automatically free (don't forget to use my_malloc(size) function)
	    
  2. Variable assignment is automatically reallocated if needed
    
  3. An system of linked list is available to help you to manage your
    data
    
  4.  A lot of functions added to help you to manage your data (based on
    python standard library)

For your future problems, please refer to the [Documentation]() (soon)

<p  align="right">(<a  href="#top">back to top</a>)</p>

<!-- ROADMAP -->

## Roadmap 
I check the features when I'm sure that the code will work perfectly, Some will be uncheck sometimes when I'll add new functions in the modules dont' worry.

- [x] Strings management
- [x] String's Array management
- [x] Int's Array management
- [x] Files management
- [x] Linked list generic system
- [x] Garbage collector

<p  align="right">(<a  href="#top">back to top</a>)</p>

<!-- CONTRIBUTING -->
## Contributing

  

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

  

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".

Don't forget to give the project a star! Thanks again!

  

1. Fork the Project

2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)

3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)

4. Push to the Branch (`git push origin feature/AmazingFeature`)

5. Open a Pull Request

If you have any questions, please open an issue or go on discord's project [Discord](https://discord.gg/2uWZjPVxn4).

<p  align="right">(<a  href="#top">back to top</a>)</p>
<!-- CONTACT -->

## Contact

Lucas Casado  - lucas.casado@epitech.eu

Project Link: [https://github.com/LucasCasadoPrime/CSDLib/](https://github.com/LucasCasadoPrime/CSDLib/)

Discord Link: [https://discord.gg/2uWZjPVxn4](https://discord.gg/2uWZjPVxn4)

<p  align="right">(<a  href="#top">back to top</a>)</p>

<!-- ACKNOWLEDGMENTS -->

## Acknowledgments

[Linked list tuto](https://www.codegrepper.com/code-examples/c/linked++list+in+c)
[Cmake tuto](https://www.pragmaticlinux.com/2022/02/create-a-shared-library-in-c-with-cmake/)

<p  align="right">(<a  href="#top">back to top</a>)</p>


<!-- CONTRIBUTOR -->

## Contributors

Laurent Amat Github: [https://github.com/Lqvrent](https://github.com/Lqvrent)

<p  align="right">(<a  href="#top">back to top</a>)</p>



<!-- LICENSE -->

## License

  

Distributed under the MIT License. See `LICENSE.txt` for more information.

  

<p  align="right">(<a  href="#top">back to top</a>)</p>