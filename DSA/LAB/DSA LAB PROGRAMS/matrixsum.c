#include <stdio.h>
void sum_matrix(int matrix1[10][10],int matrix2[10][10],int c,int d,int m,int n,int sum[10][10]);


int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10],transpose[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
            scanf("%d", &second[c][d]);
   sum_matrix(first,second,c,d,m,n,sum);
   printf("The transpose of the third matrix(sum matrix) is:-\n");
   for(c=0;c<n;c++)
   {
   		for(d=0;d<m;d++)
		{
   			transpose[c][d]	=sum[d][c];
   			printf("%d\t",transpose[c][d]);
		}
		printf("\n");
   }
   return 0;
}

void sum_matrix(int matrix1[10][10],int matrix2[10][10],int c,int d,int m,int n,int sum[10][10]){
	printf("Sum of entered matrices:-\n");
 
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = matrix1[c][d] + matrix2[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
}
