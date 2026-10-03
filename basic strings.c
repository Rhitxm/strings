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
