#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int t;
    int n;
    int x;
    std::cin >> t;
    while(t--)
    {
        std::cin >> n;
        int num;
        std::vector<int> v;
        for(int i = 0; i < n; i++)
        {
            std::cin >> num;
            v.push_back(num);
        }
        std::cin >> x;
        if(x >= *std::min_element(v.begin(), v.end()) && x <= *std::max_element(v.begin(), v.end()))
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