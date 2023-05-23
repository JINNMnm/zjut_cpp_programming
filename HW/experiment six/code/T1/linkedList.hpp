template <class DataType>
class node
{
public:
    node(DataType d, node<DataType> *ptr = nullptr)
    {
        data = d;
        next = ptr;
    }
    node()
    {
        next = nullptr;
    }
    DataType data;
    node<DataType> *next;
};

template <class DataType>
class linked_list
{
public:
    linked_list();                                                        //�޲ι��죬��ʼ��һ���յ�����������Ϊ���ڱ���������Ĭ�ϰ���һ����㣩
    linked_list(const linked_list<DataType> &other);                      //��������
    linked_list<DataType> &operator=(const linked_list<DataType> &right); //��ֵ����
    int list_size() const;                                                //���������ݼ��е����ݹ�ģ
    //���ϲ�����Ҳ���Կ������Ϊ���⺯��
    linked_list<DataType> operator+(const linked_list<DataType> &right);       //�����ϲ�
    linked_list<DataType> operator-(const linked_list<DataType> &right);       //�����ϲ�
    linked_list<DataType> intersectionSet(const linked_list<DataType> &right); //�����Ͻ�
    node<DataType> *find(DataType value)const;                                      //����1 ���ذ���valueֵ�Ľ���ַ���Ҳ������ؿ�ָ��
    bool find(DataType value, node<DataType> *&pre, node<DataType> *&p)const;
    //����2�� �ҵ������棺pΪĿ��㣬preΪǰ����; �Ҳ������ؼ٣�p��pre��Ϊnullptr
    void add_front(DataType value);                           //��ӵ���
    void add_tail(DataType value);                            //��ӵ�β
    void add_pos_after(DataType value, node<DataType> *pos);  //��ӵ�ָ��λ��֮��
    void add_pos_before(DataType value, node<DataType> *pos); //��ӵ�ָ��λ��֮ǰ
    void Delete(DataType value);                              //ɾ��ָ��ֵ
    void delete_pos_after(node<DataType> *pos);               //ɾ��ָ��λ��֮��
    void delete_pos_before(node<DataType> *pos);              //ɾ��ָ��λ��֮ǰ
    void delete_all(DataType value);                          //ɾ�����а���value�Ľ��
    void delete_repeat();                                     //���������Ϊ���ظ�Ԫ�صļ���
    void reverse();                                           //��������
    void sort();                                              //�������е�ǰ����
    void display();                                           //��������ʹ�ö��ż�����Ԫ��
    ~linked_list();                                           //���������ڵ����н��
    template <class DataType1>
    friend linked_list<DataType1>  mergeSortedList(const linked_list<DataType1>& L1, const linked_list<DataType1>& L2 );
private:
    node<DataType> *head, *tail; //���ס���β
    int size;                    //��Ч���ݸ���
};

template<class DataType>
linked_list<DataType>  mergeSortedList(const linked_list<DataType>& L1, const linked_list<DataType>& L2 );



