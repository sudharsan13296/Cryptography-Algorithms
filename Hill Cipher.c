#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
#include&lt;string.h&gt;
void main()
{

int i,k,l;
              int j=0;
              char a[20],c[20],d[20];
              clrscr();
              printf(&quot;Enter the input string\n&quot;);
              gets(a);
              l=strlen(a);
              for(i=0;i&lt;l;i++)
              {
                       if(i%2==0)
                      c[j++]=a[i];
              }
              for(i=0;i&lt;l;i++)
              {
                      if(i%2==1)
                      c[j++]=a[i];

}
              c[j]=&#39;\0&#39;;
              printf(&quot;\n Cipher text after applying rail fence\n&quot;);
              printf(&quot;\n %s&quot;,c);
             //deciphering
             if(l%2==0)
             k=l/2;
              else
              k=(l/2)+1;
              for(i=0,j=0;i&lt;k;i++)
             {
                     d[j]=c[i];
                     j=j+2;
 }
for(i=k,j=1;i&lt;l;i++)
{
                     d[j]=c[i];
                     j=j+2;
              }
              d[l]=&#39;\0&#39;;
              printf(&quot;\n Text after decryption&quot;);
              printf(&quot;%s&quot;,d);
              getch();
}


