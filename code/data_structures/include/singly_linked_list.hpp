#ifndef _SINGLY_LINKED_LIST_HPP_
#define _SINGLY_LINKED_LIST_HPP_

template <typename T>
struct Node
{
    T date;
    Node* pNext;
};

template <typename T>
class Linkedlist
{
public:
    Linkedlist();
    Linkedlist(const Linkedlist<T> &list);
    Linkedlist<T>& operator= (const Linkedlist<T> &rhs);
    ~Linkedlist();

    void headAdd(const T& date);
    void rearAdd(const T& date);
    int size() const;
    bool isEmpty() const;
    void print() const;
    T getPos(int pos) const;
    void insert(int pos, const T& data);
    void deletePos(int pos);
    void modify(int pos, const T& date);
    int find(const T& date);
    void sort();
    void destroy();

private:
    Node<T>* header;
    int length;
};

#endif
