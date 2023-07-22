#include<iostream>
#include"solution.h"
using namespace std;

int main(){
    Solution solution;
    vector<int> input = {1,2,3,1};
    int result;

    result = solution.rob(input);

    cout <<result<<endl;
    return 0;
}