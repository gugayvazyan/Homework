#include<stdio.h>



  int main(){
        printf("Pls input uppercase letter \n");
        char lt = '\0';
        scanf("%c", &lt);
        lt = lt + 32;
// ('A' - 'a')
        printf("%c" , lt);



return 0;
  }
