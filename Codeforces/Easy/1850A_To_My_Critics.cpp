#include <iostream>
#include <algorithm>
#include <vector>
int main(){
    int t, a, b, c;
    std::cin >> t;
    while(t--)
    {
        std::cin >> a >> b >> c ;
        std::vector<int> nums = {a, b, c};
        nums.erase(std::max_element(nums.begin(), nums.end()));
        if(std::max({a, b, c}) + *std::max_element(nums.begin(), nums.end()) >= 10)
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
