#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

    // PRINT MAXIMUM ELEMENT OF AN 2D ARRAY
    // PRINT ITS INDICES

int main()
{

    int marks[3][3] = {89,35,34,26,15,94,64,26,49};
    int max = INT_MIN;
    
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            if (max < marks[i][j])
                max = marks[i][j];
       }
    }

    printf("MAX = %d\n",max);

    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            if (max == marks[i][j])
            {
                printf("INEX = (%d,%d)",i,j);
                break;
            }
       }
    }
    
    return 0;
}