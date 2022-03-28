#include<stdio.h>

void print1(int* ptr, int rows);

int main() {
    int one[] = {0, 1, 2, 3, 4};

    printf("[----- �忹��, 2021041018 -----]\n\n");

    printf("one         = %p\n", one);      // �迭�� one�� �迭 one�� ���� �ּҿ� ����.
    printf("&one        = %p\n", &one);     // �迭 one�� ���� �ּҷ� one�� ����.
    printf("&one[0]     = %p\n", &one[0]);  // one[0]�� �ּ��� &one[0]�� �迭 one�� ���� �ּҷ� one=&one�� ����.
    printf("\n");

    print1(&one[0], 5);                     // �迭 one�� ���� �ּҿ� ũ�⸦ ���ڷ� �Ѱ��.

    return 0;
}

void print1(int* ptr, int rows) {           // �迭 one�� ���� �ּҸ� ������ ptr(call by reference)��, ũ�⸦ rows(call by value)��� �Ű������� �޾Ҵ�.
    /* print out a one-dimensional array using a pointer */

    int i;
    printf("Address \t Contents \n");
    for(i = 0; i < rows; i++)               // ptr + i, *(ptr + i)�� ���� ptr=�迭 one�� ���� �ּҷκ��� 4����Ʈ(int�� ũ��)��ŭ i�� ������ �ּҿ� ����� ���̴�.
        printf("%p \t  %5d\n", ptr + i, *(ptr + i)); // �迭 one�� 0�� �ε������� ������ �ε������� �ش��ϴ� �ּҿ� ���� ���ʷ� ����Ѵ�.
    printf("\n");
}