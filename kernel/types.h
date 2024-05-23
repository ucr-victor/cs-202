typedef unsigned int   uint;//Using uint as an alias can make the code more concise
typedef unsigned short ushort;//unsigned short is often used to represent a smaller range of unsigned integers
typedef unsigned char  uchar;//unsigned char is used to represent an unsigned number of byte size, often used to process byte data

typedef unsigned char uint8;//Make it clear that this is an 8-bit unsigned integer
typedef unsigned short uint16;//Used to explicitly represent a 16-bit unsigned integer
typedef unsigned int  uint32;//Indicates that this is a 32-bit unsigned integer. 
    //This kind of naming is common in application scenarios where the size of integers needs to be ensured, 
    //such as network programming or system-level programming.
typedef unsigned long uint64;//Indicates that this is a 64-bit unsigned integer. 
    //Note that unsigned long may have different sizes on different platforms (such as 32-bit and 64-bit systems), 
    //usually 64-bit on 64-bit systems.

typedef uint64 pde_t;//Usually used in a specific system programming context, 
    //such as the operating system's Page Directory Entry
