#include <stdio.h>
using namespace std; 
main() {
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
            case '+':
               printf("%.2f\n", x+y);
               break;
            case '-':
               printf("%.2f\n", x-y);
               break;
            case '*':
               printf("%.2f\n", x*y);
               break;
            case '/':
               if (y != 0) printf("%.2f\n", x/y);
               else printf("Delenie na 0!\n");
         }
      }
      else printf("Neverno ukazan znak\n");
   }
}
