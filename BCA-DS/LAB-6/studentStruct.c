// 31. Write a program to read data of students in array of structure and print it.

#include<stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];
    
    //enter student details
    printf("Enter details of students:\n");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("roll number: ");
        scanf("%d", &s[i].roll);
        printf("name: ");
        scanf("%s", s[i].name);
        printf("marks: ");
        scanf("%f", &s[i].marks);
    }
    
    //display student details
    printf("\nStudent Details:\n");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
    
    return 0;
}