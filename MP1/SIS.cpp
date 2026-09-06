#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;
    int yearLevel;
    std::string course;
    float gwa;
    std::string gradeLevel;
};

std::string DetermineGradeLevel(int yearLevel);
void DisplayStudent(const Student& student);

int main() {
    Student student;

    std::cout << "Enter Name: ";
    std::getline(std::cin, student.name);

    std::cout << "Enter Age: ";
    std::cin >> student.age;

    std::cout << "Enter Year Level (1-4): ";
    std::cin >> student.yearLevel;

    std::cin.ignore();
    std::cout << "Enter Course: ";
    std::getline(std::cin, student.course);

    std::cout << "Enter GWA: ";
    std::cin >> student.gwa;

    student.gradeLevel = DetermineGradeLevel(student.yearLevel);

    DisplayStudent(student);

    return 0;
}

std::string DetermineGradeLevel(int yearLevel) {
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

void DisplayStudent(const Student& student) {
    std::cout << "\n--- Student Information ---" << std::endl;
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Age: " << student.age << std::endl;
    std::cout << "Year Level: " << student.yearLevel << std::endl;
    std::cout << "Grade Level: " << student.gradeLevel << std::endl;
    std::cout << "Course: " << student.course << std::endl;
    std::cout << "GWA: " << student.gwa << std::endl;
}