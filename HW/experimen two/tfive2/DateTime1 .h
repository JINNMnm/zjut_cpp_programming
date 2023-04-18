class Time
{
public:
    void show_time();
    void set_time();
    long normalize()  const;
    double diff(const Time& T);
private:
    int hour;
    int minute;
};

class Date
{
public: 
    void set_date();
    void show_date();
    long normalize() const;
    double diff(const Date& T);
private:   
    int year;
    int month;
    int date;
};