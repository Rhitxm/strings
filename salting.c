//find the salted form of the password entered by the user if salt is '123' added to the end

#include<stdio.h>
#include<string.h>
void salting (char password[]);

int main(){
   char password[100];
    scanf("%s", password);
    salting(password);
return 0;
}

void salting(char password[]){
    char salt[]="123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}
