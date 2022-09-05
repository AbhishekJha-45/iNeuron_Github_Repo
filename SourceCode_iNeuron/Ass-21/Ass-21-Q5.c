#include <stdio.h>
struct employee
{
    int id;
    char Name[20];
    float salary;
};
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
    sortSalary();
    return 0;
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