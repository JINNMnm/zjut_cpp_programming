#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ofstream outfile1("../TXT/data1.txt");
    ofstream outfile2("../TXT/data2.txt");//这里用相对路径，相对于可执行文件的路径，对不同work space的同学可能有不同的结果
    if (!outfile1 or !outfile2)
	{
		cerr << "open error!" << endl;
		abort(); //退出程序
	}
    //随机生成10个整数输入到两个文件中
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