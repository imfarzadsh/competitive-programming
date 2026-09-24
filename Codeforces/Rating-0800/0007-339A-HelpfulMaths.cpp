/*
 * Problem Name: 339A - Helpful Maths
 * Problem Link: https://codeforces.com/contest/339/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       greedy, implementation, sortings, strings
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

    // Counters for digits 1, 2, and 3 (Counting Sort approach)
    // متغیرهای شمارنده برای ارقام ۱، ۲ و ۳ (روش مرتب‌سازی شمارشی)
    int one = 0 , two = 0 , three = 0;
    string s , result;
    cin >> s;

    // Count occurrences of each number in the input expression
    // شمارش تعداد تکرار هر عدد در عبارت ورودی
    for (char c : s)
    {
        if (c == '1') one++;
        else if (c == '2') two++;
        else if (c == '3') three++;
    }
    
    // Append sorted numbers followed by '+' operator
    // اضافه کردن اعداد مرتب‌شده به همراه علامت '+' به رشته نهایی
    for (int i = 0; i < one; i++) result += "1+";
    for (int i = 0; i < two; i++) result += "2+";
    for (int i = 0; i < three; i++) result += "3+";

    // Remove the trailing '+' at the end of the expression
    // حذف علامت '+' اضافی از انتهای عبارت
    result.pop_back();

    // Output the formatted expression
    // چاپ عبارت مرتب‌شده نهایی
    cout << result;

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!