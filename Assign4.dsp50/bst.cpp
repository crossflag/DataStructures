/*
 * Diego Sebastian Santana, dsp50
 * 11/8/18
 * Program implements a binary search tree!
 */
#include <iostream>
using namespace std;

struct BinNode {
       int key;
       BinNode *left;
       BinNode *right;
};

class myBST {
public:
	myBST () { root = NULL; }
	~myBST ();
	BinNode* findInBST(int k); // return NULL if not found
	void insertToBST(int k);
	void preOrderTraversal();
	void postOrderTraversal();
	void inOrderTraversal();
	void rotatedPrintTree();
private:
    
    BinNode* root;
	
	void free_helper(BinNode* node);
//	BinNode* find_helper(BinNode* node, int k);  //optional helper function for findInBST
//	void insert_helper(BinNode* node, int k);  //optional helper function for insertToBST
	void preOrder(BinNode* node);
	void postOrder(BinNode* node);
	void inOrder(BinNode* node);
	void rotatedPrint(BinNode* node, int d);
}; 

myBST::~myBST() {
	free_helper(root);
}

void myBST::free_helper(BinNode* node) {
	if(node != NULL) {
		free_helper(node->left);
		free_helper(node->right);
		delete node;
	}
}



 //***************************
 //recursive implementation***
 //***************************
// BinNode* myBST::findInBST(BinNode* node, int k) {
//
// }

// BinNode* myBST::find_helper(BinNode* node, int k) {
//
// }


// //*******************************
// //non-recursive implementation***
// //*******************************
/*
 * Finds a certain user inputted node in the BST and its parent and children
 */
BinNode* myBST::findInBST(int k) {
    BinNode* currNode = root;
    while(currNode != NULL){
            if(currNode->key == k){
                break;
            }
            else if(currNode->key > k){
                currNode = currNode->left;
            }else if(currNode->key < k){
                currNode = currNode->right;
            }
        }
    return currNode;
}

 //***************************
 //recursive implementation***
 //***************************
//  myBST::insertToBST(int k) {
//
// }
// void myBST::insert_helper(BinNode* node, int k) {
//
// }
// //*******************************
// //non-recursive implementation***
// //*******************************
/*
 * Inserts nodes into a blank tree then pushes the tree into a permanent tree!
 */
void myBST::insertToBST(int k) {
    struct BinNode* tempNode = new BinNode;
    struct BinNode* masterNode;
    struct BinNode* currNode;

    tempNode->key = k;
    tempNode->left = NULL;
    tempNode->right = NULL;

    if(root == NULL){
        root = tempNode;
    }else{
        currNode = root;
        while(1){
            masterNode = currNode;
            if(k < masterNode->key){
                currNode = currNode->left;
                if(currNode == NULL) {
                    masterNode->left = tempNode;
                    return;
                }
            }else if(k == currNode->key) {
                std::cout << "NODE ALREADY EXISTS. This will not be inserted!" << endl;
                 return;
            }else{
                currNode = currNode->right;
                if (currNode == NULL){
                    masterNode->right = tempNode;
                    return;
                }
            }

        }
    }
}




//***********************************
//preOrderTraversal implementation***
//***********************************
void myBST::preOrderTraversal() {
	preOrder(root);
	cout << endl;
}

void myBST::preOrder(BinNode* node) {
    if(node == NULL)
        return;

    std::cout << node->key <<" ";

    preOrder(node->left);
    preOrder(node->right);
}


//************************************
//postOrderTraversal implementation***
//************************************
void myBST::postOrderTraversal() {
	postOrder(root);
	cout << endl;
}

void myBST::postOrder(BinNode* node) {
    if(node == NULL)
        return;
     postOrder(node->left);
     postOrder(node->right);

     std::cout << node->key << " ";
}



//**********************************
//inOrderTraversal implementation***
//**********************************
void myBST::inOrderTraversal() {
	inOrder(root);
	cout << endl;
}

void myBST::inOrder(BinNode* node) {
    if(node == NULL)
        return;

    inOrder(node->left);

    std::cout << node->key << " ";

    inOrder(node->right);
}


//***********************************
//print the tree (left rotated)******
//***********************************
void myBST::rotatedPrintTree() {
	rotatedPrint(root, 0);
}

void myBST::rotatedPrint(BinNode* node, int d) {
	if(node == NULL)
		return;
	
	if (node->right != NULL)
		rotatedPrint(node->right, d+1);
	
	for(int i = 0; i < d; i++)
		cout << "\t";
	cout << node->key << endl;
	
	if (node->left != NULL)
		rotatedPrint(node->left, d+1);
}



int main() 
{ 
    myBST testTree;
	
	int user_input = 0;
	
	while (user_input != -1) {
		cout << "Inserting a new node...." << endl;
		cout << "Please enter an integer between 0 and 99 as the key, ";
		cout << "and enter -1 to stop and to see the resulting tree: ";
		cin >> user_input;
		if (user_input >= 0 and user_input <= 99)
			testTree.insertToBST(user_input);
		else if (user_input != -1)
			cout << "Invalid input value (" << user_input << ") !" << endl;
	}
	cout << "Print the resulting tree (left-rotated):" << endl;
	testTree.rotatedPrintTree();

	cout << "preOrderTraversal: ";
	testTree.preOrderTraversal();
	cout << "postOrderTraversal: ";
	testTree.postOrderTraversal();
	cout << "inOrderTraversal: ";
	testTree.inOrderTraversal();


	user_input = 0;

	while (user_input != -1) {
		cout << "Searching a key...." << endl;
		cout << "Please enter an integer between 0 and 99 as the key to search, ";
		cout << "and enter -1 to stop searching: ";
		cin >> user_input;

		if (user_input >= 0 and user_input <= 99) {
			BinNode* temp = testTree.findInBST(user_input);
			if(temp == NULL)
				cout << user_input << " is not in this BST." << endl;
			else {
				cout << user_input << " is in this BST." << endl;
				if(temp->left != NULL)
					cout << user_input << " has a left child " << temp->left->key << endl;
				if(temp->right != NULL)
					cout << user_input << " has a right child " << temp->right->key << endl;
			}
		}
		else if (user_input != -1)
			cout << "Invalid input value (" << user_input << ") !" << endl;
	}

	return 0;
}