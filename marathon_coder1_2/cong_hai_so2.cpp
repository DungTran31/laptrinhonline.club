#include <iostream>
#include <vector>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Hàm để thêm một số vào danh sách liên kết
void insert(ListNode *&head, int val)
{
    if (!head)
    {
        head = new ListNode(val);
    }
    else
    {
        ListNode *curr = head;
        while (curr->next)
        {
            curr = curr->next;
        }
        curr->next = new ListNode(val);
    }
}

// Hàm để in danh sách liên kết
void printList(ListNode *head)
{
    std::cout << "[";
    while (head != nullptr)
    {
        std::cout << head->val;
        head = head->next;
        if (head != nullptr)
        {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *dummy = new ListNode(0); // Nút giả đầu tiên
    ListNode *p = l1, *q = l2, *current = dummy;
    int carry = 0;

    while (p || q)
    {
        int x = (p) ? p->val : 0;
        int y = (q) ? q->val : 0;

        int sum = x + y + carry;
        carry = sum / 10;
        current->next = new ListNode(sum % 10);
        current = current->next;

        if (p)
            p = p->next;
        if (q)
            q = q->next;
    }

    if (carry > 0)
    {
        current->next = new ListNode(carry);
    }

    return dummy->next;
}

int main()
{
    // Tạo danh sách liên kết l1 và l2
    ListNode *l1 = nullptr;
    ListNode *l2 = nullptr;

    insert(l1, 1);

    insert(l2, 2);
    

    // Gọi hàm cộng hai danh sách liên kết
    ListNode *result = addTwoNumbers(l1, l2);

    // In kết quả
    printList(result);

    return 0;
}
