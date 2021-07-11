#include<bits/stdc++.h>
using namespace std;

class SinhVien{
	public:
		string maSV;
		string hoTen;
		string lop;
		float diemTB;
		
		SinhVien(string maSV, string hoTen, string lop, float diemTB){
			this->maSV= maSV;
			this->hoTen= hoTen;
			this->lop= lop;
			this->diemTB= diemTB;
		}
		void hienThi(){
			cout<<maSv<<" "<<hoTen<<" "<<lop<<" "<<diemTB;
		}
		
};
int comparator(SinhVien sv1, SinhVien sv2){
	return (sv1.hoTen > sv2.hoTen) ? 1:0;
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
			cout<<endl;
			cout<<this->tu<<"/"<<this->mau;
		}
};

int main(){
	PhanSo ps1(1,2);
	PhanSo ps2(1,2);
	
	PhanSo ps3;
	ps3= ps1.tong(ps2);
	ps3.hienThi();
	ps3 =ps1.hieu(ps2);
	ps3.hienThi();
	ps3= ps1.tich(ps2);
	ps3.hienThi();
	ps3= ps1.thuong(ps2);
	ps3.hienThi();
	
	int n;
	cin>>n;
	SinhVien sv[n];
	for(int i=0; i<n; i++){
		string maSV;
		cin>>maSV;
		
		string hoTen;
		cin.ignore();
		getline(cin, hoTen);
		
		string lop;
		cin>>lop;
		
		float diemTB;
		cin>>diemTB;
		
		sv[i]= SinhVien(maSv, hoTen, lop, diemTB);
	}
	for(int i=0; i<n; i++){
		sv[i].hienThi();
	}
}
