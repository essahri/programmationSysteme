#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void hand()
{
printf("Envoyer le signal SIGKILL pour me tuer\n");
}
int main()
{
printf("mon PID est %d\n",getpid());
signal(SIGINT,SIG_IGN);
signal(SIGQUIT,hand);
for(;;);
}
