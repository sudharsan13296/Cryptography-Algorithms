#include<stdio.h>
#include<conio.h>
int phi,M,n,e,d,C,FLAG;
int check()
{
	int i;
	for(i=3;e%i==0&&phi%i==0;i+2)
	{
		FLAG=1;
		return;
	}
	FLAG=0;
}

void encrypt()
{
	int i;
	C = 1;
	for(i=0;i<e;i++)
		C=C*M%n;
	C=C%n;
	printf("Encrypted keyword: %d",C);
}

void decrypt()
{
	int i;
	M=1;
	for(i=0;i<d;i++)
		M=M*C%n;
	M=M%n;
	printf("Decrypted keyword: %d",M);
}

void main()
{
	int p,q,s;
	clrscr();
	printf("Enter Two Relatively Prime Numbers: ");
	scanf("%d%d",&p,&q);
	n = p*q;
	phi=(p-1)*(q-1);
	printf("PHI value\t= %d",phi);
	do
	{
		printf("\nEnter e: ");
		scanf("%d",&e);
		check();
	}while(FLAG==1);
	d=1;
	do
	{
		s = (d*e)%phi;
		d++;
	}while(s!=1);
	d=d-1;
	printf("\nPublic Key: {%d,%d}",e,n);
	printf("\nPrivate Key: {%d,%d}",d,n);
	printf("\nEnter The Plain Text: ");
	scanf("%d",&M);
	encrypt();
	printf("\nEnter the Cipher text: ");
	scanf("%d",&C);
	decrypt();
	getch();
}