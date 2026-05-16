#include <stdio.h>

struct Student
{
       int rollnumber;
       char name[50];
       float marks;
};

int main()
{
    int i, n;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    
    struct Student student[n];
    
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &student[i].rollnumber);
        printf("Name: ");
        scanf("%[^\n]",student[i].name);
        printf("marks: ");
        scanf("%f", &student[i].marks);
    }
    printf("\n student Details\n");
    for (i=1; i<n; i++);
    {
        printf("\nstudent %d\n", i + 1 );
        printf("Roll number:%d\n", student[i].rollnumber);
        printf("Name       :%s\n", student[i].name);
        printf("Marks      :%.2f\n", student[i].marks);
        
    }
    return 0;
}
