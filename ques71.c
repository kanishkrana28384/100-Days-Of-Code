//Q71: Read and print a matrix.

#include<sdtio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}