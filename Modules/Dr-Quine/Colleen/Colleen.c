#include <stdio.h>
/*
    com1
*/
void uselessFunc(void){}
int main()
{/*
    com2
*/uselessFunc();
char*a="#include%c<stdio.h>%c/*%c%c%c%c%ccom1%c*/%cvoid%cuselessFunc(void){}%cint%cmain()%c{/*%c%c%c%c%ccom2%c*/uselessFunc();%cchar*a=%c%s%c;printf(a,32,10,10,32,32,32,32,10,10,32,10,32,10,10,32,32,32,32,10,10,34,a,34,10);}%c";printf(a,32,10,10,32,32,32,32,10,10,32,10,32,10,10,32,32,32,32,10,10,34,a,34,10);}
