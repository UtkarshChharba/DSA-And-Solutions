#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopb(i, a, b) for (int i = b; i >= a; i--)
#define mod 1000000007
#define endl '\n'
#define pii pair<int, int>

#define mii map<int, int>
#define And &&
#define vi vector<int>
#define Or ||
#define float double
#define pb push_back
#include <map>
#define infinity 999999999999999999
#define all(v) (v).begin(), (v).end()
#define MOD_DEFINE const int MOD = 1e9 + 7;
#define ff first
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define FIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define fps(x, y) fixed << setprecision(y) << x

class Node
{
public:
    Node *pre;
    Node *next;
    int data;
    Node(int data)
    {
        this->data = data;
        next = NULL;
        pre = NULL;
    }
};
class LRUCache
{

private:
    unordered_map<int, Node *> mp;
    int capacity;
    int size;
    Node *head;
    Node *tail;

public:
    // Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        capacity = cap;
    }

    // Function to return value corresponding to the key.
    int get(int key)
    {
        if (mp.count(key))
        {
            Node *pre = mp[key]->pre;
            Node *next = mp[key]->next;
            if (!pre)
            {
                return mp[key]->data;
            }

            else
            {
                pre->next = next;
                if (next)
                {
                    next->pre = pre;
                }
                head->pre = mp[key];
                mp[key]->next = head;
                mp[key]->pre = NULL;
                head = mp[key];
            }
            return mp[key]->data;
        }
        else
        {
            return -1;
        }
    }

    // Function for storing key-value pair.
    void set(int key, int value)
    {
        if (!mp.count(key))
        {
            Node *temp = new Node(value);
            mp[key] = temp;
            if (!size)
            {
                head = temp;
                tail = temp;
                size++;
            }
            else if (size < capacity)
            {
                head->pre = temp;
                temp->next = head;
                head = temp;
                size++;
            }
            else
            {
                if (size == 1)
                {
                    head = temp;
                }
                else
                {
                    tail->pre->next = NULL;
                    delete tail;
                    head->pre = temp;
                    temp->next = head;
                    head = temp;
                }
            }
        }
        else{
            Node *pre = mp[key]->pre;
            Node *next = mp[key]->next;
            if (!pre)
            {
                mp[key]->data=value;
            }

            else
            {
                pre->next = next;
                if (next)
                {
                    next->pre = pre;
                }
                head->pre = mp[key];
                mp[key]->next = head;
                mp[key]->pre = NULL;
                head = mp[key];
            }
            mp[key]->data=value;
        }
        }
};
//.............................................................................................//
int32_t main()
{
    FIO
    return 0;
}
//.............................................................................................//