/* AUTHOR:Otieno joseph oduru
REGISTRATION NUMBER:BCS-05-0161/2024
Description:class work

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "student_records.txt"

void addStudentRecord();
void displayStudentRecords();
void saveStudentRecord();

int main() {
    int choice;

    do {
        printf("\n--- Student Records Management System ---\n");
        printf("1. Add a new student record (Appends data)\n");
        printf("2. Save / Write a custom record (Overwrite or new)\n");
        printf("3. Display all student records\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        getchar(); 

        switch (choice) {
            case 1:
                addStudentRecord();
                break;
            case 2:
                saveStudentRecord();
                break;
            case 3:
                displayStudentRecords();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}


void addStudentRecord() {

    FILE *filePointer;
    char name[50];
    char studentID[20];


    filePointer = fopen("C:\\Users\\xadaj\\Desktop\\New folder (2)\\sample.txt", "a");


    if (filePointer == NULL) {
        printf("Error: Could not open file for appending!\n");
        return;
    }

    printf("Enter Student Name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; 

    printf("Enter Student ID: ");
    fgets(studentID, sizeof(studentID), stdin);
    studentID[strcspn(studentID, "\n")] = 0; 

    char record[100];
    sprintf(record, "Name: %s | ID: %s\n", name, studentID);

   
    fputs(record, filePointer);

    
    fclose(filePointer);
    printf("Student record added successfully using fputs()!\n");
}


void saveStudentRecord() {
    
    FILE *filePointer;
    char data[100];

    
    filePointer = fopen("C:\\Users\\xadaj\\Desktop\\New folder (2)\\sample.txt", "w");

    
    if (filePointer == NULL) {
        printf("Error: Could not open file for writing!\n");
        return;
    }

    printf("Enter primary record details to save: ");
    fgets(data, sizeof(data), stdin);
    data[strcspn(data, "\n")] = 0;

    
    fputs(data, filePointer);
    fputs("\n", filePointer);

    
    fclose(filePointer);
    printf("Record saved successfully using 'w' mode!\n");
}


void displayStudentRecords() {
    
    FILE *filePointer;
    char buffer[256];
    char ch;

   
    filePointer = fopen("C:\\Users\\xadaj\\Desktop\\New folder (2)\\sample.txt", "r");

    
    if (filePointer == NULL) {
        printf("No records found or error opening file (File might not exist yet).\n");
        return;
    }

    printf("\n--- Reading Records using fgets() ---\n");
    
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    
    rewind(filePointer);
    
    printf("\n--- Verifying using getc() and putchar() ---\n");
    
    while ((ch = getc(filePointer)) != EOF) {
        putchar(ch);
    }

    
    fclose(filePointer);
}