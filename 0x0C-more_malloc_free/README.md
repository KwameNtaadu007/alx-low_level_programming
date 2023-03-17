**C - More malloc, free**


exit function:
The exit function is a standard library function in C programming language that terminates the program immediately. It is typically used to handle fatal errors or unexpected conditions that prevent the program from continuing execution. When the exit function is called, it terminates the program and returns control to the operating system, which may perform some cleanup operations before shutting down the process.

calloc function:
The calloc function is a memory allocation function in C programming language that allocates a block of memory of a specified size and initializes all the bytes to zero. It is similar to the malloc function, but it initializes the memory block to zero, making it useful for allocating arrays or structures that need to be initialized to a default value. The calloc function takes two arguments: the number of elements to allocate, and the size of each element.

realloc function:
The realloc function is a memory reallocation function in C programming language that changes the size of a previously allocated memory block. It takes two arguments: a pointer to the previously allocated memory block, and the new size of the memory block. If the new size is larger than the old size, realloc will attempt to allocate additional memory and copy the contents of the old memory block to the new memory block. If the new size is smaller than the old size, realloc will attempt to release the excess memory. If the realloc function fails to allocate or reallocate memory, it returns a NULL pointer.
