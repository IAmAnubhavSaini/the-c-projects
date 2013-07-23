/* Anubhav Saini
* 
* counts words in c
*
*/
#include<stdio.h>
#include<stdlib.h>

char boundaries[12] = { ' ', ',', '-', '!', '@', '#', '$', '&', ':', ';', '(', ')' };

#define LOWER(c)            (c | 0x20)
#define ISALPHA(c)          (LOWER(c) >= 'a' && LOWER(c) <= 'z')
#define ISNUM(c)            ((c) >= '0' && (c) <= '9')
#define ISALPHANUM(c)       (ISALPHA(c) || ISNUM(c))
#define ISWORDBOUNDARY(c)   \
  ( \
  (c)==boundaries[0]  || \
  (c)==boundaries[1]  || \
  (c)==boundaries[2]  || \
  (c)==boundaries[3]  || \
  (c)==boundaries[4]  || \
  (c)==boundaries[5]  || \
  (c)==boundaries[6]  || \
  (c)==boundaries[7]  || \
  (c)==boundaries[8]  || \
  (c)==boundaries[9]  || \
  (c)==boundaries[10] || \
  (c)==boundaries[11]    \
  )

void main(){
  int wc = 0;//word count
  int insideWord = 0;
  char ch;

  printf("\nKeep entering and as soon as you hit EOF(ctrl+z), I will terminate and print result.\n:> ");

  while(scanf("%c", &ch) && ch!= EOF && ch != '\n'){
    if(ISALPHANUM(ch)){
      while(scanf("%c", &ch) && ch != '\n' && !ISWORDBOUNDARY(ch))
        ;
      wc++;
    }
  }
  printf("\nWord count: %d\n", wc);
}