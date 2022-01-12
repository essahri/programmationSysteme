#include <sys/types.h>
#include <sys/stat.h>
int main (void) {
 char*nom_tube = "tube_test2"; 
mkfifo (nom_tube, 0600); 
return(0); }
