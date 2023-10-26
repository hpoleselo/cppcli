# cppcli

Package to store small C++ programs to be used in my Linux environment and serves as an initial practice on CMake for building C++ projects.

## Install instructions

Clone this repository to wherever you want:

` $ git clone git@github.com:hpoleselo/cppcli.git`

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

## Easy Conversions in Linux CLI

- kg2lb offers the easy conversion from kilograms to pounds
- lb2kg converts from pounds to kilograms
- TODO: add quaternion conversions.

## Future Implementation

- Add shared functions across two different libraries to test how the referencing to this function (convertToFloat) is done.
