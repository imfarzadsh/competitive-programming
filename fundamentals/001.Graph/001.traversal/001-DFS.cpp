/*
 * Template Name: Depth-First Search (DFS) Traversal
 * Category:      Graph Theory / Search Algorithms
 * Platform:      General Standard Implementation
 * Difficulty:    Standard Algorithm
 * Topics:        DFS, Graphs, Recursion, Connected Components
 * 
 * Time Complexity:  O(V + E) [Visits each vertex V and explores each edge E once]
 * Space Complexity: O(V + E) [Adjacency list, visited array, and call stack O(V)]
 */

#include <bits/stdc++.h>
using namespace std ;

const int N = 1e5;

// Graph adjacency list and visited array
// لیست مجاورت گراف و آرایه علامت‌گذاری رئوس دیده‌شده
vector<int> adj[N];
bool visited[N];

// Depth-First Search recursive traversal starting from node s
// پیمایش عمقی (DFS) به‌صورت بازگشتی با شروع از رأس s
void dfs(int s)
{
    // Base case: If the node is already visited, backtrack
    // شرط پایه: اگر رأس قبلاً پیمایش شده باشد، بازگشت (Backtrack)
    if (visited[s]) return;

    // Mark current node as visited and process it
    // علامت‌گذاری رأس فعلی به عنوان دیده‌شده و پردازش آن
    visited[s] = true;
    cout << s << " ";

    // Recursively visit all unvisited neighbors
    // فراخوانی بازگشتی برای تمامی همسایه‌های مجاور
    for (auto u : adj[s])
    {
        dfs(u);
    }
}

int main() {

    // Fast I/O for competitive programming.
    // بهینه‌سازی سرعت ورودی و خروجی برای مسابقات برنامه‌نویسی.
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Example graph initialization (Adjacency list)
    // مقداردهی اولیه گراف نمونه (لیست مجاورت)
    adj[0] = {1, 2, 3};
    adj[1] = {3, 4, 5};
    
    // Start DFS traversal from root node 0
    // شروع پیمایش DFS از رأس ریشه ۰
    dfs(0);
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!