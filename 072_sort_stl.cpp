#include<iostream>
#include<vector>
#include<algorithm> //used for sort function
using namespace std;
int main(){

    vector<int>v;
    v.push_back(4); //inserting 4 in the vector
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    v.push_back(10);
    v.pop_back(); //removing the last element

    for (int i = 0; i < v.size(); i++) {  //printing the vector elements
        cout << v[i] << " ";
    }
    cout<<endl;
    
    v.insert(v.begin()+1,5); //inserting 5 at index 1
    // v.clear(); //clearing the vector, size becomes 0 but capacity remains same...
    
    for (int i = 0; i < v.size(); i++) {  //printing the vector elements
        cout << v[i] << " ";
    }
    cout<<endl;




    sort(v.begin(),v.end()); //sorting the vector from beginning to end , Increasing order
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),greater<int>()); //sorting the vector from end to beginning , Decreasing order
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>vnew;

    vnew.push_back(49);
    vnew.push_back(89);
    vnew.push_back(29);
    vnew.push_back(19);
    vnew.push_back(190);

    cout<<binary_search(vnew.begin(),vnew.end(),700);  //checking if 700 is present in the vector
    cout<<endl;
    cout<<find(vnew.begin(),vnew.end(),19)-vnew.begin(); //finding the index of 19 in the vector


    return 0;
}
