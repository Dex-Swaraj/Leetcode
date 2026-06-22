class LRUCache {
public:

    class Node {
    public:
        int key, value;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = nullptr;
            next = nullptr;
        }
    };

    unordered_map<int, Node*> mp;
    Node* head;
    Node* tail;
    int cap;

    LRUCache(int capacity) {
        cap = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    void removeNode(Node* node) {
        Node* p = node->prev;
        Node* n = node->next;

        p->next = n;
        n->prev = p;
    }

    void insertNode(Node* node) {
        Node* p = tail->prev;

        p->next = node;
        node->prev = p;

        node->next = tail;
        tail->prev = node;
    }

    int get(int key) {

        if (mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];

        removeNode(node);
        insertNode(node);

        return node->value;
    }

    void put(int key, int value) {

        if (mp.find(key) != mp.end()) {

            Node* node = mp[key];
            node->value = value;

            removeNode(node);
            insertNode(node);

            return;
        }

        if (mp.size() == cap) {

            Node* lru = head->next;

            removeNode(lru);
            mp.erase(lru->key);
        }

        Node* node = new Node(key, value);

        insertNode(node);
        mp[key] = node;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */