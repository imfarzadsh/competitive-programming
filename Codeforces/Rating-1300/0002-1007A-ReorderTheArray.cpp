/*
 * Problem Name: 1007A - Reorder the Array
 * Problem Link: https://codeforces.com/contest/1007/problem/A
 * Platform:     Codeforces
 * Difficulty:   1300 (Medium)
 * Topics:       combinatorics, data structures, math, sortings, two pointers
 * 
 * Time Complexity:  O(n logn)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Read size of array.
    // دریافت اندازه آرایه.
    int n;
    cin >> n;

    // Read array elements.
    // دریافت عناصر آرایه.
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // Sort the array in non-decreasing order.
    // مرتب‌سازی صعودی آرایه.
    sort(a.begin(), a.end());
    
    // Pointer i tracks the smaller element to be matched.
    // Pointer j searches for a strictly greater element.
    // اشاره‌گر i عنصر کوچک‌تر برای تطبیق را دنبال می‌کند.
    // اشاره‌گر j به‌دنبال عنصری اکیداً بزرگ‌تر می‌گردد.
    int i = 0, j = 0, cnt = 0;

    // Two pointers approach to greedily match pairs.
    // روش دو اشاره‌گر برای تطبیق حریصانه جفت‌ها.
    while (j < n)
    {

        // If element at j is strictly greater than element at i, a valid reordering pair is formed.
        // اگر عنصر در اندیس j اکیداً بزرگ‌تر از عنصر در اندیس i باشد، یک جفت معتبر تشکیل می‌شود.
        if (a[i] < a[j])
        {
            cnt++;
            i++;
        }
        j++;
    }
    
    // Output maximum number of positions where reordered array element is strictly greater.
    // چاپ حداکثر تعداد موقعیت‌هایی که عنصر آرایه جدید اکیداً بزرگ‌تر است.
    cout << cnt << '\n';

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!