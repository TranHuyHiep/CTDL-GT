#include<bits/stdc++.h>
#include <conio.h>
#include"STACK.cpp"
using namespace std;

struct Graph 
{
	private:
		int n;
		int **a;
	public:
		Graph() {
			n = 0;
			a = 0;
		}
		void readfile(string fname)
		{
			ifstream fin(fname);
			fin>>n;
			a = new int*[n+5];
			for(int i=1; i<=n; i++) {
				a[i] = new int[n+5];
				for(int j=1; j<=n; j++) {
					fin >> a[i][j];
				}
			}
			fin.close();
		}
		void write()
		{
			cout<<"Do thi duoc nhap tu file la: \n";
			for(int i=1; i<=n; i++) {
				for(int j=1; j<=n; j++) {
					cout <<setw(3) << fixed << a[i][j];
				}
				cout<<"\n";
			}
		}
		void writefile(string fname)
		{
			ofstream fout(fname);
			for(int i=1; i<=n; i++) {
				for(int j=1; j<=n; j++) {
					fout <<setw(3) << fixed << a[i][j];
				}
				fout<<"\n";
			}
		}
		void dfs() 
		{
			cout<<"\nDuyet do thi theo chieu sau (DFS): ";
			STACK<int> S;
			int check[n+5] = {};
			for(int i=1; i<=n; i++) 
			{
				if(check[i] == 0) 
				{
					check[i] = 1;
					S.push(i);
					cout<<"\nCac thanh phan lien thong: "<<i;	
					while(S.size() != 0)
					{
						int u = S.top();
						if(u != i) cout<<" -> "<<u;	
						S.pop();
						check[u] = 1;
						for(int j=n; j>=1; j--)			
						{
							if(a[u][j] != 0 and check[j] == 0) 
							{
								check[j] = 1;	
								S.push(j);
							}
						}
					}
				}
			}	
		}
		void dijkstra(int start, int finish)
		{
			int u, minp, matrix[n+5][n+5], kc[n+5], dem=0, trace[n+5];
			bool check[n+5];
			for(int i=1; i<=n; i++) 
			{
				for(int j=1; j<=n; j++) 
				{
					if(a[i][j] == 0) matrix[i][j] = 1e6;
					else matrix[i][j] = a[i][j];
				}
			}
			for(int i=1; i<=n; i++)
			{
				kc[i] = matrix[start][i];
				trace[i] = start;
				check[i] = false;
			}
			trace[start] = 0;
			kc[start] = 0;
			check[start] = true;
			while(check[finish] == false)
			{	
				minp = 1e6;
				for(int i=1; i<=n; i++)
				{
					if((check[i] == false) and (minp > kc[i]))
					{
						u = i;
						minp = kc[i];
					}	
				}
				if(minp == 1e6) break;
				check[u] = true;
				for(int v=1; v<=n; v++)
				{
					if((check[v] == false) and (kc[u] + matrix[u][v] < kc[v])) 
					{
						kc[v] = kc[u] + matrix[u][v];
						trace[v] = u;
					}
				}
				if(dem > n) 
				{
					cout<<"\nKhong co duong di ngan nhat tu "<<start<<" toi "<<finish;
					return;
				}
				dem++;
			}
			cout<<"\nKhoang cach ngan nhat la: "<<kc[finish];
			cout<<"\nDuong di ngan nhat tu "<<start<<" toi "<<finish<<" la: ";	
			STACK<int> Trace;
			Trace.push(finish); 
			while(trace[finish] != 0) 
			{
				finish = trace[finish];
				Trace.push(finish);
			}			
			cout<<Trace.top();
			Trace.pop();
			while(Trace.size() != 0)
			{				
				cout<<" -> "<<Trace.top();
				Trace.pop();
			}
			
		}
};

int main() {
	int key;
	bool ktnhap = false;
	Graph G;
	do {
		system("cls");
		cout<<"1. Nhap ma tran tu file\n";
		cout<<"2. In ma tran ra file va man hinh\n";
		cout<<"3. Duyet do thi theo thuat toan dfs (tim kiem theo chieu sau)\n";
		cout<<"4. Tim duong di ngan nhat giua 2 dinh\n";
		cout<<"5. Ket thuc\n";
		cout<<"Moi chon: "; cin>>key;
		system("cls");
		switch(key) {
			case 1:
				cout<<"1. Nhap ma tran tu file\n";
				G.readfile("input.txt");
				cout << "Da nhap file tu dong thanh cong !!\n";
				ktnhap = true;
				break;
			case 2:
				cout<<"2. In ma tran ra file va man hinh\n";
				if(ktnhap == false) {
					cout<<"Chua nhap file!!!";
					break;
				}
				G.write();
				G.writefile("output.txt");
				break;
			case 3:
				cout<<"3. Duyet do thi theo thuat toan dfs (tim kiem theo chieu sau)\n";
				if(ktnhap == false) {
					cout<<"Chua nhap file!!!";
					break;
				}
				G.dfs();
				break;
			case 4:
				int start, finish;
				cout<<"4. Tim duong di ngan nhat giua 2 dinh\n";
				if(ktnhap == false) {
					cout<<"Chua nhap file!!!";
					break;
				}
				cout<<"Moi nhap dinh bat dau: "; cin>>start;
				cout<<"Moi nhap dinh ket thuc: "; cin>>finish; 	
				G.dijkstra(start, finish);	
				break;
			case 5:
				cout<<"KET THUC CHUONG TRINH!!!";			
		}
		getch();
	}while(key != 5);
	
	
}
