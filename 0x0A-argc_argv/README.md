**C - argc, argv**
#How to use arguments passed to your program
#What are two prototypes of main that you know of, and in which case do you use one or the other
#How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

In programming, argv[0] is a command-line argument passed to a program when it is invoked from the command line. 
It is a string that represents the name or path of the program itself.

 argv is a parameter of the main function in C and C++ programming languages, which represents the command-line arguments passed to the program when it is invoked from the command line.

argv is an array of strings (i.e., an array of pointers to characters) that contains the arguments passed to the program. The first element of this array, argv[0], always holds the name of the program itself. The subsequent elements, argv[1] through argv[argc-1], hold the arguments passed to the program, with each argument as a separate element in the array.

For example, if you have a C program called myprogram, and you execute it from the command line like this:
$ ./myprogram arg1 arg2

Then argv would be an array of three strings, where argv[0] is "./myprogram", argv[1] is "arg1", and argv[2] is "arg2". The number of arguments passed to the program is stored in the argc parameter of the main function.

In programming, argv[argc] is an invalid element of the argv array, and accessing it can result in undefined behavior.

This is because the argv array in C and C++ programming languages is zero-indexed, which means that valid indices range from 0 to argc-1. The argc parameter of the main function specifies the number of command-line arguments passed to the program, so argv[argc] is beyond the bounds of the array.


