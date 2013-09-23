#include "sbluh.h"
#include <locale>
#include <iostream>
#include <sstream>

template <typename T>
long atoi(const std::basic_string<T> &str)
{
    std::basic_stringstream<T> stream(str);
    long res;
    return !(stream >>res)?0:res;
}

template <typename T>
std::basic_string<T> itoa(long n,unsigned w=0)
{
    std::basic_stringstream<T> stream;
    if (w)
    {
        stream.fill('0');
        stream.width(w);
    }
    stream <<n;
    return stream.str();
}

double checkInput(std::string input)
{
    std::string convertText = input;
    double output = atoi(convertText);
    return output;
}
