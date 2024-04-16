#include <stdio.h>
#include <string.h>

// Define the structure for student record
struct Student {
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

int main() {

    // Create an array of 3 student records

    struct Student students[3];

    // Input student details for 3 students

    for (int i = 0; i < 3; i++) {

        printf("\nEnter details for student %d:\n", i+1);

        printf("Enter student ID: ");
        scanf("%d", &students[i].stu_id);

        printf("Enter student name: ");
        scanf("%s", students[i].stu_name);

        printf("Enter student age: ");
        scanf("%d", &students[i].stu_age);

        printf("Enter student course: ");
        scanf("%s", students[i].stu_course);

        printf("Enter student city: ");
        scanf("%s", students[i].stu_city);

        printf("Enter student standard: ");
        scanf("%d", &students[i].stu_standard);

        printf("Enter student school: ");
        scanf("%s", students[i].stu_school);
    }

    // Display student details for 3 students

    printf("\nStudent details:\n");
    
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("ID: %d\n", students[i].stu_id);
        printf("Name: %s\n", students[i].stu_name);
        printf("Age: %d\n", students[i].stu_age);
        printf("Course: %s\n", students[i].stu_course);
        printf("City: %s\n", students[i].stu_city);
        printf("Standard: %d\n", students[i].stu_standard);
        printf("School: %s\n", students[i].stu_school);
    }

    return 0;
}