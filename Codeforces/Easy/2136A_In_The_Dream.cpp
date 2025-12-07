/// https://codeforces.com/problemset/problem/2136/A
#include <iostream>
#include <algorithm>

int main(){
    int t;
    int a, b, c, d;
    std::cin >> t;
    for(int i = 1; i <= t; i++)
    {
        std::cin >> a >> b >> c >> d;
        int team_a = c - a, team_b = d - b;
        int first_half_diff = std::max(a, b) - std::min(a, b);
        int second_half_diff = std::max(team_a, team_b) - std::min(team_a, team_b);
        if(first_half_diff <= 2 && second_half_diff <= 2)
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
