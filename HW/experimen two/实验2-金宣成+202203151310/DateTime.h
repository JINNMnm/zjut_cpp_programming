class DateTime
{
public:
    void show_time();
    void set_time();
    long normalize1()  const;//��Сʱ
    long normalize2() const;//����
    double diff1(const DateTime& T);//��СʱΪ��λ�������diff
    int diff2(DateTime& T);//����Ϊ��λ�������diff
private:
    int year;
    int month;
    int date;
    int hour;
    int minute;
};
