/*
 * Problem Name: 1594C - Make Them Equal
 * Problem Link: https://codeforces.com/contest/1594/problem/C
 * Platform:     Codeforces
 * Difficulty:   1200 (Easy)
 * Topics:       brute force, greedy, math, strings
 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        // Check if all characters in the string are already equal to c.
        // بررسی اینکه آیا تمامی کاراکترهای رشته از قبل برابر c هستند یا خیر.
        bool all_c = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != c) all_c = false;
        }
        
        // Case 0: 0 operations needed if all characters match c.
        // حالت اول: اگر تمام کاراکترها c باشند، به ۰ عملیات نیاز است.
        if (all_c)
        {
            cout << 0 << '\n';
            continue;
        }

        bool flag = true;

        // Case 1: Look for an index x in the second half (n/2 to n-1) where s[x] == c.
        // Any index x > n/2 has no multiples in range [1, n] other than x itself.
        // حالت دوم: جستجوی اندیسی مانند x در نیمه دوم (از n/2 تا n-1) که s[x] == c باشد.
        // هر اندیس x > n/2 هیچ مضربی در بازه [1, n] به جز خودش ندارد.
        for (int i = n / 2; i < n; i++)
        {
            if (s[i] == c)
            {
                cout << 1 << '\n' << i + 1 << '\n';
                flag = false;
                break;
            }
        }
        
        // Case 2: If no valid index is found in the second half, 2 operations using n-1 and n are guaranteed to work.
        // حالت سوم: اگر هیچ اندیسی پیدا نشود، با ۲ عملیات روی n-1 و n حتماً پاسخ حاصل می‌شود.
        if (flag) cout << 2 << '\n' << n - 1 << " " << n << '\n';
    }
    
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!