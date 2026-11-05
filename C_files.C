
/* AUTHOR:Otieno joseph oduru
REGISTRATION NUMBER:BCS-05-0161/2024
Description:class work

*/

#include <stdio.h>
#include <stdlib.h>

void appendToFile();
void WriteToFile();
void ReadFromFile();

int main(){

    WriteToFile();
    ReadFromFile();
    appendToFile();
    
    return 0;
}

void WriteToFile(){
    FILE *fp;
    char sentence[300];
    
    fp = fopen("C:\\Users\\xadaj\\Desktop\\New folder (2)\\sample.txt", "w");
    if (fp == NULL){
        printf("error on creating the file path\n");
        exit(1);
    }
    
    printf("Enter a paragraph: ");

    fgets(sentence, sizeof(sentence), stdin);
    
    fputs(sentence, fp);
    
    printf("Paragraph successfully written to file.\n");
    fclose(fp);
}

void ReadFromFile(){
    FILE *fp;
    char ch;  
    
    fp = fopen("C:\\Users\\xadaj\\Desktop\\New folder (2)\\sample.txt", "r");
    if (fp == NULL){
        printf("error on opening the file\n");
        exit(1);
    }

    printf("--- File Contents ---\n");
    while((ch = getc(fp)) != EOF){
        putchar(ch);
    }
    
    printf("\nRead successful.\n");
    fclose(fp);
}

void appendToFile(){
    FILE *fp;
    char sentence[300];
    

    fp = fopen("C:\\Users\\xadaj\\Desktop\\New folder (2)\\sample.txt", "a");
    if (fp == NULL){
        printf("error on opening the file for appending\n");
        exit(1);
    }

    printf("Enter text to append: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    fputs(sentence, fp);
    
    printf("Text successfully appended to file.\n");
    fclose(fp);
}