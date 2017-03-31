#include <stdio.h>

int main(void)
{
        float num1,
              num2;
        char oper;

        do
        {
            scanf("%f", &num1);
            scanf(" %c",&oper);
            scanf("%f", &num2);

            switch( oper )
            {
                case '+':
                        printf("%.2f\n\n", num1 + num2);
                        break;

                case '-':
                        printf("%.2f\n\n", num1 - num2);
                        break;

                case '*':
                        printf("%.2f\n\n", num1 * num2);
                        break;

                case '/':
                        if(num2 != 0)
                            printf("%.2f\n\n", num1 / num2);
                        else
                            printf("Nao existe divisao por 0\n\n");
                        break;

                case '%':
                        printf("%d\n\n", (int)num1 % (int)num2);
                        break;

                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf(" Operador invalido\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");
            }

        }while(num1 != 0 && oper != '0' && num2 != 0);

}
