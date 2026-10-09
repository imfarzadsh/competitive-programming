/*
 * Problem Name: 2197A - Friendly Numbers
 * Problem Link: https://codeforces.com/contest/2197/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       binary search, brute force, expression parsing, math, schedules
 * 
 * Time Complexity:  O(log x)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std ;

int sum_num(int num) {
    int sum_digits = 0;
    while (num > 0)
    {
        sum_digits += (num % 10);
        num = num / 10;
    }
    return sum_digits;
}
void solve() {
    int x, y, cnt = 0;
    cin >> x;

    for (int i = 0; i < 91; i++)
    {
        y = x + i;
        if (i == sum_num(y)) cnt++;
    }
    cout << cnt << '\n';
}

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    // Process all test cases.
    // پردازش تمام تست‌کیس‌ها.
    while (t--)
    {
        solve();
    }
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!