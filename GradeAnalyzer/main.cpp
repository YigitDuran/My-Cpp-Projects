#include <iostream>
//Consider we have 3 classes (ME, EE, CMP), each of which has 10 students. Each
//student takes the SAME 5 courses (HUM101, ENG101, MATH101, COMP101, SCI101)
//a) Write a method that takes grades of each student from the user.
//b) Write a method that computes the averages of 5 courses.
//c) Write a method that assigns letter grades to the given grades of the students (90
//- 100: A, 80 - 89: B, 70 - 79: C, 60 - 69: D, 0 - 59: F, and assume all grades are given
//between 0 and 100).

void readGrades(int grades[][10][5])
{
    for (int class_i = 0; class_i < 3; ++class_i)
    {
        for (int student_i = 0; student_i < 10; ++student_i)
        {
            for (int course_i = 0; course_i < 5; ++course_i)
            {
                std::cin >> grades[class_i][student_i][course_i];
            }
        }
    }
}

void course_avg(int grades[][10][5], double courseAverages[])
{
    for (int course_i = 0; course_i < 5; ++course_i)
    {
        courseAverages[course_i] = 0.0;

        for (int class_i = 0; class_i < 3; ++class_i)
        {
            for(int student_i = 0; student_i < 10; ++ student_i)
            {
                courseAverages[course_i] += grades[class_i][student_i][course_i];
            }
        }

        courseAverages[course_i] /= 30;
    }
}

void assignGrade(int grades[][10][5], char lettersGrades[][10][5]) //prof's convertToLetter function takes an integer(grade) and returns a letter than uses that function in the main
{
    for (int class_i = 0; class_i < 3; ++class_i)
    {
        for (int student_i = 0; student_i < 10; ++student_i)
        {
            for (int course_i = 0; course_i < 5; ++course_i)
            {
                if(grades[class_i][student_i][course_i] >= 90 && grades[class_i][student_i][course_i] <= 100)
                {
                    lettersGrades[class_i][student_i][course_i] = 'A';
                }
                else if(grades[class_i][student_i][course_i] >= 80 && grades[class_i][student_i][course_i] < 90)
                {
                    lettersGrades[class_i][student_i][course_i] = 'B';
                }
                else if(grades[class_i][student_i][course_i] >= 70 && grades[class_i][student_i][course_i] < 80)
                {
                    lettersGrades[class_i][student_i][course_i] = 'C';
                }
                else if(grades[class_i][student_i][course_i] >= 60 && grades[class_i][student_i][course_i] < 70)
                {
                    lettersGrades[class_i][student_i][course_i] = 'D';
                }
                else if(grades[class_i][student_i][course_i] >= 0 && grades[class_i][student_i][course_i] < 60)
                {
                    lettersGrades[class_i][student_i][course_i] = 'F';
                }
            }
        }
    }
}

int main()
{
    int grades[3][10][5]; //3; classes, 10; students, 5; courses

    readGrades(grades);

    double courseAverages[5];

    course_avg(grades, courseAverages);

    for (int course_i = 0; course_i < 5; ++course_i)
    {
        std::cout << courseAverages[course_i] << std::endl;
    }
    std::cout << std::endl;

    char lettersGrades[3][10][5];

    assignGrade(grades, lettersGrades);

    for (int class_i = 0; class_i < 3; ++class_i)
    {
        for (int student_i = 0; student_i < 10; ++student_i)
        {
            for (int course_i = 0; course_i < 5; ++course_i)
            {
                std::cout << lettersGrades[class_i][student_i][course_i] << " ";
            }
        }
    }

    return 0;
}