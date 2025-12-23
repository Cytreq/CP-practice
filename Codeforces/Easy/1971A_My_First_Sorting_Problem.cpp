/// https://codeforces.com/problemset/problem/1971/A
#include <iostream>
#include <algorithm>
int main(){
    int t, x , y; 
    std::cin >> t;
    while(t--)
    {
        std::cin >> x >> y;
        std::cout << std::min({x, y}) << " " << std::max({x, y}) << std::endl;
    }
    return 0;
}