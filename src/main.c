#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

const char* charFormat = "\033[?25l%c\b";
const char* lastPrintCharFormat = "%c\033[?25h";

int main(int argc, char* argv[]){

  int cicles = 5200;

  if(argc > 1){
    cicles = atoi(argv[1]);
  }

  srand(time(NULL));
  char c;
  while((c = getchar()) != EOF){

    if( c != ' ' && c != '\n'){
      for(int i = 0; i< cicles ; i++ ){
	char randc = (char)(rand() % (123 - 60) + 60);
	printf(charFormat, randc);
	sleep(0.7);
      }
    }
    
    printf(lastPrintCharFormat, c);
    sleep(0.7);
  }
  exit(0);
}
