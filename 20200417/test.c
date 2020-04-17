#include <stdio.h>
#include <stdlib.h>
//����һ���������� nums ��һ��Ŀ��ֵ target��
//�����ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ
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
//����һ������ͷ��� head �ķǿյ���������������м��㡣
//����������м��㣬�򷵻صڶ����м��㡣
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
//����һ�������������е������ڵ��ż���ڵ�ֱ�����һ����ע�⣬
//����������ڵ��ż���ڵ�ָ���ǽڵ��ŵ���ż�ԣ������ǽڵ��ֵ����ż�ԡ�
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