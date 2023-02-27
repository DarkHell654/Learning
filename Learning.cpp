
/*
#include<iostream>
#include<string>
#include <cmath>
#include <vector>
//linked list!
class node {
public:
	int data;
	node* next;

};
void printlist(node* head) {
	while (head != NULL) {
		std::cout << head->data << " ";
		head = head->next;
	}
}
void push_front(node*& head_ref,int new_data) {
	node* new_node = new node();
	new_node->data = new_data;
	new_node->next = head_ref;
	head_ref = new_node;
}
void push_after(node* prev_node, int new_data) {
	if (prev_node == NULL) {
		return;
	}
	node* new_node = new node();
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}
void push_back(node*& head_ref, int new_data) {
	node* new_node = new node();
	node* last = head_ref;
	new_node->data = new_data;
	new_node->next = NULL;
	if (head_ref == NULL) {
		head_ref = new_node;
		return;
	}
	while (last->next != NULL) {
		last = last->next;
	}
	last->next = new_node;
	return;
}


std::vector<int> AddBinary(std::vector<int> v1, std::vector<int> v2) {
	std::vector<int> v3;
	auto carry = 0;
	for (int i( std::max(v1.size(),v2.size()) - 1 ); i >= 0; i--) {
		v3.push_back((v1[i] + v2[i] + carry) % 2);
		carry = (int) std::floor((v1[i] + v2[i] + carry) / 2);
		
		}
	v3.push_back(carry);
	return v3;

}

int main() {

	std::vector<int> x = { 1,0,1,1,1,0 };
	std::vector<int> y = { 0,1,0,1,1,0 };
	std::vector<int> z = AddBinary(x, y);
	for (int i{ (int) z.size() -1 }; i >= 0 ; i--) {
		std::cout << z[i] << " ";
	}
	*/	
	/*
				//PLAYER player0;
					//player0.speed = 10;
				/*
					// decltype of an expression can be a reference type
					int i = 42, * p = &i, & r = i;
					decltype(r + 0) b; // ok: addition yields an int; b is an (uninitialized) int
					decltype(*p) c; // error: c is int& and must be initialized


					const int ci = 0, & cj = ci;
					decltype(ci) x = 0; // x has const int type
					decltype (cj) y = x; // y is a reference and has type const int &
					decltype (cj) z; // error z is a reference and must be initialized
				/*
					using SI = int;
					typedef int number;
					typedef number someshit ;
					SI x = 5;

					auto y = "WTF IS HAPPENING?";

					const int g = 5;
					auto w = g; //top level const is dropped
					w = 3;

					auto& g = ci; // g is a const int& that is bound to ci
					auto& h = 42; // error: we can’t bind a plain reference to a literal
					const auto& j = 42; // ok: we can bind a const reference to a literal

					auto z = 0, * p = &z;

					std::cout << y;

					//constexpr int* p = &x;

					/*int* const ptr = &y; // top level const
					const int* ptr = &y; //low level const
					const int* const ptr = &y;// low and top level const*/

