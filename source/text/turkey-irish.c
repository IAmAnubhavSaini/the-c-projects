/* copyright 2013-2021 Anubhav Saini
 * github.com/IAmAnubhavSaini
 * project: github.com/IAmAnubhavSaini/the-c-projects
 *
 * purpose
 * -------
 * turkey irish becomes taburkabey abirabish : add "ab" before each vowel.
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
char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

void main() {
    char input;
    int i = 0;
    printf("\nKeep entering letters to convert to turkey-irish: ");
    while (scanf("%c", &input) && input != EOF) {
        if (ISALPHA(input)) {
            for (i = 0; i < 5; i++) {
                if (input == vowels[i]) {
                    printf("ab");
                    break;
                }
            }
            printf("%c", input);
        } else {
            puts(" ");
        }
    }
}