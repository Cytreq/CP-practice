/// input t, k is odd (3, 5, 7) and n
/// k is not less than 3 
/// substraction from n if n is even x must be even if n if odd x is odd. Count the minimum operation for turning n into 0

#include <iostream>

int main(){
    int t;
    long long n, k;
    long long max_odd, max_even;
    std::cin >> t;
    for(int i = 1; i <= t; i++)
    {
        long long opperation_count = 0;
        std::cin >> n >> k;
        int max_odd = k; int max_even = k-1;
        if (!(n % 2 == 0))
        {
            n -= max_odd;
            opperation_count++;
        }
        if(n > 0)
        {
            opperation_count += n / max_even;
            if(n % max_even != 0)
            {
                opperation_count++;
            }   
        } 
        std::cout << opperation_count << "\n";
    }
    return 0;
}