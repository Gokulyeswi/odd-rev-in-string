# odd-rev-in-string
#include<stdio.h>
#include<conio.h>
 main()
{
char a[]="She is beautifull girl";
char b[50][50];
int i=0,j=0,k=0;
while(a[i]!='\0')
{
b[k][j]=a[i];
i++;
j++;
if(a[i]==' ')
{
k++;
j=0;
}
}
for(i=0;i<=k;i++)
{
if(i%2==0)
printf("%s ",strrev(b[i]));
else
printf("%s ",b[i]);
}
getch();
}
