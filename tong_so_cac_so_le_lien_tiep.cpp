/*
// số lẻ
#include <iostream>

int main() {
    int N;
    
    std::cin >> N;
    
    while (N--)
    {
        int X, Y;
        std::cin >> X >> Y;
        
        int sum = 0;
        if(X%2==0){
            X++;
            while (Y--)
            {
                sum += X;
                X+=2;
            }
        }else{
            while (Y--)
            {
                sum += X;
                X+=2;
            }
        }
        
        std::cout << sum << std::endl;
    }
    
    return 0;
}
*/

// số chẵn
#include <iostream>

int main() {
    while (true)
    {
        int X;
        std::cin >> X;

        if(X == 0) break;
        
        int sum = 0;
        if(X%2!=0){
            X++;
            for(int i = 0; i < 5; i++)
            {
                sum += X;
                X+=2;
            }
        }else{
            for(int i = 0; i < 5; i++)
            {
                sum += X;
                X+=2;
            }
        }
        
        std::cout << sum << std::endl;
    }
    
    return 0;
}
