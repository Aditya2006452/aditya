#include <stdio.h>
struct Employee {
    char name[20];
    int id;
    float salary;
};
int main() {
    int n;
    float total_salary = 0, average_salary;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        total_salary += employees[i].salary;
    }
    average_salary = total_salary / n;
    printf("\nThe average salary of the employees is: %.2f\n", average_salary);
    return 0;
}