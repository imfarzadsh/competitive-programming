/*
 * Problem Name: 1754 - Coin Piles
 * Problem Link: https://cses.fi/problemset/task/1754
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Math, Number Theory
 * 
 * Time Complexity:  O(t) (where t is the number of test cases)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // t represents the number of test cases, a and b represent the number of coins in each pile
    // متغیر t تعداد تست‌کیس‌ها، و a و b تعداد سکه‌های هر پشته را نشان می‌دهند
    int t, a, b;
    cin >> t;

    // Process each test case
    // پردازش هر تست‌کیس
    while (t--)
    {
        cin >> a >> b;

        // A valid configuration requires:
        // 1. The sum of coins must be a multiple of 3 (since each move removes 3 coins in total: 2+1 or 1+2).
        // 2. The larger pile cannot exceed twice the size of the smaller pile, otherwise we can't reduce them equally.
        
        // یک حالت معتبر به دو شرط نیاز دارد:
        // ۱. مجموع کل سکه‌ها باید مضربی از ۳ باشد (چون هر حرکت مجموعاً ۳ سکه کم می‌کند: ۲+۱ یا ۱+۲).
        // ۲. پشته بزرگ‌تر نباید بیشتر از دو برابر پشته کوچک‌تر باشد، در غیر این صورت نمی‌توانیم آن‌ها را به طور مساوی به صفر برسانیم.

        if (((a + b) % 3 == 0) && (max(a, b) <= 2 * min(a, b))) cout << "YES\n";
        else cout << "NO\n";
    }
    

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!