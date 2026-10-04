//string values that use pointers can be changed

#include <stdio.h>

int main() {
   char *canChange="hello world";
   puts(canChange);
    canChange="hello";
    puts(canChange);
    canChange="hello";
    puts(canChange);
    canChange="madafaka";
    puts(canChange);
    

    return 0;
}
