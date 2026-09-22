/*
 * Problem Name: 236A - Boy or Girl
 * Problem Link: https://codeforces.com/contest/236/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       brute force, implementation(*), strings

 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(1) [or o(min(n,26))]
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    // Read the users' name.
    // دریافت نام کاربری از ورودی.
    string username;
    cin >> username;

    // Use unordered_set for o(1) average lookup and insertion time of unique characters.
    // استفاده از unordered_set برای درج و بررسی کاراکتر های یکتا با زمان میانگین o(1).
    unordered_set<char> distinct_char;

    // Insert each characters of the username into the hash set.
    // درج تک تک کاراکتر های نام کاربری در جدول درهم سازی (هش ست).
    for (char i : username) distinct_char.insert(i);

    // Get the total count of distinct characters.
    // به دست آوردن تعداد کل کاراکتر های یکتا.
    int num = distinct_char.size();

    // If the number of distinct characters is even, it's a girl.
    // Otherwise, it's a boy.
    // اگر تعداد کاراکترهای یکتا زوج باشد، دختر است؛ در غیر این صورت پسر است.
    if (num %2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up !