#include<stdio.h>
#include<stdlib.h>

void main() {
    int** x;

    printf("[----- �忹��, 2021041018 -----]\n\n");

    printf("sizeof(x) = %lu\n", sizeof(x));         // x�� ���� ������ ������, �������� �ּҸ� ��� �����̹Ƿ� �� ũ��� 64bit machine ���� 8����Ʈ�̴�.
    printf("sizeof(*x) = %lu\n", sizeof(*x));       // *x�� ������ ������, �ּҸ� ��� �����̹Ƿ� �� ũ��� 64bit machine ���� 8����Ʈ�̴�.
    printf("sizeof(**x) = %lu\n", sizeof(**x));     // **x�� int�� ������, int�� ũ�Ⱑ 4����Ʈ�̹Ƿ� ������ ũ�� ���� 4����Ʈ�̴�.
}