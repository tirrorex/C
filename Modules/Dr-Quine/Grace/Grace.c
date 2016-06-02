/*
    com1
*/
#include <stdio.h>
#define MYSTRING char*a="/*%c    com1%c*/%c#include <stdio.h>%c#define MYSTRING char*a=%c%s%c;%c#define WRITE_IN_FILE FILE *f= fopen(%cGrace_kid.c%c,%cw+%c);%c#define FT()int main(){ WRITE_IN_FILE MYSTRING fprintf(f,a,10,10,10,10,34,a,34,10,34,34,34,34,10,10,10);}%cFT()%c";
#define WRITE_IN_FILE FILE *f= fopen("Grace_kid.c","w+");
#define FT()int main(){ WRITE_IN_FILE MYSTRING fprintf(f,a,10,10,10,10,34,a,34,10,34,34,34,34,10,10,10);}
FT()
