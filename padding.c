#include<stdio.h>

struct student {
    char lastName[13];  /* 13 bytes */                              // char���� 1����Ʈ�ε� �װ��� 13�� �����Ƿ� 13����Ʈ
    int studentID;      /* 4 bytes */                               // int���̹Ƿ� 4����Ʈ
    short grade;        /* 2 bytes */                               // short���̹Ƿ� 2����Ʈ
};

int main() {
    struct student pst;                                             // ����ü ���� pst�� �����Ͽ���.

    printf("[----- �忹��, 2021041018 -----]\n\n");

    // ������ ������ ��� �ܼ��� �����ϸ� 13+4+2=19����Ʈ�� ���;� ������, ������ ��� ������ �е� ó���� �Ǿ� (13+3)+4+(2+2)=24����Ʈ�� ���´�.
    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));                     // int�� ũ��� 4����Ʈ�� ������ �ִ�.
    printf("size of short = %ld\n", sizeof(short));                 // short�� ũ��� 2����Ʈ�� ������ �ִ�.

    return 0;
}