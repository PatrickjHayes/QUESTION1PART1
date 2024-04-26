#include "mbed.h"
#include <cstdio>

InterruptIn buttn(PC_13);

    void buttn_fall() {
    printf("button pressed\r\n");
}


// main() runs in its own thread in the OS
int main()
{
    printf("This is my EMBED question 1 part 1\r\n");

buttn.fall(&buttn_fall);
    while (true) {

    }
}

