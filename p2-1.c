#include<stdio.h>
#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

void main() {

    printf("[----- �忹��, 2021041018 -----]\n\n");

    for(i = 0; i < MAX_SIZE; i++)               // �迭 input�� 0�� �ε������� 99�� �ε���(MAX_SIZE-1)���� �� �ε��� ��ȣ�� ���� ���� �����Ѵ�.
        input[i] = i;

    /* for checking call by reference */
    printf("address of input = %p\n", input);   // �迭�� input�� �迭 input�� ���� �ּҿ� ����.

    answer = sum(input, MAX_SIZE);              // �迭�� input(=�迭 input�� ���� �ּ�)�� �迭 input�� ũ�⸦ �Լ� sum�� ���ڷ� �־���.
    printf("The sum is: %f\n", answer);         // �Լ� sum���� tempsum�� ���ϵǾ� answer�� ����� ���� ��µȴ�. (0~99�� ���̹Ƿ� 4950)
}

float sum(float list[], int n) {                // �迭 input�� ���� �ּҸ� list[](call by reference), ũ�⸦ n(call by value)�̶�� �Ű� ������ �޾Ҵ�.
    printf("value of list = %p\n", list);       // list�� ���� �迭 input�� ���� �ּҸ� ������ ���������Ƿ� �迭 input�� ���� �ּҸ� ����Ѵ�.
    printf("address of list = %p\n\n", &list);  // �Ű� ���� list�� �޸𸮿� ���� �Ҵ�Ǿ����Ƿ� ���� �ٸ� ���� ��µȴ�.

    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)                     // list[i]�� �迭 input�� ���� �ּ�(=list)���� i*4����Ʈ(float�� ũ��)��ŭ ������ �ּҰ� ����Ű�� ���̴�.
        tempsum += list[i];                     // ���� �ƶ�����, tempsum�� �迭 input�� ���� 0�� �ε������� ������ �ε��� ������ ���� ���� �����ϴ� ���̴�.
    return tempsum;
}