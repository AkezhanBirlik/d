#include <stdio.h>
using namespace std; 
main() {       // Начало программы
   float x,y;
   char sign='+';
   while (sign != '0') {
      printf("Vvedite: ");
      scanf("%c%*c", &sign);
      if (sign == '0') { break; }
      if (sign == '+' || sign == '-' || sign == '*' || sign == '/' ) {
         printf("x=");
         scanf("%f%*c", &x);
         printf("y=");
         scanf("%f%*c", &y);
         switch (sign) {      
            case '+':                  // кейс для операции сложения
               printf("%.2f\n", x+y);
               break;
            case '-':                  // кейс для операции вычитания
               printf("%.2f\n", x-y);
               break;
            case '*':                  // кейс для операции *
               printf("%.2f\n", x*y);
               break;
            case '/':                  // кейс для операции /
               if (y != 0) printf("%.2f\n", x/y);
               else printf("Delenie na 0!\n");
         }
      }
      else printf("Neverno ukazan znak\n");
   }
}
