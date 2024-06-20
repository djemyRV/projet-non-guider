#include "example_class.h"
ExampleClass::ExampleClass() : val(0) {}
int ExampleClass::getValue() const {
    return val;
}
void ExampleClass::setValue(int value) {
    val = value;
}
