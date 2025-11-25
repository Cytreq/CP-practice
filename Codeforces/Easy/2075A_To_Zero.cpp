/// input t, k is odd (3, 5, 7) and n
/// k is not less than 3 
/// substraction from n if n is even x must be even if n if odd x is odd. Count the minimum operation for turning n into 0

#include <iostream>

int main(){
    int t;
    int n, k;
    int max_odd, max_even, opperation_count;
    std::cin >> t;
    for(int i = 1; i <= t; i++)
    {
        std::cin >> n >> k;
        if(k % 2 == 0)
        {
            max_even = k;
            max_odd = k-1;
        }
        else
        {
            max_odd = k;
            max_even = k-1;
        }
        while(!(n == 0))
        {
            if(n % 2 == 0)
            {
                n -= max_even;
                opperation_count++;
            }
            else
            {
                n -= max_odd;
                opperation_count++;
            }
        }
        std::cout << opperation_count;
    }
    return 0;
}