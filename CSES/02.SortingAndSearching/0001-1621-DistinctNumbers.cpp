/*
 * Problem Name: 1621 - Distinct Numbers
 * Problem Link: https://cses.fi/problemset/task/1621
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Sorting, Implementation
 * 
 * Time Complexity:  O(nlogn)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n represents the number of elements in the array
    // متغیر n تعداد عناصر موجود در آرایه را نشان می‌دهد
    int n;
    cin >> n;

    // Vector to store the input numbers
    // بردار برای ذخیره اعداد ورودی
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Sort the vector to bring identical elements adjacent to each other
    // مرتب‌سازی بردار برای کنار هم قرار دادن عناصر یکسان و مشابه
    sort(a.begin(), a.end());

    // std::unique moves unique elements to the front and returns an iterator to the new end; 
    // subtracting a.begin() gives the count of distinct elements
    // تابع unique عناصر متمایز را به ابتدا منتقل کرده و تکراری‌ها را به انتها می‌فرستد؛
    // با کم کردن a.begin() از این تکرارکننده، تعداد عناصر منحصربه‌فرد به دست می‌آید
    int unique_count = unique(a.begin(), a.end()) - a.begin();

    // Print the final count of distinct numbers
    // چاپ تعداد کل اعداد متمایز
    cout << unique_count << '\n';
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!