class position
{
private:
    double x = 0;
    double y = 0;
public:
    position(double a,double b);
    position(double a);
    position();
    void show();
    void set(double a ,double b);
    void set();
    double Distance() const;
    double Distance(const position& a) const;
    double slope();
    double slope(const position & a) const;
    void move(double a);
    void move(double a,double b);
    ~position();
};

