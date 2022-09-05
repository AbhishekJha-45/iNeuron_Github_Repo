#include <stdio.h>
struct employee
{
    int id;
    char Name[20];
    float salary;
} e1, *ptr;
void disEmployeeDetails()
{
    printf("\t__Employee Details__");
    printf("\nYour id is : %d", e1.id);
    printf("\nYour Name is : %s", e1.Name);
    printf("\nYour Salary is : %.2f", e1.salary);
}
int main()
{
    printf("Enter your Id: ");
    scanf("%d", &e1.id);
    printf("Enter Your Name : ");
    scanf("%s", e1.Name);
    printf("Enter Your Salary : ");
    scanf("%f", &e1.salary);
    disEmployeeDetails();
    return 0;
}