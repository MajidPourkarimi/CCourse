#ifndef  NUTILITY_H
#define  NUTILITY_H

#define   isleap(y)   ((y) % 4 == 0 && ((y) % 100 || (y) % 400 == 0))

#define   asize(x)    (sizeof(x) / sizeof(x[0]))

void set_array_random(int* p, int);
void print_array(const int* p, int);
int isprime(int);
int ndigit(int);
void dashline(void);
void randomize(void);
void sgets(char* p);
void swap(int* a, int* b);

#endif