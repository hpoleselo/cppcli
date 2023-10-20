# cppcli

Package to store all small C++ programs to be used in my Linux environment and a minimal practice on CMake for building C++ projects.

## Install instructions

Clone this repository to wherever you want:

` $ git clone `

Go to the root of this project:

` $ cd cppcli` 

Create an out/build directory from the project's root directory, access it and create the makefile:

```shell
$ mkdir -p out/build
$ cd out/build
$ cmake -S ../../ -B .
```

Now make sure to install the projects to your binaries in Linux:

`$ sudo make install`

