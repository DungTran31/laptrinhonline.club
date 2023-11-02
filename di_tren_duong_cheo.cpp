#include <bits/stdc++.h>
const int MOD = (int)1e9 + 7;
const int limit = 1000001;
using namespace std;

int main() {  
    // long long n; cin >> n;
	// ++n;
	
	// double denta = 1+4*2*n;
	// double t = (-1 + sqrt(denta))/2.0;
	// long long m = (long long)t;
	// if (1.0*m == t) --m;
	
	// long long k = m*(m+1)/2;
	// if ((m+1)%2 != 0){
	// 	long long u = n-k-1;
	// 	long long h = m+1, c = 1;
	// 	cout << h-u << " " << c+u;
	// }
	
	// else {
	// 	long long h = 1, c = m+1;
	// 	long long u = n-k-1;
	// 	cout << h+u << " " << c-u;
	// }
    long long n;
    cin >> n;
    
    ++n; // số chấm

    // Tính m, dựa vào phương trình tam giác
    // số hàng chéo sên đã đi đến
    long long m = (-1 + sqrt(1 + 8 * n)) / 2;

    // tính số chấm đã đi qua
    // sên đã đi qua ít nhất m hàng trước khi vượt qua n chấm, 
    // và m là số hàng cuối cùng mà nó đã đến. Ngược lại, nếu n nhỏ hơn, chúng ta cần giảm m xuống một để tìm ra số hàng cuối cùng mà sên đã đến.
    if (m * (m + 1) / 2 >= n) {
        --m;
    }

    long long k = m * (m + 1) / 2; // tổng số chấm đã đi trước khi đến hàng m
    long long u = n - k - 1; // số chấm đã bò qua - số chấm đã bò qua từ m hàng trc(sự chênh lệch)

    long long i, j;
    if ((m + 1) % 2 != 0) { // nếu đang ở trên hàng chéo lẻ
        i = m + 1 - u;
        j = 1 + u;
    } else { // nếu đang ở trên hàng chéo chẵn
        i = 1 + u;
        j = m + 1 - u;
    }

    cout << i << " " << j << endl;
    // long long i = 1, j = 1;

    // while (n--){
    //     if (i == 1 && j % 2 == 1) {
    //         j++;
    //         continue;
    //     }
    //     if (j == 1 && i % 2 == 0) {
    //         i++;
    //         continue;
    //     }
    //     if (i == j) {
    //         i--;
    //         j++;
    //     }
    //     else if (i < j) {
    //         if((i+j)%2==0){
    //             i--;
    //             j++;
    //             continue;
    //         }
    //         i++;
    //         j--;
    //     } else {
    //         if((i+j)%2!=0){
    //             i++;
    //             j--;
    //             continue;
    //         }
    //         i--;
    //         j++;
    //     }
    // }
    // cout << i << " " << j;

    return 0;
}
