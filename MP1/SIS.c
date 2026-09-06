#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    int yearLevel;
    char course[100];
    float gwa;
    const char* gradeLevel;
};

const char* DetermineGradeLevel(int yearLevel);
void DisplayStudent(const struct Student* student);

int main() {
    struct Student student;
    int c;

    printf("Enter Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &student.age);

    printf("Enter Year Level (1-4): ");
    scanf("%d", &student.yearLevel);

    while ((c = getchar()) != '\n' && c != EOF);

    printf("Enter Course: ");
    fgets(student.course, sizeof(student.course), stdin);
    student.course[strcspn(student.course, "\n")] = '\0';

    printf("Enter GWA: ");
    scanf("%f", &student.gwa);

    student.gradeLevel = DetermineGradeLevel(student.yearLevel);

    DisplayStudent(&student);

    return 0;
}

const char* DetermineGradeLevel(int yearLevel) {
    switch (yearLevel) {
        case 1:
            return "Freshman";
        case 2:
            return "Sophomore";
        case 3:
            return "Junior";
        case 4:
            return "Senior";
        default:
            return "Unknown";
    }
}

void DisplayStudent(const struct Student* student) {
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", student->name);
    printf("Age: %d\n", student->age);
    printf("Year Level: %d\n", student->yearLevel);
    printf("Grade Level: %s\n", student->gradeLevel);
    printf("Course: %s\n", student->course);
    printf("GWA: %f\n", student->gwa);
}