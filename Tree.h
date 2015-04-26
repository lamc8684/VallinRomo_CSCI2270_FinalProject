#ifndef TREE_H
#define TREE_H


struct Node{
    bool head;
    Node *right;
    Node *left;
    Node *parent;
    Node() {};

    Node(bool face){
    face=head;
    }
};

class Tree
{
    public:
        Tree();
        void flipcoin();
        void forceflip();
        void allPossibilities(Node *);
        void probability(int head, int tail);
        void initializeAllPoss(Node*);
        void printPastFlips();
        void reset();
        void printCounter();
        void compareProbabilities(Probabilities);
        int Probabilities;
        virtual ~Tree();
    protected:
    private:
        int counter;
        Node *tracker;
        Node *root;

};
//Sync test

#endif // TREE_H
