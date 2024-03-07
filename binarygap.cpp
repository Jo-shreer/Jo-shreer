#include <iostream>
using namespace std;

int solution(int N)
{
    int count = 0;
    int store = 0;
    bool firstmet = false;
    int R = 0;
    
    while(N >= 0)
    {
        R = N % 2;
        cout << "N:" << N << endl;
        cout << "R:" << R << endl;
        
        if(R == 1)
        {
            if( count > store && firstmet == true)
            {
                cout << "Inside" << endl;
                store = count;
                count = 0;
            }
        }
        
        if(R == 0)
        {
           count = count +1;
           cout  << "Count:" << count << endl;
        }
        else
        {
           firstmet = true;
           count = 0; 
           cout  << "firstmet:" << firstmet << endl;
           cout  << "count:" << count << endl;
        }
        
        if(N == 0)
        break;
        
        N = N/2;
    }
    
    return store;
}

int main(int argc, char **argv) 
    { 
        int N = 9; 
        int ret1 = solution(N); 
        cout << "ret1:" << ret1 << endl;
    
        return 0; 
    }
