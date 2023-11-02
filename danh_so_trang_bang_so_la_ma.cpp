#include <iostream>
using namespace std;

string intToRoman(int num) {
    string thousands[] = {""};
    string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    return thousands[(num % 1000) / 1000] + hundreds[(num % 1000) / 100] + tens[(num % 100) / 10] + ones[num % 10];
}

int main() {
    int N;
    cin >> N;

    if (N >= 1 && N < 1000) {
        string roman = intToRoman(N);
        cout << roman;
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {    
    string hun[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string doz[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string row[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    int n; scanf("%d",&n);
    int t1=n%10;
    n/=10;
    int t2=n%10;
    n/=10;
    int t3=n%10;
    cout << hun[t3] << doz[t2] << row[t1];
}
*/