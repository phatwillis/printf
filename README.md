# 0x11. C - printf team project

## Collaborators: WILLIAMS MICHAEL and STEVEN OLAEBI MIENE

A custom implementation of the printf function in C.

## Overview

This project aims to create a custom printf function that can handle various conversion specifiers and flags.

## Features

- Handles conversion specifiers: %c, %s, %%, %d, %i, %u, %o, %x, %X
- Supports flags: -, 0, and .
- Handles field width and precision for non-custom conversion specifiers.
- Custom conversion specifiers: %R and %r
- Local buffer optimization to minimize write calls.

## Usage

To use the _printf function, include the main.h header file in your source code.

### Example

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    return (0);
}
