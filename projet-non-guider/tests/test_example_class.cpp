#include "example_class.h"
#include <cassert>
int main() {
    ExampleClass example;
    example.setValue(42);
    assert(example.getValue() == 42);
    return 0;
}
