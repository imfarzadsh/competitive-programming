/*
 * Problem Name: 1069 - Repetitions
 * Problem Link: https://cses.fi/problemset/task/1069
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       String, Implementation
 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(1)
 */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Variables to track the current character and the previous character
    // متغیرها برای پیگیری کاراکتر فعلی و کاراکتر قبلی
    char current_char, prev_char;
 
    // Variables to track the current repetition length and maximum repetition length
    // متغیرها برای پیگیری طول تکرار فعلی و بیشترین طول تکرار
    int current_len = 1;
    int max_len = 1;
 
    // Read character by character from input stream for O(1) space complexity
    // خواندن کاراکتر به کاراکتر از استریم ورودی برای دستیابی به پیچیدگی فضای O(1)
    while (cin >> current_char) {

        // If the current character matches the previous one, increment current length
        // اگر کاراکتر فعلی با کاراکتر قبلی مطابقت داشت، طول فعلی را افزایش بده
        if (current_char == prev_char) {
            current_len++;
        }

        // Otherwise, reset current length and update the previous character tracker
        // در غیر این صورت، طول فعلی را ریست کن و پیگیری‌کننده کاراکتر قبلی را به‌روزرسانی کن
        else {
            current_len = 1;
            prev_char = current_char;
        }

        // Update the maximum repetition length found so far
        // به‌روزرسانی بیشترین طول تکرار پیدا شده تا این لحظه
        max_len = max(max_len, current_len);
    }
    
    // Print the final maximum repetition length
    // چاپ بیشترین طول تکرار نهایی
    cout << max_len << "\n";
 
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up !