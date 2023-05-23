#include <iostream>
#include "linkedList.hpp"
using namespace std;

//�޲ι��캯��
template <typename T>
linked_list<T>::linked_list()
{
    head = new node<T>;
    if (head == NULL)
    {
        cout << "�ڴ����ʧ�ܣ�" << endl;
        exit(1);
    }
    tail = head;
    this->size = 0;
    tail->next = NULL;
    head->data = 0;
}

//�������캯��
template <typename T>
linked_list<T>::linked_list(const linked_list<T> &other){
    head = new node<T>;
    if (head == NULL)
    {
        cout << "�ڴ����ʧ�ܣ�" << endl;
        exit(1);
    }
    this->size = other.size;
    node<T> *p = other.head;
    node<T> *q = this->head;
    p = p->next;
    while (p)
    {
        node<T> *temp = new node<T>;
        temp->data = p->data;  
        q->next = temp;
        q = q->next;
        p = p->next;
    }
    q->next = NULL;
    tail = q;
}

//��ֵ����
template <typename T>
linked_list<T>& linked_list<T>::operator=(const linked_list<T> &right){
    if(this == &right){
        return *this;
    }//��ֹ�Ը�ֵ
    this->~linked_list();//����ԭ���ڴ�
    head = new node<T>;
    if (head == NULL)
    {
        cout << "�ڴ����ʧ�ܣ�" << endl;
        exit(1);
    }
    this->size = right.size;
    node<T> *p = right.head;
    node<T> *q = this->head;
    p = p->next;
    while (p)
    {
        node<T> *temp = new node<T>;
        temp->data = p->data;  
        q->next = temp;
        q = q->next;
        p = p->next;
    }
    q->next = NULL;
    tail = q;
    return *this;   
}

//���������ݼ��е����ݹ�ģ
template <typename T>
int linked_list<T>::list_size() const{
    return size;
}

//�����ϲ�
template <typename T>
linked_list<T> linked_list<T>::operator+(const linked_list<T> &right){
    //����right���ж��Ƿ���this�д��ڣ��������������
    linked_list<T> temp(*this);
    node<T> *q = right.head->next;
    while(q){
        if(!temp.find(q->data)){
            temp.add_tail(q->data);
            temp.size++;
        }
        q = q->next;
    }
    return temp;
}

//�����ϲ�
template <typename T>
linked_list<T> linked_list<T>::operator-(const linked_list<T> &right){  
    linked_list<T> temp(*this);
    node<T> *p = right.head->next;
    node<T> *q = NULL, *pre = NULL;
    while(p){
        if(temp.find(p->data, pre, q)){
            pre->next = q->next;
            delete q;
            temp.size--;
            if(pre->next == NULL){
                temp.tail = pre;
            }
        }
        p = p->next;
    }
    return temp;
}

//�����Ͻ�
template <typename T>
linked_list<T> linked_list<T>::intersectionSet(const linked_list<T> &right){
    linked_list<T> temp;
    node<T> *p = this->head->next;
    while(p){
        if(right.find(p->data)){
            temp.add_tail(p->data);
            temp.size++;
        }
        p = p->next;
    }
    return temp;
}

//����1 ���ذ���valueֵ�Ľ���ַ���Ҳ������ؿ�ָ��
template <typename T>
node<T> *linked_list<T>::find(T value)const{
    node<T> *p = head->next;
    while(p){
        if(p->data == value){
            return p;
        }
        p = p->next;
    }
    return NULL;
}

//����2�� �ҵ������棺pΪĿ��㣬preΪǰ����; �Ҳ������ؼ٣�p��pre��Ϊnullptr
template <typename T>
bool linked_list<T>::find(T value, node<T> *&pre, node<T> *&p)const{
    pre = this->head;
    p = pre->next;
    while(p){
        if(p->data == value){
            return true;
        }else{
            pre = p;
            p = p->next;
        }
    }
    pre = p = NULL;
    return false;
}


//��ӵ���
template <typename T>
void linked_list<T>::add_front(T value){
    node<T> *p = new node<T>;
    this->size++;
    p->next = head->next;
    head->next = p;
    p->data = value;
}

//��ӵ�β
template <typename T>
void linked_list<T>::add_tail(T value){
    node<T> *p = new node<T>;
    this->size++;
    p->data = value;
    tail->next = p;
    tail = p;
}

//��ӵ�ָ��λ��֮��
template <typename T>
void linked_list<T>::add_pos_after(T value, node<T> *pos){
    node<T> *p = new node<T>;
    this->size++;
    p->data = value;
    p->next = pos->next;
    pos->next = p;
}

//��ӵ�ָ��λ��֮ǰ
template <typename T>
void linked_list<T>::add_pos_before(T value, node<T> *pos){
    //���Ȳ���ǰ����
    this->size++;
    node<T> *p = this->head->next;
    node<T> *pre = this->head; 
    while(p){
        if(p == pos){
            break;
        }
        pre = p;
        p = p->next;
    }
    node<T> *n = new  node<T>;
    n->data = value;
    n->next = pre->next;
    pre->next = n;
}

