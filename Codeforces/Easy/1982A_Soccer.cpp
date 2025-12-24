#include <iostream>
#include <algorithm>


int main(){
    int t;
    int x1, y1, x2, y2;
    std::cin >> t;
    while(t--)
    {
        std::cin >> x1 >> y1;
        std::cin >> x2 >> y2;
       if(x1 > y1 && x2 > y2)
       {
        std::cout << "YES\n";
       } 
       else if(y1 > x1 && y2 > x2)
       {
        std::cout << "YES\n";
       }
       else
       {
        std::cout << "NO\n";
       }
    }
    return 0;
}