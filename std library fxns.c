//printing length of the entered name using library functions
//using strlen(str)
//counts number of characters excluding \0

#include<stdio.h>
#include<string.h>
int main(){
char name[]="Rhitam";
int length=strlen(name);
printf("length is: %d", length);
return 0;
}


//strcpy(newStr, oldStr)
//copies value of old string to new string



//strcat(firstStr, secStr)
//concatenates first string with second string

#include<stdio.h>
#include<string.h>
int main(){
   char firstStr[100]="hello";
    char secStr[100]="world";
    strcat(firstStr, secStr);
    puts(firstStr);
    
return 0;
}

//strcmp(firstStr, secStr)
//compares two strings and returns a value

#include<stdio.h>
#include<string.h>
int main(){
   char firstStr[100]="Apple";
    char secStr[100]="Banana";
    strcmp(firstStr, secStr);
    printf("%d\n", strcmp(firstStr, secStr));
    
return 0;
}
