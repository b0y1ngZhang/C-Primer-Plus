主调函数把它的参数存储在被称为栈（stack）的临时存储区，被调函数从栈中读取这些参数。
主调函数根据函数调用中的实际参数决定传递的类型，而被调函数根据它的形式参数读取值。

Assuppose that the Linux system has GNU C Compiler GCC installed. Assuming that file1.c and file2.c are two files with C functions, the following command will compile two files and generate an executable named a.out:
gcc file1.c file2.c
In addition,two target files named file1.o and file2.o are generated. If file1.c is later changed and file2.c remains unchanged, you can use the following command to compile the first file and merge it with the target code of the second file:
gcc file1.o file2.c

It is a good programming habit to put function prototypes and defined character constants in the header file.