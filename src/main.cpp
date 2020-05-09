#include <stdio.h>

#include "math/add.h"
#include "math/multiply.h"

int main(void) {
    printf("%.1f + %.1f = %.1f\n", 3.0, 4.0, add(3.0, 4.0));
    printf("%.1f * %.1f = %.1f\n", 3.0, 4.0, multiply(3.0, 4.0));
}
