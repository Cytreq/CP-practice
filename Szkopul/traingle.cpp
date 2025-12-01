/// https://szkopul.edu.pl/problemset/problem/uH0rh2QP6A45kjcz9a_k-ayC/site/?key=statement
/// triangle can be build if two shorter sides are longer than the biggest side of triangle 
/// used algorithm library for this haha
#include <iostream>
#include <algorithm>

int main(){
    long a , b ,c, sum, max_side;
    std::cin >> a >> b >> c;
    max_side = std::max({a, b, c});
    if(a + b + c - max_side > max_side)
    {
        std::cout << "TAK";
    }
    else
    {
        std::cout << "NIE";
    }
    return 0;
}