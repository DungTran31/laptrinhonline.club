#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string a, b, c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    if (a == "vertebrado") {
        if (b == "ave") {
            if (c == "carnivoro") cout << "aguia";
            else if (c == "onivoro") cout << "pomba";
        } else if (b == "mamifero") {
            if (c == "onivoro") cout << "homem";
            else if (c == "herbivoro") cout << "vaca";
        }
    } else if (a == "invertebrado") {
        if (b == "inseto") {
            if (c == "hematofago") cout << "pulga";
            else if (c == "herbivoro") cout << "lagarta";
        } else if (b == "anelideo") {
            if (c == "hematofago") cout << "sanguessuga";
            else if (c == "onivoro") cout << "minhoca";
        }
    }
    return 0;
}