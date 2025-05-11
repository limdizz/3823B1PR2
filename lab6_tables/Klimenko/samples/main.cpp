#include <iostream>
#include "TUnorderedTable.h"
#include "TOrderedTable.h"
#include "TAVLTree.h"
#include "THashTable.h"
#include "polynom.h"

TAVLTree<int, Polynom> avlTree;
TChainingHashTable<int, Polynom> chainHashTable;
TDoubleHashingHashTable<int, Polynom> doubleHashTable;
TOrderedTable<int, Polynom> bstTable;
TUnorderedArrayTable<int, Polynom> arrayTable;
TUnorderedListTable<int, Polynom> listTable;

int main() {
    while (true) {
        int input;
        size_t k, coeff, xdeg, ydeg, zdeg;

        std::cout << "Enter a number : 1 - Insert, 2 - Find, 3 - Remove, 4 - Print, 5 - Quit: ";
        std::cin >> input;
        if (input == 1) {
            Polynom pol;
            std::cout << "Enter a key: ";
            std::cin >> k;
            std::cout << "Enter a coefficient of the polynom: ";
            std::cin >> coeff;
            std::cout << "Enter an x degree (you can also enter 0): ";
            std::cin >> xdeg;
            std::cout << "Enter an y degree (you can also enter 0): ";
            std::cin >> ydeg;
            std::cout << "Enter an z degree (you can also enter 0): ";
            std::cin >> zdeg;
            pol.addTerm(coeff, { xdeg, ydeg, zdeg });
            arrayTable.insert(k, pol);
            listTable.insert(k, pol);
            bstTable.insert(k, pol);
            avlTree.insert(k, pol);
            chainHashTable.insert(k, pol);
            doubleHashTable.insert(k, pol);
            std::cout << "Polynom is added to all the tables!" << std::endl;
        }
        else if (input == 2) {
            size_t reqKey;
            std::cout << "Enter a key to be found: ";
            cin >> reqKey;

            Polynom reqPol;
            std::cout << "Enter a poly to be found (required for chain and double hash tables): ";
            std::cout << "Enter a coefficient of the polynom: ";
            std::cin >> coeff;
            std::cout << "Enter an x degree (you can also enter 0): ";
            std::cin >> xdeg;
            std::cout << "Enter an y degree (you can also enter 0): ";
            std::cin >> ydeg;
            std::cout << "Enter an z degree (you can also enter 0): ";
            std::cin >> zdeg;
            reqPol.addTerm(coeff, { xdeg, ydeg, zdeg });

            std::cout << "Finding key in array table:" << std::endl;
            Polynom* foundArrT = arrayTable.find(reqKey);
            if (foundArrT) foundArrT->print();
            std::cout << std::endl;

            std::cout << "Finding key in AVL tree:" << std::endl;
            Polynom* foundAVL = avlTree.find(reqKey);
            if (foundAVL) foundAVL->print();
            std::cout << std::endl;

            std::cout << "Finding key in list table:" << std::endl;
            Polynom* foundLT = listTable.find(reqKey);
            if (foundLT) foundLT->print();
            std::cout << std::endl;

            std::cout << "Finding key in BST:" << std::endl;
            Polynom* foundBST = bstTable.find(reqKey);
            if (foundBST) foundBST->print();
            std::cout << std::endl;

            std::cout << "Finding key in CHT:" << std::endl;
            Polynom* foundCHT = chainHashTable.find(reqKey, reqPol);
            if (foundCHT) foundCHT->print();
            std::cout << std::endl;

            std::cout << "Finding key in DHT:" << std::endl;
            Polynom* foundDHT = doubleHashTable.find(reqKey, reqPol);
            if (foundDHT) foundDHT->print();
            std::cout << std::endl;
        }
        else if (input == 3) {
            size_t reqK;
            std::cout << "Enter a key to be removed: ";
            cin >> reqK;

            Polynom reqP;
            std::cout << "Enter a poly to be removed (required for chain and double hash tables): ";
            std::cout << "Enter a coefficient of the polynom: ";
            std::cin >> coeff;
            std::cout << "Enter an x degree (you can also enter 0): ";
            std::cin >> xdeg;
            std::cout << "Enter an y degree (you can also enter 0): ";
            std::cin >> ydeg;
            std::cout << "Enter an z degree (you can also enter 0): ";
            std::cin >> zdeg;
            reqP.addTerm(coeff, { xdeg, ydeg, zdeg });

            std::cout << "Removing key from list table..." << std::endl;
            listTable.remove(reqK);
            std::cout << std::endl;
            std::cout << "Removing key from array table..." << std::endl;
            arrayTable.remove(reqK);
            std::cout << std::endl;
            std::cout << "Removing key from BST table..." << std::endl;
            bstTable.remove(reqK);
            std::cout << std::endl;
            std::cout << "Removing key from AVL Tree..." << std::endl;
            avlTree.remove(reqK);
            std::cout << std::endl;
            std::cout << "Removing key from Chain Hash Table..." << std::endl;
            chainHashTable.remove(reqK, reqP);
            std::cout << std::endl;
            std::cout << "Removing key from Double Hash Table..." << std::endl;
            doubleHashTable.remove(reqK, reqP);
            std::cout << std::endl;
            std::cout << "Polynom is removed from all the tables!" << std::endl;
        }
        else if (input == 4) {
            std::cout << "________________________________________" << std::endl;
            std::cout << "      Array Table:" << std::endl << std::endl;
            std::cout << "KEY       VALUE" << std::endl;
            arrayTable.print();

            std::cout << "________________________________________" << std::endl;
            std::cout << "      List Table:" << std::endl << std::endl;
            std::cout << "KEY       VALUE" << std::endl;
            listTable.print();

            std::cout << "________________________________________" << std::endl;
            std::cout << "      BST Table:" << std::endl << std::endl;
            std::cout << "KEY       VALUE" << std::endl;
            bstTable.print();

            std::cout << "________________________________________" << std::endl;
            std::cout << "      AVL Tree:" << std::endl << std::endl;
            std::cout << "KEY       VALUE" << std::endl;
            avlTree.print();

            std::cout << "________________________________________" << std::endl;
            std::cout << "      Chaining Hash Table:" << std::endl << std::endl;
            chainHashTable.print();

            std::cout << "________________________________________" << std::endl;
            std::cout << "      Double Hashing Hash Table:" << std::endl << std::endl;
            doubleHashTable.print();
            std::cout << "________________________________________" << std::endl << std::endl;
        }
        else if (input == 5) {
            return 0;
        }
    }
}
