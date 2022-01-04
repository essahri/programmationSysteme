#include <stdio.h>
#include <memory.h>
#include <unistd.h>
int main( int argc, char ** argv )
{
/* create the pipe */
int  pfd[2];
if (pipe(pfd) == -1)
{
printf("pipe failed\n");
return 1;
}
}
