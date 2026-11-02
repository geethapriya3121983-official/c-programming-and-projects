#include<stdio.h>
int main()
{
 char ch;
 FILE *fp;
 fp=fopen("data.txt","w");
 fprintf(fp,"learning a computer language was new to me.\n");
 fclose(fp);
 fp=fopen("data.txt","a");
 fprintf(fp,"I am comfortable with sir's teaching and i am enjoying it.\n");
 fclose(fp);
 fp=fopen("data txt","r");
 while((ch=fgetc(fp))!=EOF)
 {
 printf("%c",ch);
 }
 fclose(fp);
 return 0;
 }