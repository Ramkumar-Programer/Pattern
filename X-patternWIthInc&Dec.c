#include <iostream>
 
using namespace std;

int main(int argc, char** argv)
{
    int num = 5 ;
    //int num = 4 ;
    //cin >> num;
    int a = 2;
    
    for(int index = 1; index <= num+(num-1); index += 1)
    {
        for(int ind = 1; ind <= num+(num-1); ind += 1)
        {
            if(ind == index || ind ==  (num+(num-index) ) )
            {
                //cout << index << " ";
                if(num  < index)
                {
                    cout << index-a << " ";
                    a += 1;
                    
                }
                else
                {
                    cout << index << " ";
                }
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    
}
   
