#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,n,m,p,q;
printf("enter order of matrix1:\n");
scanf("%d%d",&n,&m);
printf("enter order of matrix2:\n");
scanf("%d%d", &p,&q);

if(m!=p)
{
printf("matrix multiplication\n");
return -1;
}
printf("enter the elements\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the elements of matrix2:\n");
for(i=0;i<1;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<p;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("matrix1\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("matrix2\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("resultant matrix\n");
for(i=0;i<n;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}


