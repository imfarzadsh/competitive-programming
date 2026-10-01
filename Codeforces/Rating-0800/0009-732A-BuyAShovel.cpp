/*
 * Problem Name: 732A - Buy a Shovel
 * Problem Link: https://codeforces.com/contest/732/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       brute force, constructive algorithms, implementation, math
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

    // Read shovel price (k) and value of the distinct coin (r).
    // دریافت قیمت یک بیل (k) و ارزش سکه تک رقمی (r).
    int k,r;
    cin >> k >> r;

    // Check minimum number of shovels (from 1 to 10) needed.
    // checking up to 10 is sufficient because (k * 10) % 10 is always 0.
    // بررسی حداقل تعداد بیل‌های مورد نیاز (از ۱ تا ۱۰).
    // بررسی تا ۱۰ کافی است زیرا یکان حاصل‌ضرب در ۱۰ همیشه ۰ است.
    for (int i = 1; i <= 10; i++)
    {
        int temp = k * i;

        // If total price ends in 0 (can pay only with 10-burle coins).
        // or ends in r (can pay with 10-burle coins + one r-burle coin).
        // اگر مجموع قیمت به ۰ ختم شود (پرداخت فقط با سکه‌های ۱۰تایی).
        // یا به r ختم شود (پرداخت با سکه‌های ۱۰تایی + یک سکه rتایی).
        if (temp % 10 == 0 || temp % 10 == r)
        {
            cout << i << '\n';
            break;
        }
    }
    
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!