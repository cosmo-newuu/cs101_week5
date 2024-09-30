    #include <iostream>
    using namespace std;


    int main() {
        int a;
        cin >> a;
        while (a>0){
            int n;
            cin >> n;
            while (n>0){

                cout << n%10 << " ";
                n /= 10;
            }

            cout << endl;
            a--;
        }
    return 0;
    
    }
