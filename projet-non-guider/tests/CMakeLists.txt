add_executable(test_factorial test_factorial.cpp)
target_link_libraries(test_factorial MyCppLib)
add_test(NAME test_factorial COMMAND test_factorial)
add_executable(test_fibonacci test_fibonacci.cpp)
target_link_libraries(test_fibonacci MyCppLib)
add_test(NAME test_fibonacci COMMAND test_fibonacci)
add_executable(test_palindrome test_palindrome.cpp)
target_link_libraries(test_palindrome MyCppLib)
add_test(NAME test_palindrome COMMAND test_palindrome)
add_executable(test_prime test_prime.cpp)
target_link_libraries(test_prime MyCppLib)
add_test(NAME test_prime COMMAND test_prime)
add_executable(test_example_class test_example_class.cpp)
target_link_libraries(test_example_class MyCppLib)
add_test(NAME test_example_class COMMAND test_example_class)

