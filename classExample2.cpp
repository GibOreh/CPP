#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    int temp = __gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

class PhanSo{
	public:
		int tu;
		int mau;
		PhanSo(){
			
		}
		PhanSo(int tu, int mau){
			this->tu= tu;
			this->mau= mau;
		}
		
		void rutGon(){
			int gcd= __gcd(this->tu, this->mau);
			this->tu= this->tu/gcd;
			this->mau= this->mau/gcd;
		}
		PhanSo quyDong(PhanSo psB){
			PhanSo kq;
			int lcm_= lcm(this->mau, psB.mau);
			kq.tu= (lcm_/this->mau)*this->tu; 
			kq.mau= lcm_;
			return kq;
		}
		
		PhanSo tong(PhanSo psB){
			PhanSo kq;
			kq.tu= this->tu * psB.mau + psB.tu * this->mau;
			kq.mau= this->mau * psB.mau;
			kq.rutGon();
			return kq;
		}
		PhanSo hieu(PhanSo psB){
			PhanSo kq;
			kq.tu= this->tu * psB.mau - psB.tu * this->mau;
			kq.mau= this->mau * psB.mau;
			kq.rutGon();
			return kq;
		}
		PhanSo tich(PhanSo psB){
			PhanSo kq;
			kq.tu= this->tu * psB.tu;
			kq.mau= this->mau * psB.mau;
			kq.rutGon();
			return kq;
		}
		PhanSo thuong(PhanSo psB){
			PhanSo kq;
			kq.tu= this->tu * psB.mau;
			kq.mau= this->mau * psB.tu;
			kq.rutGon();
			return kq;
		}
		void hienThi(){
			cout<<this->tu<<"/"<<this->mau;
		}
};

int main(){
	int t;
	cin>>t;
	int index=0;
	while(t--){
		index++;
		PhanSo a;
		PhanSo b;
		cin>>a.tu>>a.mau>>b.tu>>b.mau;
		a.rutGon();
		b.rutGon();
		cout<<"Case #"<<index<<":"<<endl;
		a.quyDong(b).hienThi();
		cout<<" ";
		b.quyDong(a).hienThi();
		cout<<endl;
		a.tong(b).hienThi();
		cout<<endl;
		a.thuong(b).hienThi();
		cout<<endl;
		
	}
}
