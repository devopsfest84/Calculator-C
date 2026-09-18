#include <stdio.h>

int main()
{
    float a, result;
    char op, again;

    printf("------calculator------\n\n");

    printf("Instructions:\n");
    printf("+  Addition\n");
    printf("-  Subtraction\n");
    printf("*  Multiplication\n");
    printf("/  Division\n");
    printf("=  Get final result\n");
    printf("q  Quit calculator\n\n");

    while(1)
    {
        result = 0;

        printf("Enter number: ");
        scanf("%f", &result);

        while(1)
        {
            printf("Enter operator: ");
            scanf(" %c", &op);

            while(getchar() != '\n');

            if(op == '=')
            {
                printf("\nFinal Result = %.2f\n", result);

                printf("Do you want to open new calculator? (y/n): ");
                scanf(" %c", &again);

                while(getchar() != '\n');

                if(again == 'y' || again == 'Y')
                {
                    printf("\n");
                    break;
                }
                else
                {
                    printf("\nFinal Result = %.2f\n", result);
                    printf("Exiting calculator...\n");
                    return 0;
                }
            }

            if(op == 'q' || op == 'Q')
            {
            	prinf("\n Final result=%.2f\n",result);
                printf("\nExiting calculator...\n");
                return 0;
            }

            if(op != '+' && op != '-' && op != '*' && op != '/')
            {
                printf("\nInvalid operator.\n");
                continue;
            }

            while(1)
            {
                printf("Enter number: ");

                if(scanf("%f", &a) != 1)
                {
                    printf("\nInvalid number.\n");
                    while(getchar() != '\n');
                    continue;
                }

                while(getchar() != '\n');
                break;
            }

            switch(op)
            {
                case '+':
                    result = result + a;
                    break;

                case '-':
                    result = result - a;
                    break;

                case '*':
                    result = result * a;
                    break;

                case '/':
                    if(a == 0)
                    {
                        printf("\nCannot divide by zero.\n");
                        continue;
                    }

                    result = result / a;
                    break;
            }

            printf("Result = %.2f\n", result);
        }
    }

    return 0;
}
