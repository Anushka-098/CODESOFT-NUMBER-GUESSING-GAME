#include<iostream>
#include<cstdlib>
#include<time.h>
#include<unistd.h>
using namespace std;
    int x;
	int check(int b){
	
	 if(x<(b+5)&&x>(b-5)){
		cout<<"Your guess is too high"<<endl;
		sleep(1);
     }else{
		cout<<"Your guess is too low"<<endl;
		sleep(1);
		cout<<"try again"<<endl<<endl;
	 }  
}
int main(){
	int a;
	cout<<"Welcome to number guessing game"<<endl<<endl;
	sleep(2);
	for (a=0;a=rand();a++){
	cout<<"Enter the number between 1-100"<<endl;
  	cout<<"Guess the number =";
  	cin>>a;
  	sleep(1);

//    generate random number
	srand(time(0));
	int randomnumber= rand()%(100-1 + 1) + 1;
	cout<<"Random number = "<<randomnumber<<endl;
	sleep(1);
		if(randomnumber==a){
  	    	cout<<"Your guess is correct"<<endl;
  	    	sleep(1);
	    }else{
	  	    cout<<"Your guess is incorrect"<<endl;
	  	    
	  	    sleep(1);
	    }
	    check(a);
}  
	return 0;
}
