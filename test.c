#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handler(int sig){

printf("the is the %d signal ", sig);
	

}


int main(int argc, char * argv[]){

signal(2,handler);

	
return 0;
}
