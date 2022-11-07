#include"bits/stdc++.h"
using namespace std;
class sinhvien {
		public:
	string ten;
	int tuoi;
	float diem;
	public:
		friend  istream &operator >>(istream &is,sinhvien &a)
		{
		cout<<"nhap ten : ";is.ignore(1); getline(is,a.ten);	
		cout<<"nhap diem :";is>>a.diem	;
		cout<<"nhap tuoi :";is>>a.tuoi;
		return is;
		}
		friend ostream &operator <<(ostream &os,sinhvien a)
		{
			os<<a.ten<<"\t"<<a.tuoi<<"\t"<<a.diem<<endl;
			return os;
		}
		//ham so sanh <
//		friend int operator <(sinhvien a, sinhvien b  )
//		{
//			if(a.diem<b.diem or a.tuoi<b.tuoi) return 1;
//			
//			else return 0;
//		}
};
class lop{
	int sosv;
	sinhvien *sv;
	sinhvien tmp;//bien trung gian
	public:
		friend  istream &operator >> (istream &is,lop &a)
		{
			cout<<"nhap danh sach lop: "<<"\n\tnhap so sinh vien lop: ";
			is>>a.sosv;
			a.sv=new sinhvien[a.sosv+1];
			for(int i=0;i<a.sosv;i++)
			{
				cout<<"nhap sinh vien thu "<<i+1<<": ";
				is>>a.sv[i] ;
			}
			
			return is;
		}
		friend ostream &operator << (ostream &os,lop a)
		{
		  for(int i=0;i<a.sosv;i++) os<<a.sv[i];
		  return os;	
		}
		float diemtb( lop a, int k)
	    {float tong=0 ;int d=0;int kiem=0;
		   for(int i=0;i<a.sosv;i++){
		   	if (a.sv[i].tuoi==k){
		   		tong +=a.sv[i].diem;d++;kiem=1;
			   }
		   }
		   if(kiem==0)cout<<"khong tim thay sinh vien tuoi "<<k<<" trong danh sach ";
		   
		return tong/(1.0*d);
		}
		void diemtbds(lop a)
		{
			//tim tuoi max
		     int max=a.sv[0].tuoi;
		    for(int i = 0;i <= a.sosv; i++)
		    {
			if(a.sv[i].tuoi>max)  max=a.sv[i].tuoi;
		    }
		//tinh tong  diem tung tuoi
		    float *tong;tong=new float [max+3];
			int *dem;dem=new int [max+1];
			for(int i = 1;i <= max; i++) { tong[i] = 0;dem[i]=0;}
            for(int i = 0; i <a.sosv ;i++)
			{
            tong[a.sv[i].tuoi]+=a.sv[i].diem;
			dem[a.sv[i].tuoi]++;
            }
            
        //in kl
            for(int i = 1;i <= max; i++){
            if(tong[i] > 0){
            cout<<endl << "diem trung binh tuoi " << i << " la :  " << tong[i]/(1.0*dem[i]) ;
                }
            }
            
		}
		
		void sapxeptheodiemtang(lop &a)
		{ 
			for(int i=0;i<a.sosv;i++)
			    for(int j=i+1;j<a.sosv;j++)
			{   //if(a.sv[i]<a.sv[j]==0)
				if(a.sv[i].diem>a.sv[j].diem )
				{
					a.tmp=a.sv[i];
					a.sv[i]=a.sv[j];       
					a.sv[j]=a.tmp;
				};
			}
			cout<<endl<<"sap xep theo diem tang: "<<endl<<a;
		}
		
//         void sapxeptheotuoigiam(lop &a)
//		{ 
//			for(int i=0;i<a.sosv;i++)
//			    for(int j=i+1;j<a.sosv;j++)
//			{
//				if(a.sv[i].tuoi<a.sv[j].tuoi ) {
//					a.tmp=a.sv[i];
//					a.sv[i]=a.sv[j];        
//					a.sv[j]=a.tmp;
//				};
//			}
//			cout<<"sap xep theo tuoi giam: "<<endl<<a;
//		}
		
};
int main()
{int k;
 lop a;cin>>a;cout <<a;
 cout<<endl<<"nhap tuoi can tinh diem tb: ";
 cin>>k;
  cout<<endl<<"diem tb theo tuoi "<<k<<" la : "<<a.diemtb(a,k);
  a.diemtbds(a);
  a.sapxeptheodiemtang(a);
 // a.sapxeptheotuoigiam(a);
  
}
