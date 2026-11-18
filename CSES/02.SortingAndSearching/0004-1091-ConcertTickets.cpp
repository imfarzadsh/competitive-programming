/*
 * Problem Name: 1091 - Concert Tickets
 * Problem Link: https://cses.fi/problemset/task/1091
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Sorting, Binary Search, Data Structures (Multiset), Greedy
 * 
 * Time Complexity:  O(n + m) logn)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // n: number of tickets, m: number of customers, c: temporary variable for prices/bids
    // متغیر n تعداد بلیت‌ها، m تعداد مشتریان و c متغیر موقت برای خواندن قیمت‌ها است
    int n, m, c;
    cin >> n >> m;

    // Store ticket prices in a multiset sorted in descending order (greater<int>)
    // ذخیره قیمت بلیت‌ها در یک مولتی‌ست مرتب‌شده به صورت نزولی برای یافتن سریع بزرگ‌ترین قیمت مجاز
    multiset<int, greater<int>> h;

    // Insert all available ticket prices into the multiset
    // درج تمام قیمت‌های بلیت‌های موجود در مولتی‌ست
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        h.insert(c);
    }

    // Process each customer's maximum willing price
    // پردازش حداکثر قیمت پیشنهادی هر مشتری به ترتیب ورود
    for (int i = 0; i < m; i++)
    {
        cin >> c;

        // With greater<int>, lower_bound(c) finds the first ticket with price <= c
        // با توجه به ترتیب نزولی، تابع lower_bound(c) اولین بلیتی که قیمتش کمتر یا مساوی c باشد را برمی‌گرداند
        auto it = h.lower_bound(c);

        // If no such ticket exists, output -1
        // اگر هیچ بلیتی با قیمت کمتر یا مساوی مبلغ پیشنهادی وجود نداشته باشد، -1 چاپ کن
        if (it == h.end()) cout << "-1\n";

        // Otherwise, sell the ticket (print its price) and remove only that single instance via iterator
        // در غیر این صورت، بلیت را بفروش (قیمتش را چاپ کن) و فقط همان یک مورد را با اشاره‌گر حذف کن 
        else
        {
            cout << *it << '\n';
            h.erase(it);
        }
    }
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!