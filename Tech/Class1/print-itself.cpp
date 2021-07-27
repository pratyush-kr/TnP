#include<iostream>
#include<fstream>

int main()
{
    std::ifstream file("print-itself.cpp");
    std::string buffer;
    while(!file.eof())
    {
        getline(file, buffer);
        std::cout<<buffer<<'\n';
    }
    return 0;
}