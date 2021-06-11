#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void handler(int sig){

printf("can't get killed");

}

int main(int argc, char *argv[] ){

struct sigaction action;
action.sa_handler = handler ;
sigemptyset(&action.sa_mask);
action.sa_flags = 0;
sigaction(SIGINT,&action,NULL);

char name[30];
printf("please enter your name");
fgets(name, 30 , stdin);
printf("hello %s\n", name);

return 0;
}
