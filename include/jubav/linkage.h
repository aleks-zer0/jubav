#ifndef _jubav_LINKAGE_H_
#define _jubav_LINKAGE_H_

#include <jubav/config.h>

#define CPP_ASMLINKAGE
#define asmlinkage CPP_ASMLINKAGE __attribute__((regparm(0)))

#define SYMBOL_NAME_STR(X) #X
#define SYMBOL_NAME(X) X
#ifdef __STDC__
#define SYMBOL_NAME_LABEL(X) X##:
#else
#define SYMBOL_NAME_LABEL(X) X:
#endif

#define ALIGN .align 4,0x90

#define ENTRY(name) \
  .globl SYMBOL_NAME(name); \
  ALIGN; \
  SYMBOL_NAME_LABEL(name)

#endif
