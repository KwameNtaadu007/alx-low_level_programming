**STATIC LIBRARY**

A "C" library is a collection of precompiled functions and routines that can be used by C programs to perform specific tasks or operations. 
To create a static "C" library using "ar" and "ranlib", you can follow these steps:

Create a directory where you will store your library files. For example, you can create a directory called "lib" in your project's root directory.

Write your library functions in separate ".c" files. For example, if you have two functions called "add" and "subtract", you can create two files called "add.c" and "subtract.c" in your "lib" directory.

Compile each of the ".c" files using the "gcc" command, like this:
	gcc -c add.c
	gcc -c subtract.c

This will produce two object files called "add.o" and "subtract.o".

Use the "ar" command to create a static library archive from the object files, like this:
	ar rcs libmylib.a add.o subtract.o

This will create a static library archive called "libmylib.a" that contains the object files "add.o" and "subtract.o".

Finally, use the "ranlib" command to add an index to the library archive, like this:
	ranlib libmylib.a

This will create an index in the library archive that allows the linker to quickly find the functions in the library.

Now you can link your program with the static library by adding the "-lmylib" option to the "gcc" command, like this:

gcc -o myprogram myprogram.c -L./lib -lmylib


