//student2.h
class Student {
public:
Student();
Student(char * n);
Student(const Student & other);
void operator=(const Student& right);
//Student& operator=(const Student& right);
~Student( );
char  *GetName(); //��ȡ����
void  ChangeName(char *n); //����
private:
char *name;
};
