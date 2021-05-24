/* copyright 2013-2021 Anubhav Saini
 * github.com/IAmAnubhavSaini
 * project: github.com/IAmAnubhavSaini/the-c-projects
 *
 * purpose
 * -------
 * reverses string
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
#include<stdlib.h>

#define MAXLEN 31
void Reversify(char *str){
  if(*str == '\0')
    return;
  else{
    Reversify(str+1);
    printf("%c", *str);
  }
}
void main(){
  char *input = (char*) malloc(sizeof(char)*MAXLEN);
  char *temp = input;
  char ch;
  int i = MAXLEN -1;
  printf("\nEnter string to be reversed, max len 30.\n:> ");
  while(scanf("%c", &ch) && ch != '\n' && i-->=0){
    *input++ = ch;
  }
  *input = '\0';
  input = temp;
  Reversify(input);
  printf("\nI am done!\n");
}