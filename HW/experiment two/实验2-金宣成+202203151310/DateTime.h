class DateTime
{
public:
    void show_time();
    void set_time();
    long normalize1()  const;//以小时
    long normalize2() const;//天数
    double diff1(const DateTime& T);//以小时为单位来储存的diff
    int diff2(DateTime& T);//以天为单位来储存的diff
private:
    int year;
    int month;
    int date;
    int hour;
    int minute;
};
