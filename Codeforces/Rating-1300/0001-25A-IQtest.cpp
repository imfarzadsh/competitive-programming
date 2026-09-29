/*
 * Problem Name: 25A - IQ test
 * Problem Link: https://codeforces.com/contest/25/problem/A
 * Platform:     Codeforces
 * Difficulty:   1300 (Medium)
 * Topics:       brute force
 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Track counts and last seen indices for both even and odd numbers.
    // شمارش تعداد و ثبت آخرین اندیس مشاهده‌شده برای اعداد زوج و فرد.
    int evens_count = 0, odds_count = 0, last_even_index = -1, last_odd_index = -1, n, temp;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        // Separate logic for even and odd numbers.
        // تفکیک اعداد زوج و فرد و به‌روزرسانی شمارنده و اندیس.
        if (temp %2 == 0)
        {
            evens_count++;
            last_even_index = i;
        }
        else
        {
            odds_count++;
            last_odd_index = i;
        }
    }
    
    // Output the 1-based index of the number with unique parity (count == 1).
    // چاپ اندیس (۱-برپایه) عددی که زوجیت متفاوت دارد (تعداد آن ۱ است).
    if (evens_count == 1) cout << ++last_even_index;
    else cout << ++last_odd_index;

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!