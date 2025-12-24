#include <iostream>
#include <algorithm>
#include <vector>
typedef std::vector<int> vi;

int main(){
    int t;
    vi n(3);
    std::cin >> t;
    while(t--)
    {
        for(int i = 0; i < 3; i++)
        {
            std::cin >> n[i];
        }
        std::sort(n.begin(), n.end());
        std::cout << n[1] << "\n";
    }
    return 0;
}