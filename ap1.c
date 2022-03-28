#include<stdio.h>
#include<stdlib.h>

void main() {
    int list[5];
    int* plist[5] = {NULL,};

    plist[0] = (int*)malloc(sizeof(int));                   // heap������ int�� ũ��(4����Ʈ)��ŭ �޸𸮸� ���� �Ҵ��� ���� ���� �ּҸ� plist[0]�� ����

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;                                        // plist[0]�� ����Ű�� ���� 200 ����

    printf("[----- �忹����, 2021041018 -----]\n\n");

    printf("value of list[0] = %d\n", list[0]);             // list[0]�� ���� ������ ���� ��� 1
    printf("address of list[0]      = %p\n", &list[0]);     // list[0]�� �ּ��� &list[0]�� �迭 list�� ���� �ּҿ� ����.
    printf("value of list           = %p\n", list);         // �迭�� list�� �迭 list�� ���� �ּҿ� �����Ƿ� &list[0]�� ����.
    printf("address of list (&list) = %p\n", &list);        // &list�� �迭 list�� ���� �ּҷ� list=&list[0]�� ����.


    printf("----------------------------------------\n\n");
    printf("value of list[1]   = %d\n", list[1]);           // list[1]�� ���� ������ ���� ��� 100
    printf("address of list[1] = %p\n", &list[1]);          // list[1]�� �ּ� &list[1]�� �迭 list�� int���̹Ƿ� ���� �ּҿ� int�� ũ�� �ϳ���ŭ(4����Ʈ) ����
    printf("value of *(list+1) = %d\n", *(list + 1));       // ���� �ּҿ��� 4����Ʈ(int�� ũ�� 1��) ������ list+1�̶�� �ּҰ� ����Ű�� ���� ��, list[1]�� ����.
    printf("address of list+1  = %p\n", list + 1);          // list + 1�� ���� �ٷ� ���� ���� ������ list[1]�� �ּ��� &list[1]�� ����.

    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);         // plist[0]�� ����Ű�� ���� ���� ������ ���� ��� 200
    printf("&plist[0]          = %p\n", &plist[0]);         // plist[0]�� �ּ��� &plist[0]�� �迭 plist�� ���� �ּҿ� ����.
    printf("&plist             = %p\n", &plist);            // &plist�� �迭 plist�� ���� �ּҸ� �ǹ�, &plist[0]�� ����.
    printf("plist              = %p\n", plist);             // �迭�� plist�� �迭 plist�� ���� �ּҸ� �ǹ�, &plist=&plist[0]�� ����.
    printf("plist[0]           = %p\n", plist[0]);          // plist[0]�� ���� heap������ 4����Ʈ ���� �Ҵ�� �޸��� ���� �ּ��̴�.
    printf("plist[1]           = %p\n", plist[1]);          // �ƹ��͵� ����Ű�� �ʴ� �����ͷ� ���� ������ ���� �� ���¸� �̷��� ���´�.
    printf("plist[2]           = %p\n", plist[2]);          // ���� ����
    printf("plist[3]           = %p\n", plist[3]);
    printf("plist[4]           = %p\n", plist[4]);


    free(plist[0]);                                         // heap������ ���� �Ҵ�� �޸𸮸� ������ �ش�.
}