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
  - [c plus plus](#c-plus-plus)
  - [c++ types](#c-types)
  - [graphics](#graphics)


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

## c plus plus

## c++ types

- boolean
- char
- short int 16 bits
- int 32 bits
- long int 64 bits
- float 32 bits
- double 64 bits
- void
- wchar_t wide character

- signed
- unsigned short
- unsigned long

- struct
- class

- typedef creates an alias

```cpp
typedef int counter;
counter tick_c = 100;
```

- enum

```cpp
enum color = {red, green, blue} myColor;
myColor = green;
```

## graphics 

to get graphics going with c++ on a mac we can do the following

- download xcod
- download sfml simple and fast multimedia library

```bash
brew install sfml
```

draw a box

```cpp
#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Draw a Box");

    // Create a rectangle (box)
    sf::RectangleShape box(sf::Vector2f(100.f, 100.f));
    box.setFillColor(sf::Color::Green);  // Set color to green
    box.setPosition(350.f, 250.f);  // Position the box in the middle of the window

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window with a black color
        window.clear(sf::Color::Black);

        // Draw the box
        window.draw(box);

        // Display the content of the window
        window.display();
    }

    return 0;
}
```



