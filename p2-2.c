#include<stdio.h>

void print1(int* ptr, int rows);

int main() {
    int one[] = {0, 1, 2, 3, 4};

    printf("[----- 장예서, 2021041018 -----]\n\n");

    printf("one         = %p\n", one);      // 배열명 one은 배열 one의 시작 주소와 같다.
    printf("&one        = %p\n", &one);     // 배열 one의 시작 주소로 one과 같다.
    printf("&one[0]     = %p\n", &one[0]);  // one[0]의 주소인 &one[0]은 배열 one의 시작 주소로 one=&one과 같다.
    printf("\n");

    print1(&one[0], 5);                     // 배열 one의 시작 주소와 크기를 인자로 넘겼다.

    return 0;
}

void print1(int* ptr, int rows) {           // 배열 one의 시작 주소를 포인터 ptr(call by reference)로, 크기를 rows(call by value)라는 매개변수로 받았다.
    /* print out a one-dimensional array using a pointer */

    int i;
    printf("Address \t Contents \n");
    for(i = 0; i < rows; i++)               // ptr + i, *(ptr + i)는 각각 ptr=배열 one의 시작 주소로부터 4바이트(int형 크기)만큼 i번 떨어진 주소와 저장된 값이다.
        printf("%p \t  %5d\n", ptr + i, *(ptr + i)); // 배열 one의 0번 인덱스부터 마지막 인덱스까지 해당하는 주소와 값을 차례로 출력한다.
    printf("\n");
}