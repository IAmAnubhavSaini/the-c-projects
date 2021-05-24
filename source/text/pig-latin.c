/* copyright 2013-2021 Anubhav Saini
 * github.com/IAmAnubhavSaini
 * project: github.com/IAmAnubhavSaini/the-c-projects
 *
 * purpose
 * -------
 * pig latin becomes igpay atinlay:
 * add "ay" after first-only consonant(s) and paste [consonant(s)"ay"] in the end and remove consonant(s) from the start.
 * read: wiki/pig_latin
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
#define ISVOWEL(c) (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };

void main(){
  char input;
  char Cons[7];
  int index = 0;
  while(1){
    index = 0;
    while(index < 4 && scanf("%c", &input)&& ISALPHA(input) && !ISVOWEL(input))
    {
      Cons[index++] = input;
    }
    Cons[index++] = 'a';
    Cons[index++] = 'y';
    Cons[index] = '\0';
    printf("%c", input);//because vowel is eaten up by above code.
    while(scanf("%c", &input) && input != EOF && input != '\n'){
      if(ISALPHA(input)){
        printf("%c",input);
      }
    }
    puts(Cons);


  }
}