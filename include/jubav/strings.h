#ifndef _jubav_STRINGS_H_
#define _jubav_STRINGS_H_

int strlen(char *buf);
int strcmp(char *a, char *b);
int word_len(char *buf, int max_len);
char *word_next(char *buf, int max_len);
int word_cmp(char *a, char *b, int max_len);

#endif
