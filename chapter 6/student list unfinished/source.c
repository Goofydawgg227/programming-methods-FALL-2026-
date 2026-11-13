#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 1000
#define MAX_NAME_LEN 100

typedef struct {
    char reg_no[20];
    char name[MAX_NAME_LEN];
    int kor, eng, math;
    int total;
    float average;
    char grade;
}Student;

void print_students(FILE* fp, Student* students, int count)
{
    int i;

    fprintf(fp, "Reg.NO\tName\tKOR\tENG\tMATH\tTotal\tAvg\tGrade\n");

    for (i = 0; i < count; i++)
    {
        fprintf(fp, "%s\t%s\t%d\t%d\t%d\t%d\t%.2f\t%c\n",
            students[i].reg_no,
            students[i].name,
            students[i].kor,
            students[i].eng,
            students[i].math,
            students[i].total,
            students[i].average,
            students[i].grade);
    }
}

void letter_grades(Student* students, int count)
{
    Student* p;

    for (p = students; p < students + count; p++)
    {
        p->total = p->kor + p->eng + p->math;

        p->average = p->total / 3.0f;

        if (p->average >= 90)
            p->grade = 'A';

        else if (p->average >= 80)
            p->grade = 'B';

        else if (p->average >= 70)
            p->grade = 'C';

        else if (p->average >= 60)
            p->grade = 'D';

        else
            p->grade = 'F';
    }
}

int main(int argc, char* argv[])
{
    FILE* input_file, output_file;

    input_file = fopen(argv[1], "r");

    if (!input_file) {
        printf("Error opening input. \n");
        return 1;
    }

    Student students[MAX_STUDENTS] = { 0 };
    int count = 0;

    while (fscanf(input_file, "%s\t %s\t %d\t %d\t %d", students[count].reg_no, students[count].name, &students[count].kor, &students[count].eng, &students[count].math) != EOF)
    {
        count++;
    }

    fclose(input_file);

    letter_grades(students, count);

    output_file = fopen(argv[2], "w");
    if (!output_file) {
        printf("Error opening output. \n");
        fclose(input_file);
        return 1;
    }

    print_students(output_file, students, count);

    fclose(output_file);
}
