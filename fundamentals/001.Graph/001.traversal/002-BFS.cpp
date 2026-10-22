/*
 * Template Name: Breadth-First Search (BFS) Traversal
 * Category:      Graph Theory / Search Algorithms
 * Platform:      General Standard Implementation
 * Difficulty:    Standard Algorithm
 * Topics:        BFS, Graphs, Shortest Path (Unweighted)
 * 
 * Time Complexity:  O(V + E) [Processes each vertex V and edge E once]
 * Space Complexity: O(V + E) [Adjacency list, queue, and visited/distance arrays]
 */

#include <bits/stdc++.h>
using namespace std ;

const int N = 1e5;

// Global queue for BFS traversal and graph structures
// صف سراسری برای پیمایش BFS و ساختارهای مربوط به گراف
queue<int> q;
vector<int> adj[N];
bool visited[N];
int distance_G[N];

// Breadth-First Search traversal starting from node x
// پیمایش سطح‌به‌سطح (BFS) با شروع از رأس x
void bfs(int x)
{
    // Mark starting node as visited and push to queue
    // علامت‌گذاری رأس شروع به عنوان دیده‌شده و افزودن به صف
    visited[x] = true;
    cout << x << " ";
    distance_G[x] = 0;
    q.push(x);

    // Continue process until queue becomes empty
    // ادامه پردازش تا زمان خالی شدن صف
    while (!q.empty())
    {
        // Get the front element and remove it from queue
        // دریافت عنصر جلوی صف و حذف آن
        int s = q.front(); 
        q.pop();

        // Traverse all adjacent neighbors of vertex s
        // پیمایش تمامی همسایه‌های مجاور رأس s
        for (auto u : adj[s])
        {
            // Skip already visited vertices
            // نادیده گرفتن رئوسی که قبلاً پیمایش شده‌اند
            if (visited[u]) continue;

            // Mark neighbor as visited, print, update distance, and add to queue
            // علامت‌گذاری همسایه به عنوان دیده‌شده، چاپ، به‌روزرسانی فاصله و افزودن به صف
            visited[u] = true;
            cout << u << " ";
            distance_G[u] = distance_G[s] + 1;
            q.push(u);
        }
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
    
    // Start BFS traversal from root node 0
    // شروع پیمایش BFS از رأس ریشه ۰
    bfs(0);
    
    return 0;
}

// Author: Farzad Shahbazi
// Note: Keep coding and never give up!