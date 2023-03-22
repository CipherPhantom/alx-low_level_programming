#include <stdio.h>

int main( )
{
    __asm__
    (
        "sub $0x10, %esp;\n"
        "movl $0x0, 0x0(%esp);\n"
        "lea message, %eax;\n"
        "movl %eax, 0x4(%esp);\n"
        "lea title, %eax;\n"
        "movl %eax, 0x8(%esp);\n"
        "movl $0x00000040, 0xc(%esp);\n"
        "call _MessageBoxA@16;\n"
        "movl $0, %eax;\n"
        "ret;\n"

        "message: .ascii \"C and assembly are for real men.\\n\\0\";"
        "title: .ascii \"Made by CaptainObvious!\\n\\0\";"
    );

    return 0;
}
