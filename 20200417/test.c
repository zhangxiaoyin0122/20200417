#include <stdio.h>
#include <stdlib.h>
//给定一个整数数组 nums 和一个目标值 target，
//请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int* num = (int*)malloc(sizeof(int) * 2);
	int idx = 0;
	for (int i = 0; i < numsSize - 1; i++) {
		for (int j = i + 1; j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				num[0] = i;
				num[1] = j;
				*returnSize = 2;
				return num;
			}
		}
	}
	return 0;
}
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
	int* num = (int*)malloc(sizeof(int) * 2);
	for (int i = 0; i < numbersSize - 1; i++) {
		for (int j = i + 1; j < numbersSize; j++) {
			if (numbers[i] + numbers[j] == target) {
				num[0] = i + 1;
				num[1] = j + 1;
				*returnSize = 2;
				return num;
			}
		}
	}
	return 0;
}
void deleteNode(struct ListNode* node) {
	node->val = node->next->val;
	node->next = node->next->next;
	return;
}
//给定一个带有头结点 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。
struct ListNode* middleNode(struct ListNode* head) {
	struct ListNode* slow, *fast;
	slow = fast = head;
	while (fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
int getDecimalValue(struct ListNode* head) {
	struct ListNode* cur = head;
	int count = 0;
	while (cur) {
		count = 2 * count + cur->val;
		cur = cur->next;
	}
	return count;
}
//给定一个单链表，把所有的奇数节点和偶数节点分别排在一起。请注意，
//这里的奇数节点和偶数节点指的是节点编号的奇偶性，而不是节点的值的奇偶性。
struct ListNode* oddEvenList(struct ListNode* head) {
	if (head == NULL || head->next == NULL)
		return head;
	struct ListNode* head1, *head2, *prev, *cur;
	head1 = head;
	head2 = head->next;
	prev = head1;
	cur = head2;
	while (cur&&cur->next) {
		prev->next = cur->next;
		prev = prev->next;
		cur->next = prev->next;
		cur = cur->next;
	}
	prev->next = head2;
	return head;
}


int main() {

	system("pause");
	return 0;
}