# xbinary

## Description
xbinary contains useful functions when working with raw binary data.

## Usage
xbinary is equipped with a makefile that allows you to generate a `.a` file.
To do so just type `make` in the root directory of the project.
The `.a` file will be dropped to the root of the project.
All you have to do now is to copy `include/xbinary.h` and `libxbinary.a` to your project and you are good to go. (I assume you know how to link it)

## rotl()
> 1. Argument is the number to be shifted left
> 2. Argument is the amount the number should be shifted left
>

## rotr()
> 1. Argument is the number to be shifted right
> 2. Argument is the amount the number should be shifted right
>

## print_bin()
> 1. Argument is the number to be printed as binary to stdout
>

## fprint_bin()
> 1. Argument is the file the number should be printed to in binary
> 2. Argument is the number
>

## sprint_bin()
> 1. Argument is the stream the number should be printed to in binary
> 2. Argument is the number
>
