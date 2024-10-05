#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers1 {-1,2,3};
    vector<int> numbers2 {numbers1};
    numbers1.front()=1;
    numbers1.push_back(4);
    cout << "numbers1: "
    << numbers1[0] << ", "
    << numbers1[1] << ", "
    << numbers1[2] << ", "
    << numbers1[3] << "\n";
    
    int a1,a2,a3;
    cout << "inpuut a1, a2 and a3: ";
    cin >> a1 >> a2 >> a3;
    numbers2.push_back(a1);
    numbers2.push_back(a2);
    numbers2.push_back(a3);
    cout << "numbers2: "
    << numbers2[0] << ", "
    << numbers2[1] << ", "
    << numbers2[2] << ", "
    << numbers2[3] << ", "
    << numbers2[4] << ", "
    << numbers2[5] << "\n";
}