//Q72: Find the sum of all elements in a matrix.

#include<stdio.h>
int main() {
    int matrix[10][10], sum = 0, i, j, rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("The sum of all elements in the matrix is: %d\n", sum);
    return 0;
}