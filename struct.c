#include<stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};

typedef struct {                                        // typedef�� ���� ����ü�� student2��� ��Ī�� �ٿ���.
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {

    struct student1 st1 = {'A', 100, 'A'};              // student1 ����ü�� ��� struct Ű���带 �տ� �� �ٿ��� ����ü ������ ���� �����ϴ�.

    printf("[----- �忹��, 2021041018 -----]\n\n");

    printf("st1.lastName = %c\n", st1.lastName);        // ������ �ʱ�ȭ�� ��� A�� ���´�.
    printf("st1.studentId = %d\n", st1.studentId);      // ������ �ʱ�ȭ�� ��� 100�� ���´�.
    printf("st1.grade = %c\n", st1.grade);              // ������ �ʱ�ȭ�� ��� A�� ���´�.


    student2 st2 = {'B', 200, 'B'};                     // typedef�� student2��� ��Ī�� �ٿ��� ������ struct Ű���� ���� ����ü ������ ���� �����ϴ�.

    printf("\nst2.lastName = %c\n", st2.lastName);      // ������ �ʱ�ȭ�� ��� B�� ���´�.
    printf("st2.studentId = %d\n", st2.studentId);      // ������ �ʱ�ȭ�� ��� 200�� ���´�.
    printf("st2.grade = %c\n", st2.grade);              // ������ �ʱ�ȭ�� ��� B�� ���´�.

    student2 st3;                                       // st3�̶�� student2 Ÿ�� ����ü ������ ���� �����Ͽ���.

    st3 = st2;                                          // ���� ������ Ÿ�� student2�� ����� st3�� st2�� ����(����)�ϴ� ���� �����ϴ�.

    printf("\nst3.lastName = %c\n", st3.lastName);      // �״�� ���ԵǾ��� ������ st2.lastName�� ����.
    printf("st3.studentId = %d\n", st3.studentId);      // st2.studentId�� ����.
    printf("st3.grade = %c\n", st3.grade);              // st2.grade�� ����.

//    /* equality test */
//    // ����ü���� �̷� ������ ���ϴ� ���� �Ұ����ϴ�. ���� �� ����ü �����Ͱ� ���� ������ �˰� �ʹٸ� ������� ������ ���Ͽ��� �Ѵ�.
//    if(st3 == st2)      /* not working */             
//        printf("equal\n");
//    else
//        printf("not equal\n");

    return 0;
}