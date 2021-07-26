#include<iostream>
 
#define endl "\n"
using namespace std;
 
int MAP[5][5], Answer = 0;
bool Visit[1000000];
 
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
 
void Input()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> MAP[i][j];
        }
    }
}
 
void DFS(int x, int y, int Sum, int Cnt)
{
    if (Cnt == 5)
    {
        if (Visit[Sum] == false)
        {
            Visit[Sum] = true;
            Answer++;
        }
        return;
 
    }
 
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && ny >= 0 && nx < 5 && ny < 5)
        {
            DFS(nx, ny, Sum * 10 + MAP[nx][ny], Cnt + 1);
        }
    }
}
void Solution()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            DFS(i, j, MAP[i][j], 0);
        }
    }
    cout << Answer << endl;
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
//    freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}