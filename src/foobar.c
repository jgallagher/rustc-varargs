#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>

void foobar(int32_t x, ...) {
    if (x != 1) {
        printf("expected x == 1\n");
        return;
    }

    va_list ap;
    va_start(ap, 2);
    uint64_t y = va_arg(ap, uint64_t);
    uint64_t z = va_arg(ap, uint64_t);
    va_end(ap);

    printf("called with x = %d and varargs %#lx %#lx\n", x, y, z);
}
