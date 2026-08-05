class LinkedList {
private:
    class Node{
        public:
            int val;
            Node *next;
    };
public:
    int N = 0;
    Node* head = nullptr;
    int data = 0;
    LinkedList() {

    }

    int get(int index) {
        if(head==NULL) return -1;
        Node *it = head;
        int ctr = 0;
        while(ctr < index){
            it = it->next;
            ctr++;
            if(it==nullptr){
                return -1;
            }
        }
        return it->val;
    }

    void insertHead(int val) {
        Node *newnode = new Node(val);
        if(head==NULL){
            head = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
        N++;
    }
    
    void insertTail(int val) {
        Node *newnode = new Node(val);
        if(head==NULL){
            head = newnode;
            N++;
            return;
        }
        else{
            Node* it = head;
            while(it->next!=NULL) it = it->next;
            it->next = newnode;
        }
        N++;
    }

    bool remove(int index) {
        if(head==NULL) return false;
        if(index < 0 || index >= N) return false;
        if(index==0){
            head = head->next;
            N--;
            return true;
        }
        Node* prev = new Node(-1);
        Node* curr = head;
        int idx = 0;
        while(idx < index){
            idx++;
            prev = curr;
            curr = curr->next;
        }
        N--;
        prev->next = curr->next;
        return true;
    }

    vector<int> getValues() {
        vector<int> res;
        Node* it = head;
        while(it!=NULL){
            res.push_back(it->val);
            it = it->next;
        }
        return res;
    }
};
