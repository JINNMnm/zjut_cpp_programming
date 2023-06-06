#include "Student1.h"

Student::Student(){
   name[0]='\0';
}

Student::Student(char *n)
{
	int i;
        for( i=0;n[i]!='\0';i++)
		name[i]=n[i];
	name[i]='\0';
}

char* Student::Get_name()
{ //返回名字
  
}

void Student::Change_name(char *n)
{ //改名
   
}
