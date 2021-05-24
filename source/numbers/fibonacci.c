/* copyright 2013-2021 Anubhav Saini
 * github.com/IAmAnubhavSaini
 * project: github.com/IAmAnubhavSaini/the-c-projects
 *
 * purpose
 * -------
 * prints fibonacci number series upto n
 *
 * usage
 * -----
 * fibo.exe n
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

void main(int argc, char *argv[]) {
    int N;
    int a = 0, b = 1, temp = 0;
    if (argc != 2) {
        printf("\nUsage: %s n.\nExiting.", argv[0]);
        exit(0);
    }
    N = atoi(argv[1]);
    a = 0;
    b = 1;
    while (b < N) {
        temp = a + b;
        a = b;
        b = temp;
        printf(" %d ", a);
    }
}