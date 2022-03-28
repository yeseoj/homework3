#include<stdio.h>
#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;

void main() {

    printf("[----- 장예서, 2021041018 -----]\n\n");

    for(i = 0; i < MAX_SIZE; i++)               // 배열 input의 0번 인덱스부터 99번 인덱스(MAX_SIZE-1)까지 각 인덱스 번호와 같은 값을 저장한다.
        input[i] = i;

    /* for checking call by reference */
    printf("address of input = %p\n", input);   // 배열명 input은 배열 input의 시작 주소와 같다.

    answer = sum(input, MAX_SIZE);              // 배열명 input(=배열 input의 시작 주소)과 배열 input의 크기를 함수 sum의 인자로 넣었다.
    printf("The sum is: %f\n", answer);         // 함수 sum에서 tempsum이 리턴되어 answer에 저장된 값이 출력된다. (0~99의 합이므로 4950)
}

float sum(float list[], int n) {                // 배열 input의 시작 주소를 list[](call by reference), 크기를 n(call by value)이라는 매개 변수로 받았다.
    printf("value of list = %p\n", list);       // list의 값은 배열 input의 시작 주소를 복사해 저장했으므로 배열 input의 시작 주소를 출력한다.
    printf("address of list = %p\n\n", &list);  // 매개 변수 list는 메모리에 따로 할당되었으므로 위와 다른 값이 출력된다.

    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)                     // list[i]는 배열 input의 시작 주소(=list)에서 i*4바이트(float형 크기)만큼 떨어진 주소가 가리키는 값이다.
        tempsum += list[i];                     // 위의 맥락에서, tempsum에 배열 input의 값을 0번 인덱스부터 마지막 인덱스 값까지 더한 값을 저장하는 것이다.
    return tempsum;
}