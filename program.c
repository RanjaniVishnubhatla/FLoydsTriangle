#include<stdio.h>
#include<conio.h>

void floyds_triangle(int n)
{
     
     int c=1;
     for(int i=1;i<=n;i++)
     {
           for(int j=1;j<=i;j++)
           {
                printf("%d ",c);
                c++;
           }
           printf("\n");
      }
}

void main()
{
      int r;
      printf("Enter the number of rows required in the Floyd's Triangle : ");
      scanf("%d",&r);
      floyds_trinagle(r);
      getch();
}
