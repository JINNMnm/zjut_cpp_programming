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
    linked_list();                                                        //无参构造，初始化一个空的链表（若定义为带哨兵的链表则默认包含一个结点）
    linked_list(const linked_list<DataType> &other);                      //拷贝构造
    linked_list<DataType> &operator=(const linked_list<DataType> &right); //赋值重载
    int list_size() const;                                                //求链表数据集中的数据规模
    //集合并交叉也可以考虑设计为类外函数
    linked_list<DataType> operator+(const linked_list<DataType> &right);       //链表集合并
    linked_list<DataType> operator-(const linked_list<DataType> &right);       //链表集合差
    linked_list<DataType> intersectionSet(const linked_list<DataType> &right); //链表集合交
    node<DataType> *find(DataType value)const;                                      //查找1 返回包含value值的结点地址，找不到返回空指针
    bool find(DataType value, node<DataType> *&pre, node<DataType> *&p)const;
    //查找2： 找到返回真：p为目标点，pre为前驱点; 找不到返回假：p和pre均为nullptr
    void add_front(DataType value);                           //添加到首
    void add_tail(DataType value);                            //添加到尾
    void add_pos_after(DataType value, node<DataType> *pos);  //添加到指定位置之后
    void add_pos_before(DataType value, node<DataType> *pos); //添加到指定位置之前
    void Delete(DataType value);                              //删除指定值
    void delete_pos_after(node<DataType> *pos);               //删除指定位置之后
    void delete_pos_before(node<DataType> *pos);              //删除指定位置之前
    void delete_all(DataType value);                          //删除所有包含value的结点
    void delete_repeat();                                     //将链表调整为无重复元素的集合
    void reverse();                                           //逆置链表
    void sort();                                              //升序排列当前链表
    void display();                                           //遍历链表，使用逗号间隔输出元素
    ~linked_list();                                           //回收链表内的所有结点
    template <class DataType1>
    friend linked_list<DataType1>  mergeSortedList(const linked_list<DataType1>& L1, const linked_list<DataType1>& L2 );
private:
    node<DataType> *head, *tail; //表首、表尾
    int size;                    //有效数据个数
};

template<class DataType>
linked_list<DataType>  mergeSortedList(const linked_list<DataType>& L1, const linked_list<DataType>& L2 );



