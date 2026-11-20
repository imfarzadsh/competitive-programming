/*
 * Problem Name: 1629 - Movie Festival
 * Problem Link: https://cses.fi/problemset/task/1629
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Sorting, Greedy (Interval Scheduling)
 * 
 * Time Complexity:  O(n logn)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n represents the total number of movies
    // متغیر n تعداد کل فیلم‌ها را نشان می‌دهد
    int n;
    cin >> n;

    // Vector of pairs to store (start_time, end_time) for each movie
    // برداری از جفت‌ها برای ذخیره (زمان شروع، زمان پایان) هر فیلم
    vector<pair<int, int>> v(n);

    // Read the start and end times of all movies
    // خواندن زمان شروع و پایان تمام فیلم‌ها
    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    // Sort movies by their ending time in ascending order (classic greedy interval scheduling)
    // مرتب‌سازی فیلم‌ها بر اساس زمان پایان به صورت صعودی (الگوریتم حریصانه کلاسیک زمان‌بندی بازه‌ها)
    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
    return tie(a.second, a.first) < tie(b.second, b.first);
    });

    // Always select the first movie (the one that finishes earliest); 'idx' tracks the last watched movie
    // همیشه اولین فیلم (فیلمی که زودتر از همه تمام می‌شود) را انتخاب می‌کنیم؛ idx اندیس آخرین فیلم دیده‌شده است
    int cnt = 1, idx = 0;

    // Iterate through the remaining movies
    // پیمایش سایر فیلم‌ها
    for (int i = 1; i < n; i++)
    {

        // If the current movie starts at or after the previous selected movie ends, watch it
        // اگر زمان شروع فیلم فعلی بزرگ‌تر یا مساوی زمان پایان آخرین فیلم انتخاب‌شده باشد، آن را تماشا کن
        if (v[i].first >= v[idx].second)
        {
            idx = i;
            cnt++;
        }
    }
    
    // Print the maximum number of full movies that can be watched
    // چاپ حداکثر تعداد فیلم‌هایی که می‌توان به طور کامل تماشا کرد
    cout << cnt << '\n';
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!