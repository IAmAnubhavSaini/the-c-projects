/* copyright 2013-2021 Anubhav Saini
 * github.com/IAmAnubhavSaini
 * project: github.com/IAmAnubhavSaini/the-c-projects
 *
 * purpose
 * -------
 * keyed decryption
 *
 * Licence
 * -------
 * MIT
 *
 * Usage
 * -----
 * keydecrip.exe [key] [inputs...]
 * e.g. keydecrip.exe "19384" bjdiebjdi will become aaaaaaaaa 
 * COOLTHING: key can be of almost any length, but it will make sense to keep key at most as long as input
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
#define ISNUM(c)   (c >= '0' && c <= '9')
#define SmallMIN 97
#define SmallMAX 122
#define CapMIN 65
#define CapMAX 90
#define MOD 26

char NegativeRotN(char, int, int, int, int N);

int main(int argc, char *argv[]){
 char *curr;
 char *key = argv[1];
 char *tempKey = key;
 //we want to start from third argument. Figure out why?
 argv++;argv++;
 while(argc-- > 2){
  curr = *argv++;
  while(*curr){
    if(!*key){ key = tempKey; }
    if(ISLOWER(*curr)){
	  printf("%c", NegativeRotN(*curr, SmallMIN, SmallMAX, MOD, (int)(*key++ - '0'))); //guess why - '0'
	}
	if(ISUPPER(*curr)){
	  printf("%c", NegativeRotN(*curr, CapMIN, CapMAX, MOD, (int)(*key++ - '0')));
	}
	curr++;
  }
  printf("\n");
 }
}

char NegativeRotN(char c, int min, int max, int mod, int N){
  char temp = c-N;
  if((int)c - N < min ){
    temp = (char)(max - ((int)c - N + 1 - min));// why -N+1 is a good exercise if you already don't know the logic.
  }
  return temp;
}