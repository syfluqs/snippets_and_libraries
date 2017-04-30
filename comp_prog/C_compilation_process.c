/*

This is the process:

source           header   source header header
   \           /        \   |      /   /
    \         /          \  |     /   /
  PREPROCESSOR            PREPROCESSOR
       |                      |
       V                      V
 preprocessed code      preprocessed code
       |                      |
    COMPILER               COMPILER
       |                      |
       V                      V
  object code              object code
             \            /
              \          /
               \        /
                 LINKER
                   | 
                   V
               executable

Preprocessing

#include is for this first step. It instructs the preprocessor to processes the specified file, and insert the result into the output.

If A includes B and C, and B includes C, the preprocessor's output for A will include the processed text of C twice.

This is a problem, since it will result in duplicate declarations. A remedy is to use preprocessor variables track whether the source code has been included (aka header guards).

#ifndef EXAMPLE_H
#define EXAMPLE_H

// header contents

#endif
The first time, EXAMPLE_H is undefined, and the preprocessor will evaluate the contents within the ifndef/endif block. The second time, it will skip that block. So the processed output changes, and the definitions are included only once.

This is so common that there is a non-standard directive implemented by some compilers that is shorter and does not require choosing a unique preprocessor variable:

#pragma once

// header contents
You can figure out how portable you want your C/C++ code, and which header guard to use.

Headers guards will ensure the contents of each header file are present at most once in the preprocessed code for a translation unit.

Compiling

The compiler generates machine code from your preprocessed C/C++.

Generally, the header files only include declarations, not the actual definitions (aka implementations). The compiler includes a symbol table for anything that is currently missing an definition.

Linking

The linker combines the object files. It matches up the definitions (aka implementations) with the references to the symbol table.

It may be that two object files provide the definition, and the linker will take one. This happens if you've put executable code in your headers. This generally does not happen in C, but it happens very frequently in C++, because of templates.

The header "code", whether declarations or definitions, is included multiple times across all object files but the linker merges all of that together, so that it is only present once in the executable. (I'm excluding inlined functions, which are present multiple times.)


Taken from http://stackoverflow.com/a/30877548

 */