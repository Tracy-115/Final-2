#include <iostream>

using namespace std;
struct Node { //lab-11
  string name;               
  string drinks; 
  Node* next;
};

int main(){
  string names[5] = {"John", "Jane", "Joe", "Jill", "Jack"};
  string drinks[5] = {"Coke", "Pepsi", "Sprite", "Fanta", "Dr Pepper"};
  Node* head = nullptr;
  Node* tail = nullptr;
  auto back = [&] (string name, string drink) {
    Node* newNode = new Node{name, drink, nullptr};
    if (head == nullptr){
      head = tail = newNode;
    }
    else {
      tail -> next = newNode;
      tail = newNode;
    }
  };
  auto front = [&] () {
    if (head == nullptr){
      coout << "empty" << endl;
    }

    
}
