/* Anubhav Saini
 * 
 * prints fibonacci number series upto n
 * usage: fibo.exe n
 *
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 
 void main(int argc, char *argv[]){
  int N;
  int a=0,b=1, temp =0;
  if(argc != 2){
	printf("\nUsage: %s n.\nExiting.", argv[0]);
	exit(0);
  }
  N = atoi(argv[1]);
  a = 0;
  b = 1;
  while(b < N){
    temp = a+b;
    a = b;
	b = temp;
	printf(" %d ", a);
  }
 }