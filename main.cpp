#include <iostream>
#include <string>
using namespace std;

class Squirrel {
private:
    string name;

public:
    Squirrel(string name) {
        this->name = name;
    }

    string get_name() {
        return this->name;
    }
};

// Node class implementation
class Node {
private:
    Squirrel* squirrel;
    Node* leftChild;
    Node* rightChild;

public:

    Node(Squirrel* squirrel) {
        this->squirrel = squirrel;
        this->leftChild = nullptr;
        this->rightChild = nullptr;
    }

    void set_left(Node* node) {
        this->leftChild = node;
    }

    void set_right(Node* node) {
        this->rightChild = node;
    }

    Node* left() {
        return this->leftChild;
    }

    Node* right() {
        return this->rightChild;
    }

    Squirrel* get_squirrel() {
        return this->squirrel;
    }
};

//////////////////// Driver/Demo ///////////////////
int main() {

    Squirrel cheeks("Cheeks");
    Squirrel squeaks("Squeaks");
    Squirrel fluffybutt("Mr. Fluffy Butt");

    Node node_one(&cheeks);
    Node node_two(&squeaks);
    Node node_three(&fluffybutt);

    // Connecting nodes: they can be connected as requested left or right
    node_one.set_left(&node_two);
    node_one.set_right(&node_three);

    // Traverse and display
    cout << "Root Node: " << node_one.get_squirrel()->get_name() << endl;
    cout << "Left Child of Root: " << node_one.left()->get_squirrel()->get_name() << endl;
    cout << "Right Child of Root: " << node_one.right()->get_squirrel()->get_name() << endl;
    cout << "Program demo completed. Program Closing." << endl;

    return 0;
}