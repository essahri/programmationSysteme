#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int pfd1[2],pfd2[2];
int pere(){
close(pdf1[1]);
dup2(pfd1[0],0);
close(pfd1[0]);
execlp("cut","cat","/etc/passwd",(char *)0);
printf("cat failed");
return 2;}
int 
main(int argc,char *argv[],char *envp[])
{
pipe(pfd1);
switch(fork())
{case -1:perror("fork");exit(1);
case 0:fils();
default:pere();

}
return EXIT_SUCCESS;

int fils(){
close(pdf1[0]);
dup2(pfd1[1],1);
close(pfd1[1]);
execlp("cut","cat","/etc/passwd",(char *)0);
printf("cat failed");
return 2;

}


