#include <iostream>

void func(int* ptr)
{
    std::cout << "ptr" << std::endl;   
}

void func(size_t size)
{
    std::cout << "size" << std::endl;   
}

void func(std::nullptr_t)
{
    std::cout << "nullptr" << std::endl;   
}

int main()
{    
    int myValue(10);
    func(myValue);
    func(&myValue);
    func(nullptr);
    
    // It gets confused which function to choose
    // func(NULL);
}
