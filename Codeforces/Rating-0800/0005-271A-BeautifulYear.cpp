/*
 * Problem Name: 271A - Beautiful Year
 * Problem Link: https://codeforces.com/contest/271/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       brute force
 * 
 * Time Complexity:  O(1)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std ;

// Helper function to check if all digits in a number are unique.
// تابع کمکی برای بررسی یکتا بودن (بدون تکرار بودن) تمام ارقام یک عدد.
bool unique_digits(int num)
{

    // Array to track visited digits (0 to 9).
    // آرایه‌ای برای زیر نظر داشتن ارقام دیده شده (از ۰ تا ۹).
    bool seen[10] = {false};

    while (num > 0)
    {
        int digit = num % 10; // Extract the last digit / استخراج آخرین رقم.

        // If the digit has already been seen, it's not unique
        // اگر رقم قبلاً دیده شده باشد، ارقام یکتا نیستند
        if (seen[digit]) return false;

        seen[digit] = true; // Mark the digit as seen / علامت‌گذاری رقم به عنوان دیده‌شده.
        num /= 10; // Remove the last digit / حذف آخرین رقم.
    }
    
    return true; // All digits are distinct / تمامی ارقام متمایز هستند.
}

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ;

    // Read the current year.
    // دریافت سال فعلی از ورودی.
    int y;
    cin >> y;

    // Increment year continuously until a "beautiful year" with unique digits is found.
    // افزایش مداوم سال تا زمانی که اولین «سال زیبا» با ارقام یکتا پیدا شود.
    while (!unique_digits(++y));
    
    // Output the resulting beautiful year.
    // چاپ سال زیبای به‌دست‌آمده.
    cout << y;
    

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!