/*
 * Problem Name: 381A - Sereja and Dima
 * Problem Link: https://codeforces.com/contest/381/problem/A
 * Platform:     Codeforces
 * Difficulty:   800 (Easy)
 * Topics:       greedy, implementation, two pointers
 * 
 * Time Complexity:  O(n)
 * Space Complexity: O(n)
 */

#include <bits/stdc++.h>
using namespace std ;

int main() {

    // Fast I/O for competitive programing.
    // بهینه سرعت سازی ورودی و خروجی برای مسابقات برنامه نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Read total number of cards.
    // دریافت تعداد کل کارت‌ها.
    int n;
    cin >> n;

    // Read values written on each card.
    // دریافت مقادیر نوشته‌شده روی هر کارت.
    vector<int> cards(n);
    for (int i = 0; i < n; i++) cin >> cards[i];

    // Scores accumulated by Sereja and Dima.
    // امتیازات جمع‌آوری‌شده توسط سرژا و دیما.
    int serja_points = 0, dima_points = 0;

    // Left and right pointers to track available end cards.
    // اشاره‌گرهای چپ و راست برای دنبال کردن کارت‌های ابتدا و انتهای صف.
    int l = 0, r = n - 1;

    // Boolean flag to track player turns (true = Sereja, false = Dima).
    // پرچم بولین برای نوبت‌دهی (true برای سرژا و false برای دیما).
    bool serja_turn = true;
    
    // Simulate game until all cards are picked.
    // شبیه‌سازی بازی تا زمانی که تمام کارت‌ها برداشته شوند.
    while (l <= r)
    {
        int selected_card = 0;

        // Greedily select the larger card available at either end.
        // انتخاب حریصانه کارت بزرگتر از بین ابتدا یا انتهای صف.
        if (cards[l] > cards[r])
        {
            selected_card = cards[l];
            l++;
        }
        else
        {
            selected_card = cards[r];
            r--;
        }

        // Assign points to the active player.
        // اضافه کردن امتیاز به بازیکن فعال.
        if(serja_turn) serja_points += selected_card;
        else dima_points += selected_card;

        // Toggle player turn for the next round.
        // تغییر نوبت برای مرحله بعدی.
        serja_turn = !serja_turn;
    }
    
    // Output final scores for Sereja and Dima.
    // چاپ امتیازات نهایی سرژا و دیما.
    cout << serja_points << " " << dima_points << '\n';
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!