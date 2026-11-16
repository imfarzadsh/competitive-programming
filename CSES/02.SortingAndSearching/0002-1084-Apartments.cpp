/*
 * Problem Name: 1084 - Apartments
 * Problem Link: https://cses.fi/problemset/task/1084
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Sorting, Two Pointers, Greedy
 * 
 * Time Complexity:  O(nlogn + mlogm))
 * Space Complexity: O(n + m)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n: number of applicants, m: number of apartments, k: maximum allowed size difference
    // متغیر n تعداد متقاضیان، m تعداد آپارتمان‌ها و k حداکثر اختلاف متراژ مجاز است
    int n, m, k;
    cin >> n >> m >> k;

    // Vectors to store desired apartment sizes (a) and actual apartment sizes (b)
    // بردارها برای ذخیره متراژهای درخواستی متقاضیان (a) و متراژهای واقعی آپارتمان‌ها (b)
    vector<int> a(n);
    vector<int> b(m);

    // Read desired sizes for each applicant
    // خواندن متراژ درخواستی برای هر متقاضی
    for (int i = 0; i < n; i++) cin >> a[i];

    // Read actual sizes for each apartment
    // خواندن متراژ واقعی برای هر آپارتمان
    for (int i = 0; i < m; i++) cin >> b[i];

    // Sort both arrays in ascending order to apply the Two Pointers technique
    // مرتب‌سازی صعودی هر دو آرایه برای استفاده از تکنیک دو اشاره‌گر (Two Pointers)
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Two pointers: 'first' tracks applicants, 'second' tracks apartments, 'cnt' counts successful matches
    // دو اشاره‌گر: first برای متقاضیان، second برای آپارتمان‌ها و cnt تعداد تطابق‌های موفق را می‌شمارد
    int first = 0, second = 0, cnt = 0;

    while (first < n && second < m)
    {

        // If the apartment size is within the acceptable range [a[first] - k, a[first] + k], assign it
        // اگر متراژ آپارتمان در بازه مجاز متقاضی باشد، آن را تخصیص بده و هر دو اشاره‌گر را جلو ببر
        if (abs(a[first] - b[second]) <= k)
        {
            cnt++;
            first++;
            second++;
        }

        // If the apartment is too small for the current applicant, check the next larger apartment
        // اگر آپارتمان برای متقاضی فعلی بیش از حد کوچک است، به سراغ آپارتمان بزرگ‌تر بعدی برو
        else if (a[first] > b[second]) second++;

        // If the apartment is too big for the current applicant, move to the next applicant who wants a larger size
        // اگر آپارتمان برای متقاضی فعلی بیش از حد بزرگ است، به سراغ متقاضی بعدی برو
        else first++;
    }
    
    // Print the maximum number of applicants who can get an apartment
    // چاپ حداکثر تعداد متقاضیانی که می‌توانند صاحب آپارتمان شوند
    cout << cnt << '\n';

}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!