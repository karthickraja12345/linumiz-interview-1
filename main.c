/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*C program to implement word count WC command of linux with following options

1) WC -l file_name

2) WC -w file_name

3) WC-c file_name

*/

#include<stdio.h>

#include<conio.h>

#include <process.h>

#include <string.h>

void main(int argc, char *argv[]);
{

FILE *f1;

char ch;

int c=0,l=0,w=0;

if (argc==1)

{

printf("invalid parameters");

}

if (argc>3)

{

printf("Too many parameters");

}

if (argc==3)

{

f1 fopen(argv[2],"r" ): //wc2.exe -l npp.txt

if (strcmp(argv[1], "-l")==0)

{

while((ch=getc (f1))!=EOF)
{

if (ch=='\n')

//       l=l-1;

printf("There are %d lines in the file", l );

}

else

if (strcmp(argv[1], "-w")==0)
{

while((ch=getc(f1))!=EOF)
{

if (ch=='\n' ¦¦ch==' ')
              w++;

}

//      w=w-1;
printf("There are %d words in the file",w);

}

else

if (strcmp(argv[1],"-c")==0)

{

while((ch=getc (f1))!=EOF)

{

if (ch!='\n'¦¦ch=' ')
             c++;

}

printf ("There are %d words in the file",c);

}

else


exit(0);

}
fclose(f1);
}
