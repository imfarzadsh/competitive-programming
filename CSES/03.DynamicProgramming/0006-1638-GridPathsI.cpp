/*
 * Problem Name: 1638 - Grid Paths I
 * Problem Link: https://cses.fi/problemset/task/1638
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Dynamic Programming, Grid
 * 
 * Time Complexity:  O(n^2)
 * Space Complexity: O(n^2)
 */

#include <bits/stdc++.h>
using namespace std;

// Modulo constant required by the problem statement (10^9 + 7)
// ثابت پیمانه (باقی‌مانده) مورد نیاز طبق صورت مسئله
const int MOD = 1e9 + 7;

// dp[i][j] stores the number of valid paths from (0,0) to (i,j); grid stores walkable cells (1) vs traps (0)
// آرایه dp[i][j] تعداد مسیرهای مجاز از مبدا به خانه (i,j) و grid خانه‌های آزاد (1) و تله‌ها (0) را نگه می‌دارد
int dp[1001][1001], grid[1001][1001];

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n represents the dimension of the n x n grid
    // متغیر n ابعاد جدول مربعی n در n را نشان می‌دهد
    int n;
    char c;
    cin >> n;

    // Read the grid characters: '.' marks a safe cell (1), '*' remains 0 (trap)
    // خواندن کاراکترهای جدول: '.' به عنوان خانه آزاد (1) ثبت می‌شود و '*' مقدار پیش‌فرض 0 (تله) باقی می‌ماند
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> c;
            if (c == '.') grid[i][j] = 1;
        }
    }

    // Proceed only if both the starting cell (0,0) and destination cell (n-1, n-1) are not traps
    // تنها در صورتی محاسبات را انجام بده که هر دو خانه شروع (0,0) و مقصد (n-1, n-1) تله نباشند
    if (grid[0][0] == 1 && grid[n - 1][n - 1] == 1)
    {
        // Base case: 1 way to stand at the starting cell (0, 0)
        // حالت پایه: دقیقاً ۱ راه برای قرار گرفتن در خانه شروع (0, 0) وجود دارد
        dp[0][0] = 1;

        // Iterate row by row, column by column to fill the DP table
        // پیمایش سطر به سطر و ستون به ستون برای پر کردن جدول برنامه‌نویسی پویا
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                // If the current cell is a trap, no path can pass through it
                // اگر خانه فعلی تله باشد، هیچ مسیری نمی‌تواند از آن عبور کند
                if (grid[i][j] == 0) continue;

                // Add paths coming from the cell directly above (i - 1, j)
                // اضافه کردن تعداد مسیرهایی که از خانه بالایی (i - 1, j) وارد این خانه می‌شوند
                if (i >= 1) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;

                // Add paths coming from the cell directly to the left (i, j - 1)
                // اضافه کردن تعداد مسیرهایی که از خانه سمت چپ (i, j - 1) وارد این خانه می‌شوند
                if (j >= 1) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }

    }
    
    // Print the total number of valid paths reaching the bottom-right corner modulo 10^9 + 7
    // چاپ تعداد کل مسیرهای مجاز برای رسیدن به گوشه پایین-راست به پیمانه 10^9 + 7
    cout << dp[n - 1][n - 1] << '\n';
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!