#include <iostream>
#define max 50
using namespace std;
template<typename T>
class arr{
	private:
		int size;
		T a[max];
	public:
		arr(int s){
			size=s;
			a[size];
		}
	   void calculate(){
			cout<<"1.Sum\n2.Multiply"<<endl;
			int x;
			cin>>x;
			if(x==1){
			T sum=0;
			for(int i=0;i<size;i++){
				sum+=a[i];
			}
			cout<<sum<<endl;;
			}
			if(x==2){
				T p=1;
				for(int i=0;i<size;i++){
					p*=a[i];
				}
				cout<<p<<endl;
			}
		}
		void getinput(){
			for(int i=0;i<size;i++){
				cin>>a[i];
			}
		}
};
int main(){
	arr<int>a1(3);
	arr<int>a2(20);
	a1.getinput();
	a1.calculate();	
	a2.getinput();
	a2.calculate();
	return 0;
}
