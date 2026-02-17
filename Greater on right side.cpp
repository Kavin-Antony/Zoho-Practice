// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
//     int arr[] = {16, 17, 4, 3, 5, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     vector<int> v(arr, arr + n);
//     vector<int> stack;
//     vector<int> res(n, -1);
//     for (int i=0; i < n ;i++){
//         while (!stack.empty() && v[stack.back()] < v[i]){
//             int indexToUpdate = stack.back();
//             stack.pop_back();
//             res[indexToUpdate] = v[i];
//         }
//         stack.push_back(i);
//     }
//     for (int i = 0; i < res.size(); i++) {
//         cout << res[i] << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v(arr, arr + n);
    vector<int> res(n, -1);

    int max = -1;

    for (int i = n-1; i >= 0; i--){
        res[i] = max;
        max = std::max(v[i], max);
    }

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}