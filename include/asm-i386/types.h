#ifndef _I386_TYPES_H
#define _I386_TYPES_H

#include <jubav/config.h>
#include <jubav/strings.h>

typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;

static inline int atoi(char *buf)
{
    int val, i;
    
    val = 0;
    for (i = 0; i < strlen(buf) - 1; i++)
	val = (val + (buf[i] - '0')) * 10;
    
    val += (buf[i] - '0');

    return val;    
}

#endif
