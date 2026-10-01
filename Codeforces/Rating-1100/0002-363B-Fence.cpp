/*
 * Problem Name: 363B - Fence
 * Problem Link: https://codeforces.com/contest/363/problem/B
 * Platform:     Codeforces
 * Difficulty:   1100 (Easy)
 * Topics:       binary search, dp, implementation
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

    // Read total planks (n) and contiguous segment length (k).
    // دریافت تعداد کل تخته‌ها (n) و طول بازه متوالی (k).
    int n, k;
    cin >> n >> k;

    // Read height of each plank.
    // دریافت ارتفاع هر تخته.
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    // Compute sum of the first window of size k.
    // محاسبه مجموع ارتفاع اولین پنجره به طول k.
    int current_sum = 0;
    for (int i = 0; i < k; i++) current_sum += h[i];

    // Track minimum sum and its starting index (0-based).
    // ثبت حداقل مجموع و اندیس شروع آن (۰-برپایه).
    int min_sum = current_sum, index_min_sum = 0;

    // Slide the window across the remaining planks.
    // حرکت دادن پنجره روی مابقی تخته‌ها.
    for (int i = 1; i < n - k + 1; i++)
    {

        // Subtract the element leaving the window and add the new element entering it.
        // کم کردن عنصری که از پنجره خارج شده و اضافه کردن عنصر جدیدی که وارد پنجره شده است.
        current_sum -= h[i - 1];
        current_sum += h[i + k - 1];

        // Update minimum sum and index if a smaller window sum is found.
        // به‌روزرسانی کمترین مجموع و اندیس در صورت پیدا شدن پنجره‌ای با مجموع کمتر.
        if (current_sum < min_sum)
        {
            index_min_sum = i;
            min_sum = current_sum;
        }
    }

    // Output 1-based index of the starting plank
    // چاپ اندیس تخته شروع با مبنای ۱ (1-based index)
    cout << index_min_sum + 1 << '\n';
    
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!