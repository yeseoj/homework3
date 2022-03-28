#include<stdio.h>

struct student {
    char lastName[13];  /* 13 bytes */                              // char형이 1바이트인데 그것이 13개 있으므로 13바이트
    int studentID;      /* 4 bytes */                               // int형이므로 4바이트
    short grade;        /* 2 bytes */                               // short형이므로 2바이트
};

int main() {
    struct student pst;                                             // 구조체 변수 pst를 선언하였다.

    printf("[----- 장예서, 2021041018 -----]\n\n");

    // 위에서 정의한 대로 단순히 덧셈하면 13+4+2=19바이트가 나와야 하지만, 각각의 멤버 변수에 패딩 처리가 되어 (13+3)+4+(2+2)=24바이트가 나온다.
    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));                     // int의 크기는 4바이트로 정해져 있다.
    printf("size of short = %ld\n", sizeof(short));                 // short의 크기는 2바이트로 정해져 있다.

    return 0;
}