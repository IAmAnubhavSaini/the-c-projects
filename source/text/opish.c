/* copyright 2013-2021 Anubhav Saini
 * github.com/IAmAnubhavSaini
 * project: github.com/IAmAnubhavSaini/the-c-projects
 *
 * purpose
 * -------
 * opish becomes opopisophop : add "op" after every consonant.
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
    char suffix1 = 'o', suffix2 = 'p';
    char input;
    int i = 0;
    int flagIsConsonant = 1;
    printf("\nKeep entering letters to convert to opish: ");
    while (scanf("%c", &input) && input != EOF) {
        if (ISALPHA(input)) {
            flagIsConsonant = 1;
            for (i = 0; i < 5; i++) {
                if (input == vowels[i]) {
                    flagIsConsonant = 0;
                    break;
                }
            }
            printf("%c", input);
            if (flagIsConsonant) {
                putchar(suffix1);
                putchar(suffix2);
            }
        } else {
            puts(" ");
        }
    }
}