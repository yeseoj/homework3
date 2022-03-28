#include<stdio.h>
#include<stdlib.h>

void main() {
    int list[5];
    int* plist[5] = {NULL,};

    plist[0] = (int*)malloc(sizeof(int));                   // heap영역에 int형 크기(4바이트)만큼 메모리를 동적 할당한 곳의 시작 주소를 plist[0]에 저장

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;                                        // plist[0]이 가리키는 곳에 200 저장

    printf("[----- 장예서­, 2021041018 -----]\n\n");

    printf("value of list[0] = %d\n", list[0]);             // list[0]의 값은 위에서 정한 대로 1
    printf("address of list[0]      = %p\n", &list[0]);     // list[0]의 주소인 &list[0]은 배열 list의 시작 주소와 같다.
    printf("value of list           = %p\n", list);         // 배열명 list는 배열 list의 시작 주소와 같으므로 &list[0]과 같다.
    printf("address of list (&list) = %p\n", &list);        // &list는 배열 list의 시작 주소로 list=&list[0]과 같다.


    printf("----------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);           // list[1]의 값은 위에서 정한 대로 100
    printf("address of list[1] = %p\n", &list[1]);          // list[1]의 주소 &list[1]은 배열 list가 int형이므로 시작 주소와 int형 크기 하나만큼(4바이트) 차이
    printf("value of *(list+1) = %d\n", *(list + 1));       // 시작 주소에서 4바이트(int형 크기 1번) 떨어진 list+1이라는 주소가 가리키는 곳의 값, list[1]과 같다.
    printf("address of list+1  = %p\n", list + 1);          // list + 1의 값은 바로 위와 같은 이유로 list[1]의 주소인 &list[1]과 같다.

    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);         // plist[0]이 가리키는 곳의 값은 위에서 정한 대로 200
    printf("&plist[0]          = %p\n", &plist[0]);         // plist[0]의 주소인 &plist[0]은 배열 plist의 시작 주소와 같다.
    printf("&plist             = %p\n", &plist);            // &plist는 배열 plist의 시작 주소를 의미, &plist[0]과 같다.
    printf("plist              = %p\n", plist);             // 배열명 plist은 배열 plist의 시작 주소를 의미, &plist=&plist[0]과 같다.
    printf("plist[0]           = %p\n", plist[0]);          // plist[0]의 값은 heap영역에 4바이트 동적 할당된 메모리의 시작 주소이다.
    printf("plist[1]           = %p\n", plist[1]);          // 아무것도 가리키지 않는 포인터로 보통 포인터 선언만 된 상태면 이렇게 나온다.
    printf("plist[2]           = %p\n", plist[2]);          // 이하 동문
    printf("plist[3]           = %p\n", plist[3]);
    printf("plist[4]           = %p\n", plist[4]);


    free(plist[0]);                                         // heap영역의 동적 할당된 메모리를 해제해 준다.
}