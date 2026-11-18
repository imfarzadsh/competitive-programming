/*
 * Problem Name: 1090 - Ferris Wheel
 * Problem Link: https://cses.fi/problemset/task/1090
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Sorting, Two Pointers, Greedy
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

    // n: number of children, x: maximum allowed weight per gondola
    // متغیر n تعداد کودکان و x حداکثر وزن مجاز برای هر کابین چرخ‌وفلک است
    int n, x;
    cin >> n >> x;

    // Vector to store the weights of the children
    // بردار برای ذخیره وزن کودکان
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    // Sort the weights in ascending order to pair the heaviest child with the lightest possible child
    // مرتب‌سازی صعودی وزن‌ها برای جفت کردن سنگین‌ترین کودک با سبک‌ترین کودک ممکن
    sort(h.begin(), h.end());

    // Two pointers: 'l' points to the lightest child, 'r' points to the heaviest child, 'cnt' counts gondolas
    // دو اشاره‌گر: l به سبک‌ترین کودک، r به سنگین‌ترین کودک اشاره دارد و cnt تعداد کابین‌ها را می‌شمارد
    int l = 0, r = n - 1, cnt = 0;

    while (l <= r)
    {
        // If the lightest and heaviest children can share a gondola, move the left pointer forward
        // اگر سبک‌ترین و سنگین‌ترین کودک بتوانند با هم در یک کابین بنشینند، اشاره‌گر چپ را جلو ببر
        if (h[l] + h[r] <= x) l++;

        // The heaviest child always boards a gondola (either paired or alone), so move the right pointer backward
        // سنگین‌ترین کودک در هر صورت سوار یک کابین می‌شود (چه جفت شود چه تنها)، پس اشاره‌گر راست را عقب ببر
        r--;

        // Increment the total gondola count
        // افزایش شمارنده تعداد کل کابین‌های استفاده شده
        cnt++;
    }
    
    // Print the minimum number of gondolas needed
    // چاپ حداقل تعداد کابین‌های مورد نیاز
    cout << cnt << '\n';

}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!