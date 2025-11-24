/// https://codeforces.com/contest/2149/problem/A
/// I spend too much time on it ... 
#include <iostream>

int main(){
int t;
std::cin >> t;
for(int i = 1; i <= t; i++)
{
    int n;
    std::cin >> n;
    int neg_n_count = 0; int count = 0;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] ==  -1)
        {
            neg_n_count++;
        }
        else if(arr[i] == 0)
        {
            arr[i]++;
            count++;
        }
    }
    if(!(neg_n_count % 2 == 0))
    {
        count = count + 2;
    }
    std::cout << count << std::endl;
}
}