#ifndef EXAMPLE_CLASS_H
#define EXAMPLE_CLASS_H
/**
 * @file example_class.h
 * @brief Example class demonstrating basic functionality.
 */
class ExampleClass {
public:
    /**
     * @brief Default constructor.
     */
    ExampleClass();   
    /**
     * @brief Gets the value.
     * @return The current value.
     */
    int getValue() const;  
    /**
     * @brief Sets the value.
     * @param value The new value.
     */
    void setValue(int value);
    private:
    int val; ///< The value stored in the class.
};
#endif // EXAMPLE_CLASS_H

