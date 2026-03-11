// #include <bits/stdc++.h>

// using namespace std;

// bool is_doiXung(string str)
// {
//     int n = str.length();
//     int left = 0, right = n - 1;

//     while (left < right)
//     {
//         if (str[left] != str[right])
//         {
//             return false;
//         }
//         left++;
//         right--;
//     }

//     return true;
// }

// int main()
// {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

//     vector<string> res;
//     string str;

//     cin >> str;

//     int n = str.length();

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 2; j <= n; j++)
//         {
//             string sub = str.substr(i, j - i);
//             if (is_doiXung(sub))
//             {
//                 if (sub.length() >= 2)
//                 {
//                     res.push_back(sub);
//                 }
//             }
//         }
//     }
//     return 0;
// }
