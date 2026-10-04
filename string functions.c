//printing full name using string functions
#include <stdio.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);
    puts(str);

    return 0;
}


//make a program that prints user's name and prints it's length
#include <stdio.h>

int countLength(char arr[]);
int main() {
   char name[100];
    fgets(name, 100, stdin);
    printf("length is: %d", countLength(name));

    return 0;
}

int countLength(char arr[]){
    int count=0;
    for (int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}

//check if a given character is present in a string or not

#include<stdio.h>
#include<string.h>
void checkChar(char str[], char ch);

int main(){
    char str[]="helloworld";
    char ch='x';
    checkChar(str, ch);
    return 0;
}

void checkChar(char str[], char ch){
    for(int i=0; str[i]!=0; i++){
        if(str[i]==ch){
            printf("character is present");
            return;
        }
    }
    printf("character is not present");
}
