#include <stdio.h>
#include <stdlib.h>
#define buffer 30

void ignore_me_init_buffering() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
}


void argue() {
    char input [30];
    while (1) {
        printf("the earth is flat, try me\n");
	fgets(input, 300, stdin);
    }
}

void stop_arguing(int a, int b, int c, int d) {
    if (a != 0x4f4f4f4f || b != 0xa1a1b1b1b || c != 0xff5e7133 || d != 0x100170845) {
	printf("I knew I would win!");
	exit(0);
    }
    printf("..You're right");
    system("cat flag.txt\n");
}

int main() {
    ignore_me_init_buffering();
    argue();
}
