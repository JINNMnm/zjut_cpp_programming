//student1.h
class Student {
public:
 Student();//��������Ϊʲô��ȱʡ�޲ι���?
 Student(char * n);
 //Student(const Student & other);
 //Student& operator=(const Student& right);  
 //~Student( );
 char  *GetName();  //��ȡ����
 void  ChangeName(char *n);  //����
private:
 char name[20];
};
