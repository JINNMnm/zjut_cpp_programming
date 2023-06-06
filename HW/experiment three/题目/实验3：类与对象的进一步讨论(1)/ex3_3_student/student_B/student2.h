//student2.h
class Student {
public:
Student();
Student(char * n);
Student(const Student & other);
void operator=(const Student& right);
//Student& operator=(const Student& right);
~Student( );
char  *GetName(); //获取名字
void  ChangeName(char *n); //改名
private:
char *name;
};
