#include <iostream>
#include<vector>
using namespace std;

int main()
{
int size1=0;
cin>>size1;
vector<string>num;
vector<int>ni;

    string x="";
int sum=0;

for(int i=0;i<size1;i++){
        cin>>x;
    num.push_back(x);
}
x="";
for(int i=0;i<num.size();i++){
 x= num[i];
    for (int j= 0; x[j] != '\0'; j++)
    {


            sum += (x[j] - '0');


    }
    ni.push_back(sum);
    sum=0;
}
for(int i=0;i<ni.size();i++){

cout<<ni[i]<<endl;
}

    return 0;
}
