#include<stdio.h>
void main()
{
int a[5][5],b[5][5],z[10][10];
int i,j,r,c,p,q;
printf("enter the order for matrix :\n");
scanf("%d %d",&r,&c);
printf("enter the %d row and coloumn for first matrix\n",r*c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the order for matrix second:\n");
scanf("%d %d",&p,&q);
printf("enter the %d row and coloumn for second matrix\n",p*q);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
if(r==p&&c==q)
{
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
z[i][j]=a[i][j]+b[i][j];
}
for(i=0;i<p;i++)
{
for(j=0;j<c;j++)
{
printf("%d",z[i][j]);
}
}}}