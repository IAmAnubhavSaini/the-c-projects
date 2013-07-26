/* copyright 2013-onwards Anubhav Saini
 * github.com/IAmAnubhavSaini
 * project: github.com/IAmAnubhavSaini/the-c-projects
 *
 * purpose
 * -------
 * abc becomes nop
 * search rot13 cipher and read
 *
 * Licence
 * -------
 * MIT
 *
 * Request
 * -------
 * This code listing is by no means optimal. Please do fork this project and improve. I would love to learn better way to solve this.
 *
 */

#include<stdio.h>

#define LOWER(c)   (c | 0x20)
#define ISALPHA(c) (LOWER(c)>='a'&&LOWER(c)<='z')
#define ISUPPER(c) (c >= 'A' && c <= 'Z')
#define ISLOWER(c) (c >= 'a' && c <= 'z')

#define SmallMIN 97
#define SmallMAX 122
#define CapMIN 65
#define CapMAX 90
#define MOD 26

char rot13(char, int, int, int);

int main(int argc, char *argv[]){
 char *curr ;
 argv++;
 while(argc-- > 1){
  curr = *argv++;
  while(*curr){
//    printf("%c", *curr);
    if(ISLOWER(*curr)){
	  printf("%c", rot13(*curr, SmallMIN, SmallMAX, MOD));
	}
	if(ISUPPER(*curr)){
	  printf("%c", rot13(*curr, CapMIN, CapMAX, MOD));
	}
	curr++;
  }
  printf("\n");
 }
}

char rot13(char c, int min, int max, int mod){
  char temp = c+13;
  if((int)c + 13 > max ){
    temp = (char)(min + ((int)c + 12 - max));// why 12 is a good exercise if you already don't know the logic.
  }
  return temp;
}