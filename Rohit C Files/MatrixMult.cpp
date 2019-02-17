#include<stdio.h>
#include<conio.h>
#define Max 10

int main()
{
int a[Max][Max],b[Max][Max],c[Max][Max];
int row1,row2,col1,col2;
row1=row2=col1=col2=0;
printf("Matrix A:\n");
printf("No. of Rows:\n");
scanf("%d",&row1);
printf("No. of columns:\n");
scanf("%d",&col1);
printf("Matrix B:\n");
printf("No. of Rows:\n");
scanf("%d",&row2);
printf("No. of columns:\n");
scanf("%d",&col2);

if(col1!=row2)
{
	printf("Multiplication not Possible because \n col1 and row2 are not equal.");
	return 0;
}
int i,j,k;
printf("Enter the elements of Matrix A row wise:\n");
for(i=0;i<row1;i++)
	for(j=0;j<col1;j++)
	scanf("%d",&a[i][j]);
	
printf("Enter the elements of Matrix B row wise:\n");
for(i=0;i<row2;i++)
	for(j=0;j<col2;j++)
	scanf("%d",&b[i][j]);

	for(i=0;i<row1;i++)
	for(j=0;j<col2;j++)
	{c[i][j]=0;
	for(k=0;k<row2;k++)
	c[i][j]=c[i][j]+a[i][k]*b[k][j];
	}
printf("Elements of Matrix C row wise:\n");
for(i=0;i<row1;i++)
{
	for(j=0;j<col2;j++)
	printf("%d  ",c[i][j]);	
	printf("\n");
}
return 0;	
}
