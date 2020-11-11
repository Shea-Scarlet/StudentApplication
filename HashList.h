#pragma once
#include "HashNode.h"

template<class ItemType>
class HashList
{
private:
    HashNode<ItemType>* hashAry;
    int hashSize;
    int count;

public:
    HashList() { count = 0; hashSize = 53; hashAry = new HashNode<ItemType>[hashSize]; }
    HashList(int n) { count = 0; hashSize = n;	hashAry = new HashNode<ItemType>[hashSize]; }
    ~HashList() { delete[] hashAry; }

    int getCount() const { return count; }
    int getSize() const { return hashSize; }
    double getLoadFactor() const { return 100.0 * count / hashSize; }
    bool isEmpty() const { return count == 0; }
    bool isFull()  const { return count == hashSize; }

    bool insert(const ItemType& itemIn, int h(const ItemType& key, int size));
    bool remove(ItemType& itemOut, const ItemType& key, int h(const ItemType& key, int size));
    int  search(ItemType& itemOut, const ItemType& key, int h(const ItemType& key, int size));
    void resolveCollision();
    int getNumberOfCollisions();
    int getLengthOfLongestList();

};