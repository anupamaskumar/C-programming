#include<stdio.h>
int main()
{ 
   char s1[20],s2[10],s3[30];
   int i,j;
   printf("\nEnter first string");
   gets (s1);
   printf("\nEnter second string");
   gets(s2);
   i=j=0;
   while(s1[i]!='\0')
   {
      s3[i]=s1[i];
      i++;
   }
   while(s2[j]!='\0')
   {
      s3[i]=s2[j];
      i++;
      j++;
   }
   s3[i]='\0';
   printf("\nConcatenated String= %s",s3 );
   return 0;
}
