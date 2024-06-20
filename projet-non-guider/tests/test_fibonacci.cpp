#include "fibonacci.h"
#include <cassert>
int main() {
    assert(fibonacci(5) == 5);
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    return 0;
}
