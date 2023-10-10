#include <iostream>
#include <string_view>

void print(std::string_view str)
{
    std::cout << str << std::endl;
}

int main()
{
    print("Hello World 2");
}