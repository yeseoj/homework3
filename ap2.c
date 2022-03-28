#include<stdio.h>
#include<stdlib.h>

void main() {
    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    plist[0] = (int*)malloc(sizeof(int));                   // plist[0]�� int ũ��(4����Ʈ)��ŭ heap �������� �޸𸮸� ���� �Ҵ��� ���� ���� �ּҸ� �����Ѵ�.

    printf("[----- �忹��, 2021041018 -----]\n\n");

    printf("list[0] \t= %d\n", list[0]);                    // list[0]�� ���� ������ ���� ��� 10�̴�.
    printf("address of list \t= %p\n", list);               // �迭�� list�� �迭 list�� ���� �ּҿ� ����.
    printf("address of list[0] \t= %p\n", &list[0]);        // list[0]�� �ּ��� &list[0]�� �迭 list�� ���� �ּҿ� ������ list�� ����.
    printf("address of list + 0 \t= %p\n", list + 0);       // list + 0�� ���� ���� �ּ� ���� 0ĭ��ŭ ������ ���� �ּҷ� list=&list[0]�� ���� ����.
    printf("address of list + 1 \t= %p\n", list + 1);       // list + 1�� ���� ���� �ּҿ��� 1ĭ(int�� ���� 4����Ʈ)��ŭ ������ ���� �ּҷ� &list[1]�� ���� ����.
    printf("address of list + 2 \t= %p\n", list + 2);       // list + 2�� ���� ���� �ּҿ��� 2ĭ(int�� ���� 8����Ʈ)��ŭ ������ ���� �ּҷ� &list[2]�� ���� ����.
    printf("address of list + 3 \t= %p\n", list + 3);       // list + 3�� ���� ���� ���� �ƶ����� &list[3]�� ���� ����.
    printf("address of list + 4 \t= %p\n", list + 4);       // list + 4�� ���� ���� ���� �ƶ����� &list[4]�� ���� ����.
    printf("address of list[4] \t= %p\n", &list[4]);        // list[4]�� �ּ��� &list[4]�� ������ ����ߵ��� list + 4�� ����.

    free(plist[0]);                                         // heap������ ���� �Ҵ��� �޸𸮸� ������ �ش�.
}