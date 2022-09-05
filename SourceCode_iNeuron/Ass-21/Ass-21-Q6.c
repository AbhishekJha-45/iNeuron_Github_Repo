#include <stdio.h>
struct employee
{
    int id;
    char Name[20];
    float salary;
};
void highestSalary();
void sortSalary();
struct employee e1[3];
struct employee *ptr = NULL;
int main()
{
    ptr = e1;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter detail of student #%d\n", (i + 1));
        printf("Enter ID: ");
        scanf("%d", &ptr->id);
        printf("Enter first name: ");
        scanf("%s", ptr->Name);
        printf("Enter Points: ");
        scanf("%f", &ptr->salary);
        ptr++;
    }
    // highestSalary();
    sortSalary();
    return 0;
}
void highestSalary()
{
    ptr = e1;
    float highestSal = 0;
    int highestSalriedEmp;
    for (int i = 0; i < 3; i++)
    {
        if (ptr->salary >= highestSal)
        {
            highestSal = ptr->salary;
            highestSalriedEmp = ptr->id;

            ptr++;
        }
    }
    printf("HigheSt Salary is : %f of emloyee having Id : %d", highestSal, highestSalriedEmp);
}

void sortSalary()
{
    ptr = e1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (e1[i].salary > e1[j].salary)
            {
                float swap = e1[i].salary;
                e1[i].salary = e1[j].salary;
                e1[j].salary = swap;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Sorted Salary Sequence is : %.2f\n", e1[i].salary);
    }
}