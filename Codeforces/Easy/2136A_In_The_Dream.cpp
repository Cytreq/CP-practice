/// https://codeforces.com/problemset/problem/2136/A
#include <iostream>
#include <algorithm>

int main(){
    int t;
    int a, b, c, d;
    std::cin >> t;
    for(int i = 1; i <= t; i++)
    {
        std::cin >> a >> b >> c >> d; 
        if(std::max({a, b}) - std::min({a, b}) <= 2)
        {
            if(!(a == c && b == d))
            {
                if(std::max(c, d) - std::min(c, d) <= 2)
                {
                    std::cout << "YES\n";
                }
                else
                {
                    std::cout << "NO\n";
                }
            }
            else
            {
                std::cout << "YES\n";
            }
        }
        else
        {
            std::cout << "NO\n";      
        }

    }
    return 0;
}