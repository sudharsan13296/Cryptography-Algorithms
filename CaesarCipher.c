 #include <stdio.h>
#include <string.h>
void main()
{
char plain[200], cipher[200], decipher[200];
int a=0, key, i=0;
clrscr();
printf("\n Enter key :");
scanf("%d",&key);
memset(plain, NULL, sizeof(plain));
memset(cipher, NULL, sizeof(cipher));
memset(decipher, NULL, sizeof(decipher));
printf("\nEnter the text to be encrypted :" );
scanf("%s",&plain);
printf("\n Plain text  : %s\n", plain);
while(plain[i]!= NULL)
{  
a = plain[i];
a = a+key;
cipher[i] = a;
i++;
}
printf("\nEncrypted text : %s\n", cipher); 
i=0;
while( cipher[i] != NULL)
{   
a = cipher[i];
a = a-key;
decipher[i] = a;
i++;
}
printf("\nDecrypted text : %s\n", decipher);
getch();
 }
