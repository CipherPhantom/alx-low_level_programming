#ifndef _main_h_
#define _main_h_

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int all_digits(char *s);
int max(int x, int y);
void print_array(int *a, int l);

#endif
