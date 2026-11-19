/*
 * Problem Name: 1637 - Removing Digits
 * Problem Link: https://cses.fi/problemset/task/1637
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Dynamic Programming, Greedy
 * 
 * Time Complexity:  O(nlogn)
 * Space Complexity: O(n)
 */
 
#include <bits/stdc++.h>
using namespace std;
 
// Infinity constant representing an unreachable state (strictly greater than max possible steps 10^6)
// ثابت بی‌نهایت برای نشان دادن وضعیت غیرقابل دسترس (بزرگ‌تر از حداکثر مراحل ممکن یعنی 10^6)
const int INF = 1e6 + 10;

// dp[i] stores the minimum number of steps required to reduce number i to 0
// آرایه dp[i] حداقل تعداد مراحل لازم برای رساندن عدد i به صفر را ذخیره می‌کند
int dp[1000007];
 
int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n: starting integer, a: temporary copy for digit extraction, b: current extracted digit
    // متغیر n عدد شروع، a کپی موقت برای استخراج ارقام و b رقم استخراج‌شده فعلی است
    int n, a, b;
    cin >> n;
 
    // Initialize DP array with INF up to n, and set base case dp[0] = 0
    // مقداردهی اولیه آرایه برنامه‌نویسی پویا با INF تا خانه n و تنظیم حالت پایه dp[0] = 0
    fill(dp, dp + n + 1, INF);
    dp[0] = 0;

    // Compute the minimum steps bottom-up for every integer i from 1 to n
    // محاسبه حداقل مراحل به روش پایین‌به‌بالا (Bottom-Up) برای هر عدد i از 1 تا n
    for (int i = 1; i <= n; i++)
    {
        a = i;
        // Extract each digit of i one by one
        // استخراج تک‌تک ارقام عدد i
        while (a > 0)
        {
            b = a % 10;
            a /= 10;

            // Subtracting digit b transitions state i to (i - b) in 1 step
            // با کم کردن رقم b از عدد i در یک مرحله به وضعیت (i - b) می‌رویم
            if (i >= b)
            {
                dp[i] = min(dp[i], dp[i - b] + 1);
            }
        }
        
    }

    // Print the minimum number of operations to reach 0 from n
    // چاپ حداقل تعداد عملیات برای رسیدن از عدد n به صفر
    cout << dp[n] << '\n';
}
 
// Author: Farzad Shahbazi
// Note: Keep coding and never give up!