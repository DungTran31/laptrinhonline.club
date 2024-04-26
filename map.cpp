#include <iostream>
#include <map>
using namespace std;

// map<kiểu dữ liệu, kiểu dữ liệu> tên biến;


int main(){
    map<string, int> mp;
    mp["one"] = 1;
    mp["ten"] = 10;
    mp["nqson"] = -1;
    mp["nqson"] = 10000000;
    cout << mp["nqson"] << endl;
    cout << mp["abcd"] << endl; // in 1 giá trị ko có trong map sẽ in ra 0

    // duyệt từng phần tử trong map
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    //cách 2
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it.first << " " << it.second << endl;

    }
}