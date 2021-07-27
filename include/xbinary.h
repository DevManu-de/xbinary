#ifndef _XBINARY_H
#define _XBINARY_H

#include <stdint.h>
#include <stdio.h>

#define rotl(x, y) ((x << y) | (x >> (sizeof(x) * 8 - y)))
#define rotr(x, y) ((x >> y) | (x << (sizeof(x) * 8 - y)))

#define __to_bin__(x)   __uint128_t __x__ = x;                                      \
                        char __arr__[sizeof(x) * 8] = {'\0'};                       \
                        int16_t __i__;                                              \
                        for (__i__ = sizeof(x) * 8 - 2; __i__ >= 0; --__i__) {      \
                            __arr__[__i__] = (__x__ & 1) + '0';                     \
                            __x__ >>= 1;                                            \
                        }                                                           \

#define print_bin(x)    {                                                           \
                            __to_bin__(x)                                           \
                            puts(__arr__);                                          \
                        }                                                           \

#define fprint_bin(file, x)     {                                                   \
                                    __to_bin__(x)                                   \
                                    fputs(__arr__, file);                           \
                                    fputc('\n', file);                              \
                                }                                                   \

#define sprint_bin(stream, x)   {                                                   \
                                    __to_bin__(x)                                   \
                                    sprintf(stream, "%s", __arr__);                 \
                                }                                                   \

#endif
