#include <stdio.h>
#include "my_mat.h"
#define N 10

void A(int mat[N][N])
{

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

int B(int i, int j, int arr[N][N])
{
    if (arr[i][j] == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void C(int i, int j, int arr[N][N])
{

    if (B(i, j, arr) == 0)
    {
        printf("-1");
        printf("\n");
    }
    else
    {
        printf("%d", arr[i][j]);
        printf("\n");
    }
}

void printMat(int arr[N][N])
{
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int min(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    else if (y == 0)
    {
        return x;
    }

    return (x > y) ? y : x;
}

void algorithm(int arr[N][N])
{

    for (size_t k = 0; k < N; k++)
    {
        for (size_t i = 0; i < N; i++)
        {
            for (size_t j = 0; j < N; j++)
            {
                if (i == j)
                {
                    arr[i][j] = 0;
                }
                else if (i == k || j == k ){
                    arr[i][j] = arr[i][j];
                }
                else{
                    int temp = arr[i][k] + arr[k][j];
                    if (arr[i][k] == 0 || arr[k][j] == 0)
                    {
                        temp = 0;
                    }
                    arr[i][j] = min(arr[i][j], temp);
                }
            }
        }
    }
}
