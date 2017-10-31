#include <stdio.h>
int main(){
  int a = 10;

  do{
    printf("I will not conquer the world in the next %d years\n",a);
    do{
      printf("I will not conquer the world in the next %d years\n", a);
      a = a+1;
    }while(a<20);
    a = a-15;
  }while(a>0);

}

