/// https://codeforces.com/problemset/problem/2172/A
#include <iostream>
#include <algorithm>
int main(){
    int g, c , l;
    std::cin >> g >> c >> l;
    if(std::max({g, c, l}) - std::min({g, c, l}) >= 10)
    {
        std::cout << "check again";
    }
    else
    {
        int arr[3] = {g, c, l};
        std::sort(arr, arr + 3);
        int median = arr[1];
        std::cout << "final " <<  median;
    }
    return 0;
}