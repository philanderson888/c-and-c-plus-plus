# c-and-c-plus-plus

Learning c and c++

## contents

- [c-and-c-plus-plus](#c-and-c-plus-plus)
  - [contents](#contents)
  - [compiling c](#compiling-c)
  - [compiling c++](#compiling-c-1)
  - [references](#references)
  - [hello-world](#hello-world)
  - [data types](#data-types)
  - [arrays](#arrays)
  - [printing](#printing)


## compiling c

if your c program is called `hello-world.c` you can do any of the following to compile your program

```bash
make hello-world
gcc hello-world.c -o hello-world
cc hello-world.c -o hello-world
clang hello-world.c -o hello-world
```

## compiling c++

similarly can use

```bash
cc hello-world.cpp -o hello-world
g++ hello-world.cpp -o hello-world
clang++ hello-world.cpp -o hello-world
```

## references

https://www.learn-c.org

## hello-world

```c
#include <stdio.h>

int main(void)
{
  printf("Hello, World!\n");
  return 0;
}
```

## data types

- char
- int
- short
- long
- long long
- unsigned char etc are the non-negative equivalents of the above

## arrays

int numbers[][5] = {
    {1,2,3,4,5},
    {6,7,8,9,10}
}

## printing

```c
// prints characters
printf("... some text ...")
// adds new line
printf("... some more text and a new line break ...\n")
int number01 = 120
printf("numbers are printed with percent s variable symbol eg %s", number01)
char * string01 = "this is a string"
printf("strings are printed with percent d variable symbol eg %d", string01)
```