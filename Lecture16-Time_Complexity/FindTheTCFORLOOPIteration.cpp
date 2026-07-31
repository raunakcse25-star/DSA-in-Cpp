#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i =1;i<=n;i++){

        cout<<"Raunak"<<endl;
    }
    cout<<" "<<endl;
}



// TC = O(n)

//O(2*n) =========================>>>>>>>>>>   O(n)
//0(n+-) =========================>>>>>>>>>>   o(n)
//if n*n =========================>>>>>>>>>>   O(n^2)
//if m*n =========================>>>>>>>>>>   O(m*n)
//if m+n =========================>>>>>>>>>>   O(m+n) or O(max(m,n))
//if i^2<=n ======================>>>>>>>>>>   O(n^1/2)
//for(int i =1;i<=n;i*=2) ========>>>>>>>>>>   O(x+1) ==> O(log(base(2))*(n)) ==>  O(log(n))  
//for(int i =1;i<=n;i*=3) ========>>>>>>>>>>   O(x+1) ==> O(log(base(3))*(n)) ==>  O(log(n))  
//for(int i =1;i<=n;i+=i) ========>>>>>>>>>>   O(log(n))
//for(int i =1;i<=n;i*=2){ 
//for(int j =1;j<=n;j++)}  ========>>>>>>>>>   O(nlog(n))
//for(int i =1;i<=n;i*=2){ 
//for(int j =1;j<=n;j*=2)}  ======>>>>>>>>>>   O(log(n))^2
//for(int i =1;i<=n;i*=2){ 
//for(int j =1;j<=i;j++)}  ========>>>>>>>>>   O(2*n-1) ==>>>O(n)
//for(int i =1;i*i<=n;i*=2)=======>>>>>>>>>>   O(log(n^1/2))===>>O(log(n))


//for(int i =0;i<=n;i++){ 
// for(int j =0;j<=n;j++){
//  count<<i<<" ";
// break;}} ===================>>>>>>>>>>>>>>  O(n)

//for(int i =0;i<=n;i++){ 
// for(int j =0;j<=i;j++){
//  if(j==0)
//  break;}} ===================>>>>>>>>>>>>>>  O(n)

//int j = 0;
//for(int i =0;i<=n;i++){ 
// while(j<n){
//cout<<j<<" ";
// j++; }} ===================>>>>>>>>>>>>>>>>  O(n)



//for(int i =0;i<=n;i++){ 
//int j = 0;
// while(j<n){
//count<<j<<" ";
// j++; }} ===================>>>>>>>>>>>>>>>   O(n^2)



//for(int i =0;i<=n;i++){ 
// for(int j =0 ;j<=n;j++){
//  continue;
// }} ===================>>>>>>>>>>>>>>>>>>>>  O(n^2)


//for(int i =0;i<=n;i++){ 
// for(int j =0 ;j<=5;j++){
// cout<<i;
// }} ===================>>>>>>>>>>>>>>>>>>>>  O(n*5) ====>>O(n)


//int count = 0;
//for(int i =0;i<=n;i++){ 
// for(int j =i ;j<=i;j++){
// count++;
// }} ===================>>>>>>>>>>>>>>>>>>>>   O(n)




//for(int i =0;i<n;i++){ 
// for(int j =1 ;j<=n;j++){
// i++
// }} ===================>>>>>>>>>>>>>>>>>>>>   O(n)


// for(int 1 = 2; i <=n; i*=i){
//     cout<<("Raunak");} ============>>>>>>> n = 2^2^x    ==>>>>>>   O(log(log(n)))


// for(int 1 = 2; i*i <=n; i*=i){
//     cout<<("Raunak");} ============>>>>>>> n = 2^2^x    ==>>>>>>   O(log(log(n^1/2)))  ====>>>O(log(log(n)))


// 

