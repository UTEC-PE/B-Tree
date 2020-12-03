#ifndef BTREE_H
#define BTREE_H

#include "node.h"

template <typename T>
class BTree {
    private:
        Node<T>* root;
        unsigned int order;

    public:
        // Validate the minimum order (>= 3)
        BTree(unsigned int order) : order(order), root(nullptr) {};

        bool insert(int key, T data) {
            // TODO
        }

        T& operator[](int key) {
            // TODO
        }

        bool remove(int key) {
            // TODO
        }

        bool hasKey(int key) const {
            // TODO
        } 

        int order() const {
            // TODO
        }

        int size() const {
            // TODO
        }

        int height() const {
            // TODO
        }

        bool empty() const {
            // TODO
        }

        void print() {
            // TODO
        }

        ~BTree();
};

#endif