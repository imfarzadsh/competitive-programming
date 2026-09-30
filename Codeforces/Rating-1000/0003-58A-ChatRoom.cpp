/*
 * Problem Name: 58A - Chat room
 * Problem Link: https://codeforces.com/contest/58/problem/A
 * Platform:     Codeforces
 * Difficulty:   1000 (Easy)
 * Topics:       greedy, strings
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

    // Target substring "hello" to match greedily.
    // رشته هدف "hello" جهت تطبیق به روش حریصانه (Greedy).
    string s , word = "hello";
    cin >> s;

    // Pointer j tracks the current matching character index in "hello".
    // اشاره‌گر j اندیس کاراکتر فعلی در رشته "hello" را دنبال می‌کند.
    int j = 0;

    // Iterate through input string s to check if "hello" is a subsequence.
    // پیمایش رشته ورودی جهت بررسی زیردنباله بودن "hello".
    for (int i = 0; i < s.size(); i++)
    {

        // If current character matches target character, advance pointer j.
        // اگر کاراکتر فعلی با کاراکتر هدف برابر باشد، اشاره‌گر j یک واحد جلو می‌رود.
        if (s[i] == word[j])
        {
            j++;

            // Early break if all characters of "hello" have been matched.
            // خروج سریع در صورت پیدا شدن تمام کاراکترهای "hello".
            if (j == word.length()) break;
        }
    }
    
    // Output YES if full "hello" word was matched; otherwise NO.
    // چاپ YES در صورت تطبیق کامل کلمه "hello"؛ در غیر این صورت چاپ NO.
    if (j == word.length()) cout << "YES\n";
    else cout << "NO\n"; 

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!