#include <stdio.h>
#define N 10
#include "my_mat.h"

int main()
{

    int matrix[N][N];
    char ch;
    do
    {
        ch = getchar();
        switch (ch)
        {
        case 'A':
        {
            A(matrix);
            // printMat(matrix);
            // printf("************\n");
            algorithm(matrix);
            // printMat(matrix);
        }
        break;
        case 'B':
        {
            int i, j;
            scanf("%d%d", &i, &j);
            if (B(i, j, matrix) == 0)
            {
                printf("False\n");
            }
            else
            {
                printf("True\n");
            }
        }
        break;
        case 'C':
        {
            int x, y;
            scanf("%d%d", &x, &y);
            C(x, y, matrix);
        }
        break;
            default:
            {
                break;
            }
        }

    } while (ch != 'D');
}
