/*我國民法在民國100年以前，規定男女結婚最低限度的年齡則分別為 18 歲及 16 歲。讓我們把時光倒回過去，
請寫一段程式讓使用者輸入性別和年齡，判斷在修法以前他/她能不能結婚。
#輸入說明
第一列：一個整數 1代表男生 、 2代表女生
第二列：一個整數代表年齡
#輸出說明
可以結婚輸出You are marriageable.
不可以結婚輸出You are NOT marriageable.
*/
#include <iostream>
using namespace std ;
int main(){
	int sex,age ;
	cout<<"Please enter your gender(male for 1,female for 2) and your age:" ;
	cin>>sex>>age ;
	
	if(sex ==1){
		if(age<18){
			cout<<"You are NOT marriageable."<<endl ;
		}
		else{
			cout<<"You are marriageable."<<endl ;
		}
	}
	if(sex == 2){
		if(age<16){
			cout<<"You are NOT marriageable."<<endl ;
		}
		else{
			cout<<"You are marriageable."<<endl ;
		}
	}
	if(sex !=1 && sex!= 2){
		cout<<"error,please try again. "<<endl ;
		}
	return 0;
	system("PAUSE") ;
}
