#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main()
{
int i=5;
char path[255];
char command[255];
sprintf(path,"Sully_%d.c",i);
int fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
char*a="#include <stdio.h>%c#include <stdlib.h>%c#include <fcntl.h>%cint main()%c{%cint i=%d;%cchar path[255];%cchar command[255];%csprintf(path,%cSully_%%d.c%c,i);%cint fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);%cchar*a=%c%s%c;%cdprintf(fd,a,10,10,10,10,10,i-1,10,10,10, 34,34,10,10,34,a,34,10,10,34,34,10,10,10 ,34,34,10,10,10);%csprintf(command, %cclang -Wall -Wextra -Werror %%s -o Sully_%%d%c,path,i);%csystem(command);%cif(i > 1){%c    sprintf(command, %c./Sully_%%d%c,i);%c    system(command);}%c}%c";
dprintf(fd,a,10,10,10,10,10,i-1,10,10,10, 34,34,10,10,34,a,34,10,10,34,34,10,10,10 ,34,34,10,10,10);
sprintf(command, "clang -Wall -Wextra -Werror %s -o Sully_%d",path,i);
system(command);
if(i > 1){
    sprintf(command, "./Sully_%d",i);
    system(command);}
}
