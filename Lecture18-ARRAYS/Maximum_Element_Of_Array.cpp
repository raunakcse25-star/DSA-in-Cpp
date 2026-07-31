//Method 1
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int marks[20]= {23,32,12,5,36,64,86,90,93};
    int n = sizeof(marks)/4;
    int max = 0;
    for(int i =0;i<=n-1;i++){
        if(marks[i] > max) max = marks[i];
    }
    cout<<max;
}

//Method 2

// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h>
// #include <climits>
// using namespace std;
// int main(){
//     int marks[]= {-5,-2,-7,-3,-4};
//     int n = sizeof(marks)/4;
//     int max = INT_MIN;
//     for(int i =0;i<=n-1;i++){
//         if(marks[i] > max) max = marks[i];
//     }
//     cout<<max;
// }


//Method 3

// #include <iostream>
// #include <cmath>
// #include <bits/stdc++.h>
// #include <climits>
// using namespace std;
// int main(){
//     int marks[]= {-5,-2,-7,-3,-4};
//     int n = sizeof(marks)/4;
//     int mx = INT_MIN;
//     for(int i =0;i<=n-1;i++){
//         mx  =max(mx,marks[i]);
//     }
//     cout<<mx;
// }