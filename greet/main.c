#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
      
  printf("OpenHello: greet");
  printf("\n Version pre-alpha 0.0.1 \n");
  printf("\n greet: No flags used \n");
  printf("Flags:");
  printf("\n \t -h --help Displays this text");
  printf("\n \t -v --version Shows the version number \n");
  printf(" \n add the name of the person in the arguments to use \n ");
  int i;
  for(i = 0; i < argc; i++) {
    if(strcmp(argv[i], "-v") == 0 ){
      system("clear");
      printf(" \n OpenHello: greet \n ");
      printf(" \n Version 0.0.1 pre-alpha \n ");
    }
    if(strcmp(argv[i], "--version") == 0) {
       system("clear");
      printf(" \n OpenHello: greet \n ");
      printf(" \n Version 0.0.1 pre-alpha \n ");
    }
    if(strcmp(argv[i], "--help") == 0) {
      system("clear");
        printf("\n Flags:");
  printf("\n \t -h --help Displays this text");
  printf("\n \t -v --version Shows the version number \n");
  printf(" \n add the name of the person in the arguments to use \n ");
    }
    if(strcmp(argv[i], "-h") == 0) {
      system("clear");
        printf("\n Flags:");
  printf("\n \t -h --help Displays this text");
  printf("\n \t -v --version Shows the version number \n");
  printf(" \n add the name of the person in the arguments to use \n ");
    }
     
    
  }
  if(strcmp(argv[1], "-h") == 0) {
    goto lol;
      }
  if(strcmp(argv[1], "--help") == 0) {
    goto lol;
  }
  if(strcmp(argv[1], "--version") == 0) {
    goto lol;
  }
if(strcmp(argv[1], "-v") == 0 ){
  goto lol;
 }
 system("clear");
   printf("\n Hello, %s \n", argv[1]);
 lol:

   return 0;

   
     
}
  
