/*
 * Problem Name: 1618 - Trailing Zeros
 * Problem Link: https://cses.fi/problemset/task/1618
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Math, Number Theory
 * 
 * Time Complexity:  O(logn)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // n stores the input number, result accumulates the count of trailing zeros (factors of 5)
    // متغیر n عدد ورودی را نگه می‌دارد، result تعداد صفرهای پایانی (تعداد عامل‌های 5) را انباشته می‌کند
    long long n, result = 0;
    cin >> n;

    // شمارش تعداد عامل‌های 5 در n! با استفاده از فرمول لژاندر: جمع بخش‌پذیری‌های n بر توان‌های 5
    for (long long i = 5; n / i >= 1; i*=5) result += n / i;

    // Print the total number of trailing zeros
    // چاپ تعداد کل صفرهای پایانی فاکتوریل
    cout << result << '\n';

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!