#include <stdio.h>
#include <string.h>
#include <stderr.h>
int main(){

int fd[2];
if(pipe(fd)==-1){
fprintf(stderr,"can't pipe %d", strerror(errorno));
}
return 0;
}
