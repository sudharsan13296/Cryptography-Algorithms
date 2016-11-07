#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,ans[25][1],sum=0,mtrx[25][25],end;
char txt[25];
clrscr();
printf("\nEnter the string : ");
scanf("%s",txt);
//clrscr();
for(i=0;i<25;i++)
{
if(txt[i]>=97 && txt[i]<122) {}
else
{
end=i;
break;
}
}
for(i=0;i<end;i++)
{
//printf("initial : %d ",txt[i]);
txt[i]=txt[i]-'a';
//printf("final : %d ",txt[i]);
//printf("\n\n");
}
clrscr();
printf("\nEnter matrix...\n");
for(i=0;i<end;i++)
{
for(j=0;j<end;j++)
{
scanf("%d",&mtrx[i][j]);
}
}
for(i=0;i<end;i++)
{
sum=0;
for(j=0;j<end;j++)
{
sum+=mtrx[i][j]*(int)txt[j];
}
ans[i][0]=sum;
}
for(i=0;i<end;i++)
{
printf(" %c",((ans[i][0])%26)+97);
}
getch();
}
