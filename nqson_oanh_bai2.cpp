#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    deque<int> deck;
    ll n;
    cin >> n;
    ll cards[n];
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    sort(cards, cards + n);// 1 3 3 4
    for (int i = n-1; i >=0; i--) {
        // nhét là bài vào đáy bộ bài
        deck.push_front(cards[i]);
        // cho lá ở trên đầu xuống đáy
        deck.push_front(deck.back());
        deck.pop_back();
    }
    while(deck.size() != 0){
        cout << deck.front() << " ";
        deck.pop_front();
    }
    
    return 0;
}
