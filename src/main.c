#include <stdio.h>

int addition(int a, int b);

int main()
{
    printf("Hello World!\r\n");
    int resultat = addition(2,5);
    printf("Resultat 2 + 5 = %d\r\n", resultat);
    printf("Good bye!\r\n");
    return 0;
}


int addition(int a, int b){
  int result = a + b;
  return result;
}
