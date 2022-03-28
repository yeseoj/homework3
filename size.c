#include<stdio.h>
#include<stdlib.h>

void main() {
    int** x;

    printf("[----- 장예서, 2021041018 -----]\n\n");

    printf("sizeof(x) = %lu\n", sizeof(x));         // x는 이중 포인터 변수로, 포인터의 주소를 담는 변수이므로 그 크기는 64bit machine 기준 8바이트이다.
    printf("sizeof(*x) = %lu\n", sizeof(*x));       // *x는 포인터 변수로, 주소를 담는 변수이므로 그 크기는 64bit machine 기준 8바이트이다.
    printf("sizeof(**x) = %lu\n", sizeof(**x));     // **x는 int형 변수로, int의 크기가 4바이트이므로 변수의 크기 역시 4바이트이다.
}