/*
 * Problem Name: 1094 - Increasing Array
 * Problem Link: https://cses.fi/problemset/task/1094
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Greedy, Implementation
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
    
    // n stores the size of the array
    // متغیر n اندازه آرایه را نگه می‌دارد
    int n;
    cin >> n;

    // prev stores the previous element, curr stores the current element, result accumulates the total moves
    // متغیر prev عنصر قبلی، curr عنصر فعلی و result مجموع کل حرکت‌های مورد نیاز را انباشته می‌کند
    int prev, curr;
    long long result = 0;

    // Read the first element as the initial reference point
    // خواندن اولین عنصر به عنوان نقطه مرجع اولیه
    cin >> prev;

    // Iterate through the rest of the array elements
    // پیمایش بقیه عناصر آرایه
    for (int i = 1; i < n; i++)
    {
        cin >> curr;

        // If the previous element is greater than the current, we need to add the difference to the result
        // اگر عنصر قبلی بزرگتر از عنصر فعلی باشد، باید اختلاف آن‌ها را به نتیجه اضافه کنیم
        if (prev > curr) result += (prev - curr);

        // Otherwise, update prev to the current element
        // در غیر این صورت، متغیر prev را به عنصر فعلی به‌روزرسانی کن
        else prev = curr;
    }
    
    // Print the total minimum moves required to make the array non-decreasing
    // چاپ کل حداقل حرکت‌های لازم برای غیرنزولی کردن آرایه
    cout << result << '\n';
 
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up !