/*
 * Problem Name: 1619 - Restaurant Customers
 * Problem Link: https://cses.fi/problemset/task/1619
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Sorting, Binary Search, Data Structures (Multiset), Greedy
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

    // n represents the total number of customers
    // متغیر n تعداد کل مشتریان را نشان می‌دهد
    int n;
    cin >> n;

    // Separate vectors to store arrival times and leaving times of all customers
    // بردارهای جداگانه برای ذخیره زمان ورود و زمان خروج تمام مشتریان
    vector<int> arrival(n);
    vector<int> leaving(n);

    // Read arrival and departure times for each customer
    // خواندن زمان ورود و خروج برای هر مشتری
    for (int i = 0; i < n; i++)
    {
        cin >> arrival[i] >> leaving[i];
    }
    
    // Sort both arrays independently in ascending order to process events chronologically
    // مرتب‌سازی مستقل هر دو آرایه به صورت صعودی برای پردازش رویدادها بر اساس ترتیب زمانی
    sort(arrival.begin(), arrival.end());
    sort(leaving.begin(), leaving.end());

    // Two pointers: 'first' tracks arrivals, 'second' tracks departures
    // دو اشاره‌گر: first رویدادهای ورود و second رویدادهای خروج را دنبال می‌کند
    int first = 0, second = 0;
    int curr_customers = 0, max_customers = 0;

    // Sweep through events until all arrivals have been processed
    // پیمایش رویدادها تا زمانی که تمام ورودها پردازش شوند
    while (first < n)
    {

        // A customer arrives before the earliest current customer leaves: increment active count
        // یک مشتری قبل از خروج زودترین مشتری فعلی وارد می‌شود: افزایش تعداد مشتریان حاضر
        if (arrival[first] < leaving[second])
        {
            curr_customers++;
            first++;
        }

        // A customer leaves before the next customer arrives: decrement active count
        // یک مشتری قبل از ورود مشتری بعدی خارج می‌شود: کاهش تعداد مشتریان حاضر
        else if (arrival[first] > leaving[second])
        {
            curr_customers--;
            second++;
        }

        // Simultaneous arrival and departure at the exact same timestamp: net change is zero
        // ورود و خروج هم‌زمان در یک لحظه دقیق: تغییر خالص در تعداد مشتریان صفر است
        else
        {
            first++;
            second++;
        }

        // Update the maximum number of concurrent customers seen so far
        // به‌روزرسانی حداکثر تعداد مشتریان هم‌زمان مشاهده‌شده تا این لحظه
        max_customers = max(max_customers, curr_customers);
    }
    
    // Print the peak number of customers present at the same time
    // چاپ بیشترین تعداد مشتریانی که در یک لحظه در رستوران حضور داشته‌اند
    cout << max_customers << '\n';
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!