    #include <iostream>
    #include <string>
    #include <iomanip>
    #include <cmath>
    #include <algorithm>
    using namespace std;
    void InitMatrix(int *p,int n,int k){
        for(int i = 0;i < n;i++){
            for(int j = 0;j < k;j++){
                cin >> p[i*k+j];
            }
        }
    }

    int* Multiply(int *a,int * b,int n,int k,int m){
        int * p = new int [n*m];
        for(int i = 0;i <n;i++){
            for(int j = 0;j < m;j++){
                int sum = 0;
                for(int o = 0;o < k;o++){
                    sum += a[i * k + o]*b[o * m +j];
                }
                p[i*m + j] = sum;
            }
        }
        return p;
    }
    void Display(int * p,int n,int m){
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cout << p[i * m + j] << ' ';
            }
            cout << endl;
        }
    }
    int main()
    {  
        int n,k,m;
        cout << "ÒÀ´ÎÊäÈën,k,m:";
        cin >> n >> k >>m;
        int *a = new int [n*k];
        int *b = new int [k*m];
        int *c = new int [n*m];
        InitMatrix(a,n,k);
        InitMatrix(b,k,m);
        c=Multiply(a,b,n,k,m);
        Display(c,n,m); 
        delete [] a;
        delete [] b;
        delete [] c;
        return 0;   
    }   
