/// solution to https://codeforces.com/problemset/problem/2167/A
#include <iostream>
int a, b, c, d, t;
int main(){
    std::cin >> t;
    for(int i = 1; i <= t; i++)
    {
        std::cin >> a >> b >> c >> d;
        if(a == b && b == c && c == d)
        {
            std::cout << "Yes" << std::endl;

        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }


    return 0;
}