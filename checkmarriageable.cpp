/*�ڰ���k�b����100�~�H�e�A�W�w�k�k���B�̧C���ת��~�֫h���O�� 18 ���� 16 ���C���ڭ̧�ɥ��˦^�L�h�A
�мg�@�q�{�����ϥΪ̿�J�ʧO�M�~�֡A�P�_�b�תk�H�e�L/�o�ण�൲�B�C
#��J����
�Ĥ@�C�G�@�Ӿ�� 1�N��k�� �B 2�N��k��
�ĤG�C�G�@�Ӿ�ƥN��~��
#��X����
�i�H���B��XYou are marriageable.
���i�H���B��XYou are NOT marriageable.
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
