#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ofstream outfile1("../TXT/data1.txt");
    ofstream outfile2("../TXT/data2.txt");//���������·��������ڿ�ִ���ļ���·�����Բ�ͬwork space��ͬѧ�����в�ͬ�Ľ��
    if (!outfile1 or !outfile2)
	{
		cerr << "open error!" << endl;
		abort(); //�˳�����
	}
    //�������10���������뵽�����ļ���
    for(int i=0;i<10;i++){
        int temp=rand()%100;
        outfile1<<temp<<" ";
    }
    for(int i=0;i<10;i++){
        int temp=rand()%100;
        outfile2<<temp<<" ";
    }
    return 0;
}