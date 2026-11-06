/* AUTHOR:Otieno joseph oduru
REGISTRATION NUMBER:BCS-05-0161/2024
Description:home work

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "employees.txt"

void writeEmployee();
void readEmployee();
void appendEmployee();

int main() {
   
    writeEmployee();
    readEmployee();
    appendEmployee();
    readEmployee();

    return 0;
}

void writeEmployee() {
    FILE *file = fopen("C:\\Users\\xadaj\\Desktop\\New folder (2)\\sample.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    int id;
    char name[50];
    char department[50];

    printf("\n--- ENTER FIRST EMPLOYEE DETAILS (Write Mode) ---\n");
    printf("Enter Employee ID: ");
    scanf("%d", &id);
    getchar(); 

    printf("Enter Full Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    printf("Enter Department: ");
    fgets(department, sizeof(department), stdin);
    department[strcspn(department, "\n")] = 0; 

    
    fprintf(file, "ID: %d | Name: %s | Department: %s\n", id, name, department);

    fclose(file);
    printf("Employee record written successfully!\n");
}


void readEmployee() {
    FILE *file = fopen("C:\\Users\\xadaj\\Desktop\\New folder (2)\\sample.txt", "r");
    if (file == NULL) {
        printf("\nError: Could not open file for reading (File may not exist yet).\n");
        return;
    }

    printf("\n--- READING EMPLOYEE RECORDS (Character by Character) ---\n");
    
    
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    printf("----------------------------------------------------------\n");
}


void appendEmployee() {
    FILE *file = fopen("C:\\Users\\xadaj\\Desktop\\New folder (2)\\sample.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending!\n");
        return;
    }

    int id;
    char name[50];
    char department[50];

    printf("\n--- APPEND ANOTHER EMPLOYEE DETAILS (Append Mode) ---\n");
    printf("Enter Employee ID: ");
    scanf("%d", &id);
    getchar(); 

    printf("Enter Full Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    printf("Enter Department: ");
    fgets(department, sizeof(department), stdin);
    department[strcspn(department, "\n")] = 0;

    
    fprintf(file, "ID: %d | Name: %s | Department: %s\n", id, name, department);

    fclose(file);
    printf("Employee record appended successfully!\n");
}
