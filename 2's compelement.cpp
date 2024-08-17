#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

class compelement {	
	string s,one_s;
    public:	
        	
		
    void input() {
		cout<<"enter the string ..."<<endl;
		cin>>s;    
        }
        
	void check() {
		for (int i=0;i<s.length();i++){
			if (s[i]!='0' && s[i]!='1'){
				cout<< "Not a binary number" <<endl;
				exit(0);	
}
}
}
	void display(){
		check();
		for (int i=0;i<s.length();i++){
		if(s[i]=='0'){
			s[i] = '1';
		}
		else{
			s[i] = '0';
		}
	}
	one_s=s;
	cout<<"1's compelement ";
	cout << one_s << endl;
	for (int j=0;j<one_s.length();j++){
		if(one_s[j]=='0'){
			one_s[j] = '1';
		}
		else{
			one_s[j] = '0';
		}
	}
	cout<<"2's compelement ";
	cout << one_s << endl;
	
}
};

int main() {
    cout << "1's compelement.." << endl;
	compelement obj;
	obj.input();
	obj.check();
	obj.display();

    return 0;
}
