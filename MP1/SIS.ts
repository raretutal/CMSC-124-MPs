interface Student{
    name: string;
    age: number;
    yearLevel: number;
    course: string;
    gwa: number;
    gradeLevel: string;
};

function determineGradeLevel(yearLevel: number): string {
    switch(yearLevel){
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
};

function displayStudent(student: Student): void{
    console.log("\n--- Student Information ---");
    console.log(`Name: ${student.name}`);
    console.log(`Age: ${student.age}`);
    console.log(`Year Level: ${student.yearLevel}`);
    console.log(`Grade Level: ${student.gradeLevel}`);
    console.log(`Course: ${student.course}`);
    console.log(`GWA: ${student.gwa.toFixed(6)}`);
};

const studentName = prompt("Enter Name:") ?? "";
const age = Number(prompt("Enter Age:"));
const yearLevel = Number(prompt("Enter Year Level (1-4):"));
const course = prompt("Enter Course:") ?? "";
const gwa = Number(prompt("Enter GWA:"));

const student: Student = {
    name: studentName,
    age,
    yearLevel,
    course,
    gwa,
    gradeLevel: determineGradeLevel(yearLevel)
};

displayStudent(student);