#include<iostream>
using namespace std;

int main() {
	int n;
    std::cin>>n;
    int curr=0,prev=0;
    int increasing=0;
    for(int i=0;i<n;i++){
        std::cin>>curr;
        if(curr==prev){
            std::cout<<"false";
        	return 0;
        }
        else if(curr<prev){
            if(increasing>0){
                cout<<"false";
                return 0;
            }
    	}
        else if(curr>prev && i>0){
			increasing++;
        }
        prev=curr;
}
    std::cout<<"true";
}