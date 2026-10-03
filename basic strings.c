//create a string firstName and lastName to store the details of user and print all the characters using loop


#include <stdio.h>
void printString(char arr[])

int main() {
    char firstName[]="Rhitam";
    char lastName[]="Paul";

    printString(firstName);
    printString(lastName);
    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i]!='\0' ; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}


//ask the user to enter their first name and print it back to them

#include <stdio.h>
void printString(char arr[]);

int main() {
    char name[50];
    printf("enter your first name:");
    scanf("%s", name);
    printf("your first name is: %s", name);
    return 0;
}

void printString(char arr[]){
    for (int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
}

//also trying this with full name

#include <stdio.h>
void printString(char arr[]);

int main() {
    char name[50];
    printf("enter your full name:");
    scanf("%s", name);
    printf("your full name is: %s", name);
    return 0;
}

void printString(char arr[]){
    for (int i=0; arr[i] !='\0'; i++){
        printf("%c", arr[i]);
    }
}
