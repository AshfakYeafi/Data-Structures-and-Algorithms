/*
for n=5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter N: "<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<(n-i);j++){
//             cout<<j+1<<" ";
//         }
//         cout<<"\n";
//     }
// }


/*
for n=6
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n,a;
//     cout<<"Enter N: "<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){

//         for(int j=1;j<=i;j++){
//             a=1;
//             if(i!=1 && ((i+j)%2!=0)){
//                 a=0;
//             }
//             cout<<a<<" ";
//         }
//         cout<<"\n";


//     }
// }


/*
for n=5
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter N: "<<endl;
//     cin>>n;
//     for (int i=1;i<=n;i++){
//         for(int j=0;j<(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }

#include<iostream>

using namespace std;

int main() {
    int n, st;
    // cout << "Enter N: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {

        for (int j = 0; j < (n - i ); j++) {
            cout << " ";
        }

        st = i;
        while (1)
        {
            if (st == 0 || st == -1) {

            }
            else {
                if (st < 0) {
                    cout << -1 * st;
                }
                else {
                    cout << st;
                }
            }
            if (st == -(i )) {
                break;
            }
            --st;
        }
        cout << "\n";
    }
}