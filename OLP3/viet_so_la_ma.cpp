#include <iostream>
#include <string>

using namespace std;

string intToRoman(int n)
{
    string roman = "";

    // Một mảng lưu trữ các giá trị của các ký tự La Mã
    int values[] = {10, 5, 1};

    // Một mảng lưu trữ các ký tự La Mã tương ứng
    string symbols[] = {"X", "V", "I"};

    for (int i = 0; i < 3; i++)
    {
        while (n >= values[i])
        {
            n -= values[i];
            roman += symbols[i];
        }
    }

    return roman;
}

int main()
{
    int n;
    cin >> n;

    if (n <= 0){
        return 0;
    }
    else{
        string roman = intToRoman(n);
        cout << roman << endl;
    }

    return 0;
}

/*
int main(){
    int n;std::cin>>n;
    while(n>=10){std::cout<<"X";n-=10;}
    while(n>=5){std::cout<<"V";n-=5;}
    while(n>=1){std::cout<<"I";n-=1;}
}
*/