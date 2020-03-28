#ifndef _MLEAK_H_
#define _MLEAK_H_
#include <malloc.h>

#define MALLOC(n) mallocEx(n,__FILE__,__LINE__)
#define FREE(p) freeEx(p)

void* mallocEx(size_t n,const char*file,const int line);
void freeEx(void*p);
void PRINT_LEAK_INFO();
#endif
