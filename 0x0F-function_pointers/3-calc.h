#ifndef _3_CALC_H
#define _3_CALC_H

typedef struct
{
	char *operator;
	int (*fun)(int, int);
       }op_t;


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

typedef (*oppe)(int, int);
int (*get_op_func(char *s))(int, int);

#endif
