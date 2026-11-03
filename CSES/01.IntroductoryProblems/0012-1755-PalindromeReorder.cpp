/*
 * Problem Name: 1755 - Palindrome Reorder
 * Problem Link: https://cses.fi/problemset/task/1755
 * Platform:     CSES
 * Difficulty:   Easy
 * Topics:       String, Implementation
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
    
    // s stores the input string
    // متغیر s رشته ورودی را ذخیره می‌کند
    string s;
    cin >> s;

    // Frequency array to count occurrences of each uppercase English letter (A-Z)
    // آرایه فراوانی برای شمارش تعداد دفعات تکرار هر حرف بزرگ انگلیسی (A-Z)
    int cnt[26] = {0};
    for (char c : s) cnt[(int)c - 65]++;

    // Flag to check if we can have at most one odd frequency character
    // پرچم برای بررسی اینکه آیا حداکثر یک کاراکتر با تعداد تکرار فرد داریم یا خیر
    bool one_odd = true;

    // s_1 builds the first half, s_2 builds the reversed second half
    // متغیر s_1 نیمه اول و s_2 نیمه دوم معکوس‌شده را می‌سازند
    string s_1, s_2;
    char c = 'a', temp;
    int cnt_c = -1;

    // Iterate through all 26 letters to check frequencies and construct palindrome halves
    // پیمایش تمام ۲۶ حرف برای بررسی فراوانی‌ها و ساخت نیمه‌های پالیندروم
    for (int i = 0; i < 26; i++)
    {

        // If frequency is odd
        // اگر تعداد تکرار فرد باشد
        if (cnt[i] %2 == 1)
        {

            // If this is the first odd character found, store it for the middle part
            // اگر این اولین کاراکتر فرد پیدا شده است، آن را برای بخش میانی ذخیره کن
            if (one_odd)
            {
                one_odd = false;
                c = (char)(i+65);
                cnt_c = cnt[i];
            }

            // If there is already more than one odd character, a palindrome is impossible
            // اگر بیش از یک کاراکتر فرد وجود داشته باشد، ساخت پالیندروم غیرممکن است
            else
            {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }

        // If frequency is even, split the characters between both halves of the palindrome
        // اگر تعداد تکرار زوج باشد، کاراکترها را بین دو نیمه پالیندروم تقسیم کن
        else
        {
            temp = (char)(i+65);
            s_1 += string(cnt[i] / 2, temp);
            s_2 = string(cnt[i] / 2, temp) + s_2;
        }
    }
    
    // If there is no odd character (all counts are even), combine halves directly
    // اگر کاراکتر فردی وجود نداشته باشد (همه تعدادها زوج باشند)، نیمه‌ها را مستقیماً ترکیب کن
    if (c == 'a')
    {
        s = s_1 + s_2;
        cout << s << '\n';
    }

    // Otherwise, place the odd-count character in the exact middle between the two halves
    // در غیر این صورت، کاراکتر با تعداد فرد را دقیقاً در وسط بین دو نیمه قرار بده
    else
    {
        s = s_1 + string(cnt_c, c) + s_2;
        cout << s << '\n';
    }

    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!