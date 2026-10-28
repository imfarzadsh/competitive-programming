/*
 * Problem Name: 1072 - Two Knights
 * Problem Link: https://cses.fi/problemset/task/1072
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Math, Combinatorics
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
    
    // n represents the maximum board size (from 1x1 up to n x n)
    // متغیر n حداکثر اندازه صفحه شطرنج را نشان می‌دهد (از 1x1 تا n x n)
    int n;
    cin >> n;

    // a will store total ways to place 2 knights, b will store attacking placements
    // متغیر a کل حالت‌های قرار دادن دو اسب و b حالت‌هایی که به هم حمله می‌کنند را نگه می‌دارد
    long long a, b;

    // Loop for each board size i from 1 to n
    // حلقه برای هر اندازه صفحه شطرنج i از 1 تا n
    for (int i = 1; i <= n; i++)
    {

        // Total ways to place 2 knights on an i x i board: C(i^2, 2) = (i^2 * (i^2 - 1)) / 2
        // کل حالت‌های قرار دادن 2 اسب روی صفحه i x i: انتخاب 2 خانه از بین i^2 خانه
        a = 1LL * i*i * (i*i - 1) / 2;

        // Number of invalid (attacking) placements of two knights in 2x3 and 3x2 subgrids
        // تعداد حالت‌های نامعتبر (در حال حمله) دو اسب در زیرمجموعه‌های 2x3 و 3x2
        b = 1LL * 4 * (i - 1) * (i - 2);

        // Subtract attacking pairs from total pairs to get valid non-attacking placements
        // کم کردن جفت‌های در حال حمله از کل جفت‌ها برای به دست آوردن جایگذاری‌های معبد بدون تهدید
        cout << a - b << '\n';
    }
 
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!