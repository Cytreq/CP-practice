/// link to excercise https://codeforces.com/problemset/problem/4/A
#include <iostream>

int main(){
    int w;
    std::cin >> w;
    if(w >= 4 && w % 2 == 0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}