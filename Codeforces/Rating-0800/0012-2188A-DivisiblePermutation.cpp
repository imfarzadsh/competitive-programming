/*
 * Problem Name: 2188A - Divisible Permutation
 * Problem Link: https://codeforces.com/contest/2188/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       constructive algorithms
 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std ;

void solve() {
    int n;
    cin >> n;

    vector<int> result(n);
    int count = 1;

    // Fill odd positions from the back with small ascending values (1, 2, ...).
    // پر کردن موقعیت‌های یکی در میان از انتهای آرایه با مقادیر صعودی کوچک (۱، ۲، ...).
    for (int i = n - 1; i >= 0 ; i -= 2)
    {
        result[i] = count;
        count++;
    }

    count = n;

    // Fill remaining positions from the back with large descending values (n, n-1, ...).
    // پر کردن موقعیت‌های باقی‌مانده از انتهای آرایه با مقادیر نزولی بزرگ (n، n-1، ...).
    for (int i = n - 2; i >= 0; i -= 2)
    {
        result[i] = count;
        count--;
    }
    
    // Output the constructed valid permutation.
    // چاپ جایگشت معتبر ساخته‌شده.
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << '\n';
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