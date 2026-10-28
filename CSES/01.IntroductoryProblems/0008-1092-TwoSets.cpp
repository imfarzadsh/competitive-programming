/*
 * Problem Name: 1092 - Two Sets
 * Problem Link: https://cses.fi/problemset/task/1092
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       Math, Greedy, Implementation
 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Fast I/O for competitive programming
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // n represents the upper bound of numbers from 1 to n
    // متغیر n حد بالای اعداد از 1 تا n را نشان می‌دهد
    int n;
    cin >> n;

    // Calculate the total sum of numbers from 1 to n using formula: n*(n+1)/2
    // محاسبه مجموع کل اعداد از 1 تا n با استفاده از فرمول: n*(n+1)/2
    long long sum_of_all = 1LL * n * (n + 1) / 2;

    // If the total sum is even, it can be split into two equal halves; otherwise, it's impossible
    // اگر مجموع کل زوج باشد، می‌توان آن را به دو نیمه مساوی تقسیم کرد؛ در غیر این صورت غیرممکن است
    if (sum_of_all %2 == 0)
    {
        cout << "YES\n";

        // Vectors to store the elements of the two separate sets
        // بردارها برای ذخیره عناصر دو مجموعه جداگانه
        vector<int> a;
        vector<int> b;

        // Target sum for the first set, which is half of the total sum
        // هدف مجموع برای مجموعه اول، که نصف مجموع کل است
        long long c = sum_of_all / 2;

        // Greedily pick numbers from n down to 1 to form the target sum for set a and b
        // انتخاب حریصانه اعداد از n رو به پایین تا 1 برای تشکیل مجموع هدف برای مجموعه a و b
        for (int i = n; i > 0; i--)
        {

            // If the remaining target sum is greater than or equal to current number i, include it in set a
            // اگر مجموع باقیمانده هدف بزرگ‌تر یا مساوی عدد فعلی i باشد، آن را در مجموعه a قرار بده
            if (c - i >= 0)
            {
                c -= i;
                a.push_back(i);
            }
            // Otherwise, put it in set b
            // در غیر این صورت، آن را در مجموعه b قرار بده
            else b.push_back(i);
        }
        
        // Print the size and elements of the first set
        // چاپ تعداد و عناصر مجموعه اول
        cout << a.size() << '\n';
        for (int i: a) cout << i << " ";

        // Print the size and elements of the second set
        // چاپ تعداد و عناصر مجموعه دوم
        cout << '\n' << b.size() << '\n';
        for (int i: b) cout << i << " ";
        
    }
    // If the total sum is odd, it's impossible to divide into two equal sets
    // اگر مجموع کل فرد باشد، تقسیم به دو مجموعه مساوی غیرممکن است
    else cout << "NO\n";
 
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!