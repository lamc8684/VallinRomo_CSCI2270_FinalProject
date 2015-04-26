#ifndef TREE_H
#define TREE_H


struct Node{
    bool head;

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
        void allPossibilities();
        void probability(int head, int tail);
        void printPastFlips();
        void reset();
        void printCounter();
        void compareProbabilities;
        virtual ~Tree();
    protected:
    private:
        int counter;
        Node *tracker;
        int Probabilities;
};

#endif // TREE_H
