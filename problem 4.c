#include<stdio.h>
int main()
{
    int row, col, i, j, n;
    printf("Enter row number: ");
    scanf("%d",&row);
    printf("Enter column number: ");
    scanf("%d",&col);
    int given[row][col], trans[col][row];
    printf("Enter array elements: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &given[i][j]);
        }
        printf("\n");

    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
           trans[j][i] = given[i][j];
        }
        printf("\n");
    }
    printf("Transpose of the given matrix: \n");
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
