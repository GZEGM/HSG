// #include <bits/stdc++.h>

// using namespace std;

// #define N 4
// vector<string> validConfigs;

// bool isValid(vector<string> &grid)
// {
//     for (int i = 0; i < N; i++)
//     {
//         set<char> rowSet, colSet;
//         for (int j = 0; j < N; j++)
//         {
//             rowSet.insert(grid[i][j]);
//             colSet.insert(grid[j][i]);
//         }
//         if (rowSet.size() < N || colSet.size() < N)
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     freopen("BAI2.OUT", "w", stdout);

//     string letters = "aaaabbbbccccdddd";
//     sort(letters.begin(), letters.end());

//     int count = 0;
//     do
//     {
//         vector<string> grid(N);
//         for (int i = 0; i < N; i++)
//             grid[i] = letters.substr(i * N, N);

//         if (isValid(grid))
//         {
//             count++;
//             for (string row : grid)
//                 cout << row << endl;
//             cout << endl;
//         }
//     } while (next_permutation(letters.begin(), letters.end()));

//     cout << endl;
//     cout << count << endl;
//     return 0;
// }

// Code tham khao:))
