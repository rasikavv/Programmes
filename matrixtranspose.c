#include<stdio.h>
int main()
{
  int a[10][10],t[10][10],i,j,r,c;
  printf("Enter rows and columns:");
  scanf("%d%d",&r,&c);
  
  printf("Enter the elements:\n");
  for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     {
      printf("Enter element a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
      }
    }
    
    printf("Entered matrix:\n");
    for(i=0;i<r;i++)
      {
       printf("\n");
       for(j=0;j<c;j++)
        {
         printf("%d ",a[i][j]);
        }
       }
      
      for(i=0;i<r;i++)
      {
       for(j=0;j<c;j++)
        {
         t[j][i]=a[i][j];
         }
       }
       printf("\nTranspose of a matrix is:\n");
       for(i=0;i<c;i++)
       {
        printf("\n");
        for(j=0;j<r;j++)
         {
          printf("%d ",t[i][j]);
         }
        }
        printf("\n");
        
  }
       
