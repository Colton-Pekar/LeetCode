//Soln by Colton-Pekar
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        ListNode* l3 = NULL;
        ListNode** node = &l3;
        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL){
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != NULL){
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            *node = new ListNode(sum%10);
            sum /= 10;
            node = &((*node) -> next);
        }
        return l3;
    }

    ListNode* InsertNode(ListNode* LL, int x){
        ListNode** headl1 = &LL;
        *headl1 = new ListNode(x);
        headl1 = &((*headl1) -> next);
        return LL;
    }

};

int main(){
    ListNode* l1;
    ListNode* l2;
    Solution Result;

    Result.InsertNode(l1, 5);
    Result.InsertNode(l1, 6);
    Result.InsertNode(l2, 3);
    Result.InsertNode(l2, 2);

    cout << l1;

}