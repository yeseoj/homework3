#include<stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};

typedef struct {                                        // typedef를 통해 구조체에 student2라는 별칭을 붙였다.
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {

    struct student1 st1 = {'A', 100, 'A'};              // student1 구조체의 경우 struct 키워드를 앞에 꼭 붙여야 구조체 변수를 선언 가능하다.

    printf("[----- 장예서, 2021041018 -----]\n\n");

    printf("st1.lastName = %c\n", st1.lastName);        // 위에서 초기화된 대로 A가 나온다.
    printf("st1.studentId = %d\n", st1.studentId);      // 위에서 초기화된 대로 100이 나온다.
    printf("st1.grade = %c\n", st1.grade);              // 위에서 초기화된 대로 A가 나온다.


    student2 st2 = {'B', 200, 'B'};                     // typedef로 student2라는 별칭을 붙였기 때문에 struct 키워드 없이 구조체 변수를 선언 가능하다.

    printf("\nst2.lastName = %c\n", st2.lastName);      // 위에서 초기화된 대로 B가 나온다.
    printf("st2.studentId = %d\n", st2.studentId);      // 위에서 초기화된 대로 200이 나온다.
    printf("st2.grade = %c\n", st2.grade);              // 위에서 초기화된 대로 B가 나온다.

    student2 st3;                                       // st3이라는 student2 타입 구조체 변수를 새로 선언하였다.

    st3 = st2;                                          // 같은 데이터 타입 student2로 선언된 st3에 st2를 대입(복사)하는 것이 가능하다.

    printf("\nst3.lastName = %c\n", st3.lastName);      // 그대로 대입되었기 때문에 st2.lastName과 같다.
    printf("st3.studentId = %d\n", st3.studentId);      // st2.studentId와 같다.
    printf("st3.grade = %c\n", st3.grade);              // st2.grade와 같다.

//    /* equality test */
//    // 구조체끼리 이런 식으로 비교하는 것은 불가능하다. 만약 두 구조체 데이터가 서로 같은지 알고 싶다면 멤버끼리 일일이 비교하여야 한다.
//    if(st3 == st2)      /* not working */             
//        printf("equal\n");
//    else
//        printf("not equal\n");

    return 0;
}