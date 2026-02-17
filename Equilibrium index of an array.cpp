#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <functional>

int main(){
    std::vector<int> a = {1,2,3};
    int total = std::accumulate(a.begin(), a.end(), 0);

    // std::cout << total;
    int curr_sum = 0;

    bool flag = 1;

    for (int i=0; i<a.size(); i++){
        int start = curr_sum;
        curr_sum += a[i];
        if (start == (total - curr_sum)){
            std::cout << i;
            flag = 0;
            break;
        }
    }
    if (flag){
        std::cout << -1;
    }

    return 0;
}