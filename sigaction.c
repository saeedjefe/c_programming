#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>



void handle_interrupt(int sig)
{
printf("signal %d has been received", sig);	
exit(1);
}

int catch_signal(int sig, void (*handler) (int))
{
struct sigaction action;
action.sa_handler = handler ;
sigemptyset(&action.sa_mask);
action.sa_flags = 0;
sigaction( sig, &action , NULL);
}		


int main()
{

//use the struct sigaction
if(catch_signal(SIGINT, handle_interrupt)==-1){

fprintf(stderr, "can't map the handler");
exit(2);
}

raise(SIGINT);

while(1)
	sleep(1);
	

return 0;


}
