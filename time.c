#include <stdio.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>


int main(){

alarm(5);	
printf("after seconds!");
return 0;

}
