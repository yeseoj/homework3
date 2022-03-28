#include<stdio.h>
#include<stdlib.h>

void main() {
    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));                   // plist[0]에 int 크기(4바이트)만큼 heap 영역에서 메모리를 동적 할당한 곳의 시작 주소를 저장한다.

    printf("[----- 장예서, 2021041018 -----]\n\n");

    printf("list[0] \t= %d\n", list[0]);                    // list[0]의 값은 위에서 정한 대로 10이다.
    printf("address of list \t= %p\n", list);               // 배열명 list는 배열 list의 시작 주소와 같다.
    printf("address of list[0] \t= %p\n", &list[0]);        // list[0]의 주소인 &list[0]은 배열 list의 시작 주소와 같으며 list와 같다.
    printf("address of list + 0 \t= %p\n", list + 0);       // list + 0의 값은 시작 주소 기준 0칸만큼 떨어진 곳의 주소로 list=&list[0]의 값과 같다.
    printf("address of list + 1 \t= %p\n", list + 1);       // list + 1의 값은 시작 주소에서 1칸(int형 기준 4바이트)만큼 떨어진 곳의 주소로 &list[1]의 값과 같다.
    printf("address of list + 2 \t= %p\n", list + 2);       // list + 2의 값은 시작 주소에서 2칸(int형 기준 8바이트)만큼 떨어진 곳의 주소로 &list[2]의 값과 같다.
    printf("address of list + 3 \t= %p\n", list + 3);       // list + 3의 값은 위와 같은 맥락으로 &list[3]의 값과 같다.
    printf("address of list + 4 \t= %p\n", list + 4);       // list + 4의 값은 위와 같은 맥락으로 &list[4]의 값과 같다.
    printf("address of list[4] \t= %p\n", &list[4]);        // list[4]의 주소인 &list[4]는 위에서 언급했듯이 list + 4와 같다.

    free(plist[0]);                                         // heap영역에 동적 할당한 메모리를 해제해 준다.
}