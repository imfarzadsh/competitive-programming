/*
 * Problem Name: 479A - Expression
 * Problem Link: https://codeforces.com/contest/479/problem/A
 * Platform:     Codeforces
 * Difficulty:   1000 (Easy)
 * Topics:       brute force, math
 * 
 * Time Complexity:  O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Read three numbers a, b, and c
    // دریافت سه عدد a، b و c از ورودی
    int a, b, c;
    cin >> a >> b >> c;

    // Evaluate all 6 possible valid combinations of operations and parenthesization,
    // then find the maximum possible value.
    // بررسی تمام ۶ حالت ممکن از ترکیب عملگرها و پرانتزگذاری‌ها و یافتن بیشترین مقدار ممکن
    int result = max({
        a + b + c,
        a + b * c,
        (a + b) * c,
        a * b + c,
        a * (b + c),
        a * b * c
    });

    // Output the maximum calculated expression result
    // چاپ بیشترین عبارت محاسبه‌شده
    cout << result;

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!