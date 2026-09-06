from dataclasses import dataclass


@dataclass
class Student:
    name: str
    age: int
    year_level: int
    course: str
    gwa: float
    grade_level: str


def determine_grade_level(year_level: int) -> str:
    match year_level:
        case 1:
            return "Freshman"
        case 2:
            return "Sophomore"
        case 3:
            return "Junior"
        case 4:
            return "Senior"
        case _:
            return "Unknown"


def display_student(student: Student) -> None:
    print("\n--- Student Information ---")
    print(f"Name: {student.name}")
    print(f"Age: {student.age}")
    print(f"Year Level: {student.year_level}")
    print(f"Grade Level: {student.grade_level}")
    print(f"Course: {student.course}")
    print(f"GWA: {student.gwa:.6f}")


def main() -> None:
    name = input("Enter Name: ")
    age = int(input("Enter Age: "))
    year_level = int(input("Enter Year Level (1-4): "))
    course = input("Enter Course: ")
    gwa = float(input("Enter GWA: "))

    grade_level = determine_grade_level(year_level)

    student = Student(
        name=name,
        age=age,
        year_level=year_level,
        course=course,
        gwa=gwa,
        grade_level=grade_level,
    )

    display_student(student)


if __name__ == "__main__":
    main()