//ɾ��ָ��ֵ
template <typename T>
void linked_list<T>::Delete(T value){
    this->size--;
    node<T> *p = this->head->next;
    node<T> *pre = this->head; 
    this->find(value,pre,p);
    pre->next = p->next;
    delete p;
}

//ɾ��ָ��λ��֮��
template <typename T>
void linked_list<T>::delete_pos_after(node<T> *pos){
    this->size--;
    node<T> *p = pos->next;
    pos->next = p->next;
    delete p;
}

//ɾ��ָ��λ��֮ǰ
template <typename T>
void linked_list<T>::delete_pos_before(node<T> *pos){
    this->size--;
    node<T> *p = this->head->next;
    node<T> *pre = this->head; 
    if(p == pos){
        cout << "��ǰ����" << endl;
        return;
    }
    while(p){
        if(p->next == pos){
            break;
        }
        pre = p;
        p = p->next;
    }
    pre->next = p->next;
    delete p;
}

//ɾ�����а���value�Ľ��
template <typename T>
void linked_list<T>::delete_all(T value){
    node<T> *p = this->head->next;
    node<T> *pre = this->head; 
    while(p){
        if(p->data == value){
            pre->next = p->next;
            delete p;
            p = pre->next;
            this->size--;
        }else{
            pre = p;
            p = p->next;
        }
    }
}

//���������Ϊ���ظ�Ԫ�صļ���
template <typename T>
void linked_list<T>::delete_repeat(){
    node<T> *p = this->head->next->next;
    if(!p) return;//���ֻ��һ�����Ͳ������ظ�
    node<T> *pre = this->head->next; 
    node<T> *temp = this->head->next;
    int flag;
    while(p){
        flag = 1;//�Ƿ�Ҫɾ��p
        while(temp != p){
            if(temp->data == p->data){
                flag = 0;
                break;
            }else{
                temp = temp->next;
            }
        }
        if(flag){
            pre = p;
            p = p->next;
            if(p == NULL){
                tail = pre;
            }
        }else{
            pre->next = p->next;
            if(p == tail){
                tail = pre;
            }
            delete p;
            this->size--;
            p = pre->next;
        }
        temp = this->head->next;//temp��Զ�ӵ�һ������ʼ���������飬���ǲ���Ҫ��pɾ��
    }
}

//��������
template <typename T>
void linked_list<T>::reverse(){
    node<T> *p = this->head->next;
    node<T> *pre = this->head; 
    node<T> *newhead = new node<T>;
    int flag = 0;
    while(p){
        pre = p;
        node<T> *temp = new node<T>(p->data);
        temp->next = newhead->next;
        if(flag == 0){
            tail = temp;
            flag = 1;
        }
        newhead->next = temp;
        p = p->next;
        delete pre;
    }
    delete this->head;
    this->head = newhead;
}

//�������е�ǰ����
template <typename T>
void linked_list<T>::sort(){
    node<T> *p = this->head->next;
    node<T> *mini = this->head->next;
    node<T> *q = this->head->next;
    while(p){
        while(q){
            if(q->data < mini->data){
                mini = q;
            }
            q = q->next;
        }
        if(mini != p){
            T temp = mini->data;
            mini->data = p->data;
            p->data = temp;
        }
        p = p->next;
        mini = p;
        q = p;
    }
}

//��������ʹ�ö��ż�����Ԫ��
template <typename T>
void linked_list<T>::display(){
    node<T> *p = head->next;
    while(p){
        cout << p->data;
        if(p->next){
            cout << ",";
        }
        p = p->next;
    }
    cout << endl;
}

//���������ڵ����н��
template <typename T>
linked_list<T>::~linked_list(){
    node<T> *p = this->head->next;
    node<T> *pre = this->head; 
    while(p){
        pre = p;
        p = p->next;
        delete pre;
    }
    delete this->head;
}

//�ϲ���������������
template<class T>
linked_list<T> mergeSortedList(const linked_list<T>& L1, const linked_list<T>& L2 ){
    node<T> * p = L1.head->next;
    node<T> * q = L2.head->next;
    linked_list<T> temp ;
    while(p and q){
        if(p->data < q->data){
            temp.add_tail(p->data);
            temp.size++;
            p = p->next;
        }else if (p->data > q->data)
        {
            temp.add_tail(q->data);
            temp.size++;
            q = q->next;
        }else{
            temp.add_tail(q->data);
            temp.size++;
            p = p->next;
            q = q->next;
        }
    }
    if(p){
        while(p){
            temp.add_tail(p->data);
            temp.size++;
            p = p->next;
        }
    }else if(q){
        while(q){
            temp.add_tail(q->data);
            temp.size++;
            q = q->next;
        }
    }
    return temp;
}

template class linked_list<int>;
template linked_list<int> mergeSortedList<int>(linked_list<int> const&, linked_list<int> const&);