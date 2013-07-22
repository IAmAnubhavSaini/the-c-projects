/* Anubhav Saini
* 
* count vowels in input
* 
* This code listing is by no means optimal. Please do fork this project and improve. I would love to learn better way to solve this.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LOWER(c)   (c | 0x20)
#define ISALPHA(c) (LOWER(c)>='a'&&LOWER(c)<='z')
#define ISVOWEL(c) (LOWER(c)=='a' || LOWER(c)=='e' || LOWER(c)=='i' || LOWER(c)=='o' || LOWER(c)=='u')


void main(int argcount, char *arguments[]){
  char input;
  int count = 0;
  
  if(argcount > 2){
    printf("\nUsage: count vowel.exe [--per-line | pl]");
    abort();
  }

  if(argcount>1 && (strcmp(arguments[1], "--per-line") || strcmp(arguments[1], "pl"))){
    printf("\nKeep entering letters to count vowels, if bored, enter EOF (ctrl+z/c/x etc.) to exit.\n:> ");
    while(scanf("%c",&input) && input != EOF ){
      if(ISVOWEL(input)){
        count++;
      }
      else if(input == '\n'){
        printf("\nTotal vowels found: %d.\n:> ", count);
        count = 0;
      }
    }
  }

  else{
    printf("\nKeep entering letters to count vowels, if bored hit enter and end this program.\n:> ");
    while(scanf("%c",&input) && input != EOF && input != '\n'){
      if(ISVOWEL(input)){
        count++;
      }
    }
    printf("\nTotal vowels found: %d.\nBye!\n", count);
  }
}