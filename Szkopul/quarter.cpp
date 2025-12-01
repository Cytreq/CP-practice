/// https://szkopul.edu.pl/problemset/problem/nbPTy9V8tDSUxU0BtkKSDiYe/site/?key=statement
#include <iostream>
#include <string>
int main(){
    long x, y;
    std::cin >> x >> y;
    if(x == 0 || y == 0)
    {
        if(x == 0 && y == 0)
        {
            std::cout << "0";
        }
        else if(x == 0)
        {
            std::cout << "OY";
        }
        else
        {
            std::cout << "OX";
        }
    }
    else
    {
        if(x > 0 && y > 0)
        {
            std::cout << "I";
        }
        else if(x < 0 && y > 0)
        {
            std::cout << "II";
        }
        else if(x < 0 && y < 0)
        {
            std::cout << "III";
        }
        else if(x > 0 && y < 0)
        {
            std::cout << "IV";
        } 
    }

    return 0;
}