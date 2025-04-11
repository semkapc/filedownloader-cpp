#include <iostream>
#include <stdlib.h>

int main()
{
    std::string url;

    std::cout << "Enter URL: ";
    std::cin >> url;

    std::string download = "curl -O " + url;
    system(download.c_str());
}