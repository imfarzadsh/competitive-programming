/*
 * Problem Name: 580A - Kefa and First Steps
 * Problem Link: https://codeforces.com/contest/580/problem/A
 * Platform:     Codeforces
 * Difficulty:   900 (Easy)
 * Topics:       brute force, dp, implementation
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

    // Read total number of days.
    // دریافت تعداد کل روزها.
    int n;
    cin >> n;
    
    // Read the first day's money amount
    // result and current_len start at 1 since a single element is a non-decreasing subsegment of length 1.
    // دریافت مقدار پول روز اول
    // مقدار اولیه طول و پاسخ برابر ۱ است چون یک عنصر به تنهایی زیررشته غیرنزولی به طول ۱ است.
    int prev , current, result = 1, current_len = 1;
    cin >> prev;

    // Process the remaining n - 1 numbers.
    // پردازش n - 1 عدد باقی‌مانده.
    for (int i = 0; i < n-1; i++)
    {
        cin >> current;

        // If current element is smaller than previous, sequence breaks; reset length to 1.
        // Otherwise, extend the current non-decreasing subsegment length.
        // اگر عنصر فعلی از قبلی کوچکتر باشد، دنباله صعودی قطع شده و طول به ۱ بازمی‌گردد.
        // در غیر این صورت، به طول زیررشته غیرنزولی فعلی یکی اضافه می‌شود.
        if (prev > current) current_len = 1;
        else current_len++;

        // Track the maximum length found so far.
        // به‌‌روزرسانی بیشترین طول پیدا شده تا این لحظه.
        result = max(current_len , result);

        // Update prev for the next iteration.
        // به‌روزرسانی مقدار قبلی برای تکرار بعدی.
        prev = current;
    }

    // Output the maximum length of non-decreasing subsegment.
    // چاپ حداکثر طول زیررشته غیرنزولی.
    cout << result;

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!