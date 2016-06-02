int i=5;
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
char path[255];
char command[255];
if( access( "Sully_5.c", F_OK ) != -1 ) {
    i--;
}
sprintf(path,"Sully_%d.c",i);
int fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
char*a="int i=%d;%c#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%c#include <unistd.h>%cint main()%c{%cchar path[255];%cchar command[255];%cif( access( %cSully_5.c%c, F_OK ) != -1 ) {%c    i--;%c}%csprintf(path,%cSully_%%d.c%c,i);%cint fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);%cchar*a=%c%s%c;%cdprintf(fd,a,i,10,10,10,10,10,10,10,10,10,34,34,10,10,10,34,34,10,10,34,a,34,10,10,34,34,10,10,10,34,34,10,10,10);%csprintf(command, %cclang -Wall -Wextra -Werror %%s -o Sully_%%d%c,path,i);%csystem(command);%cif(i > 0){%c    sprintf(command, %c./Sully_%%d%c,i);%c    system(command);}%c}%c";
dprintf(fd,a,i,10,10,10,10,10,10,10,10,10,34,34,10,10,10,34,34,10,10,34,a,34,10,10,34,34,10,10,10,34,34,10,10,10);
sprintf(command, "clang -Wall -Wextra -Werror %s -o Sully_%d",path,i);
system(command);
if(i > 0){
    sprintf(command, "./Sully_%d",i);
    system(command);}
}
