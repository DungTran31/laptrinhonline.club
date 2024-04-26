#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode(0);  // Đầu danh sách kết quả
    ListNode* p = l1, *q = l2, *current = dummyHead;
    int carry = 0;  // Biến này chứa giá trị dư khi cộng 2 số

    while (p != nullptr || q != nullptr) {
        int x = (p != nullptr) ? p->val : 0;
        int y = (q != nullptr) ? q->val : 0;
        int sum = carry + x + y;

        carry = sum / 10;  // Lấy giá trị dư
        current->next = new ListNode(sum % 10);
        current = current->next;

        if (p != nullptr) p = p->next;
        if (q != nullptr) q = q->next;
    }

    if (carry > 0) {
        current->next = new ListNode(carry);
    }

    return dummyHead->next;
}

// Hàm để in ra danh sách liên kết
void printList(ListNode* l) {
    cout << "[";
    while (l != nullptr) {
        cout << l->val;
        l = l->next;
        if (l != nullptr) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

int main() {
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* result = addTwoNumbers(l1, l2);

    printList(result);

    return 0;
}
