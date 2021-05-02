#include <iostream>
#include <string>
using namespace std;
int main(){
    char colons;
    int hour, minutes;
    cin>>hour>>colons>>minutes;
    if(hour == 0 || hour == 12){
    	cout<<"12"<<":";
    	if(minutes < 10 && hour == 0){
    		cout<<"0"<<minutes<<" AM";
		}else if(minutes > 10 && hour == 0){
			cout<<minutes<<" AM";
		}else if(minutes < 10 && hour == 12){
    		cout<<"0"<<minutes<<" PM";
		}else if(minutes > 10 && hour == 12){
			cout<<minutes<<" PM";
		}
		return 0;
	}
    else if(hour > 12){
        if(hour < 22){
            cout<<"0"<<hour-12<<":";
        	if(minutes < 10){
	    		cout<<"0"<<minutes<<" PM";
			}else{
				cout<<minutes<<" PM";
			}
        }else{
            cout<<hour-12<<":"; 
            if(minutes < 10){
	    		cout<<"0"<<minutes<<" PM";
			}else{
				cout<<minutes<<" PM";
			}
        }
    }else{
        cout<<hour<<":";
        if(minutes < 10){
    		cout<<"0"<<minutes<<" AM";
		}else{
			cout<<minutes<<" AM";
		}
    }
    
    return 0;
}
