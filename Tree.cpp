#include "Tree.h"

Tree::Tree()
{
    //ctor
}

void Tree::flipcoin(){
//0 is Tails and 1 is Heads
//random number generator indicates heads or tails
int flip=rand % 1+0;
if (flip==1) //heads
    if(tracker->left!=NULL)
        tracker=tracker->left;
    else //at the leaf
        cout<<"No more available flips"<<endl;
else //tails
    if(tracker->right!=NULL)
        tracker=tracker->right;
    else //at the leaf
        cout<<"No more available flips"<<endl;

}

void Tree::initializeAllPoss(node *tracker){
Node *x=tracker;
allPossibilities(x);
counter=0;
}

void Tree::allPossibilities(Node *x){
//count the leaves of the subtree recursively
while(x->right!=NULL)
    allPossibilities(x->right);
while(x->left!=NULL)
    allPossibilities(x->left);
if(x->left==NULL&&x->right==NULL)
    counter++;
}

Tree::~Tree()
{
    //dtor
}

bool Tree::forceFlip(){


}
