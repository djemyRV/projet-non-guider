add_library(MyCppLib
    factorial.cpp
    fibonacci.cpp
    palindrome.cpp
    prime.cpp
    example_class.cpp)
    target_include_directories(MyCppLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)

