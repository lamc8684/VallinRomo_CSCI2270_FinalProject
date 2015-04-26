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

Tree::~Tree()
{
    //dtor
}
