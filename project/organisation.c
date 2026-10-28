/* Organisation Project - Simple version (Structures in C) */

#include <stdio.h>


struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
};

// Structure for the organisation 
struct Organisation {
    char name[50];
    char location[50];
    int count;                 // how many employees have added
    struct Employee emp[50];   // list of employees (maximum 50)
};

struct Organisation org;       // our one organisation


//1. Add an employee 
void addEmployee() {
    int i = org.count;         // next empty place in the list

    if (i >= 50) {
        printf("List is full!\n");
        return;
    }

    printf("Enter employee ID: ");
    scanf("%d", &org.emp[i].id);

    printf("Enter employee name: ");
    scanf(" %[^\n]", org.emp[i].name);

    printf("Enter designation: ");
    scanf(" %[^\n]", org.emp[i].designation);

    printf("Enter salary: ");
    scanf("%f", &org.emp[i].salary);

    org.count = org.count + 1;
    printf("Employee added!\n");
}

// 2. Show organisation details 
void showOrganisation() {
    printf("\n--- Organisation Details ---\n");
    printf("Name      : %s\n", org.name);
    printf("Location  : %s\n", org.location);
    printf("Employees : %d\n", org.count);
}

// 3. Show all employees 
void showEmployees() {
    int i;

    if (org.count == 0) {
        printf("\nNo employees yet.\n");
        return;
    }

    printf("\n--- Employee List ---\n");
    for (i = 0; i < org.count; i++) {
        printf("ID: %d | Name: %s | Designation: %s | Salary: %.2f\n",
               org.emp[i].id, org.emp[i].name,
               org.emp[i].designation, org.emp[i].salary);
    }
}

// 4. Search an employee by ID 
void searchEmployee() {
    int i, id, found = 0;

    printf("Enter ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < org.count; i++) {
        if (org.emp[i].id == id) {
            printf("Found! Name: %s | Designation: %s | Salary: %.2f\n",
                   org.emp[i].name, org.emp[i].designation, org.emp[i].salary);
            found = 1;
        }
    }

    if (found == 0) {
        printf("Employee not found.\n");
    }
}

// 5. Salary report 
void salaryReport() {
    int i, top = 0;
    float total = 0;

    if (org.count == 0) {
        printf("\nNo employees yet.\n");
        return;
    }

    for (i = 0; i < org.count; i++) {
        total = total + org.emp[i].salary;

        if (org.emp[i].salary > org.emp[top].salary) {
            top = i;           // remember who has the highest salary
        }
    }

    printf("\n--- Salary Report ---\n");
    printf("Total salary   : %.2f\n", total);
    printf("Average salary : %.2f\n", total / org.count);
    printf("Highest salary : %s (%.2f)\n", org.emp[top].name, org.emp[top].salary);
}


int main() {
    int choice;

    // take organisation name and location 
    printf("Enter organisation name: ");
    scanf(" %[^\n]", org.name);

    printf("Enter organisation location: ");
    scanf(" %[^\n]", org.location);

    org.count = 0;

    // Menu - repeats until user enters 0
    do {
        printf("\n===== MENU =====\n");
        printf("1. Add employee\n");
        printf("2. Show organisation details\n");
        printf("3. Show all employees\n");
        printf("4. Search employee by ID\n");
        printf("5. Salary report\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee();       break;
            case 2: showOrganisation();  break;
            case 3: showEmployees();     break;
            case 4: searchEmployee();    break;
            case 5: salaryReport();      break;
            case 0: printf("Goodbye!\n"); break;
            default: printf("Wrong choice, try again.\n");
        }
    } while (choice != 0);

    return 0;
}
