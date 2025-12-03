/// https://codeforces.com/problemset/problem/2145/A
#include <iostream>
int main(){
    long candies;
    int n, t;
    std::cin >> t;
    for(int i = 1; i <= t; i++)
    {
        std::cin >> candies;
        if(candies % 3 == 0)
        {
            std::cout << 0 << "\n";
        }
        else
        {
            n = 3 - candies % 3;
            std::cout << n << "\n";
        }
    }

    return 0;
}