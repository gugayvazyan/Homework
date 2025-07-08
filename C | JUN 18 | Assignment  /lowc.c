#include<stdio.h>



  int main(){
        printf("Pls input lowercase letter \n");
        char lt = '\0';
        scanf("%c", &lt);
        lt = lt - 32;
// ('a' - 'A')
        printf("%c" , lt);



return 0;
  }
