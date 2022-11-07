#include<bits/stdc++.h>
#include"slist.cpp"
using namespace std;
struct Edge
{
	int first,last,weight;
	Edge(int u=0,int v=0,int w=0)
	{
		first=u;last=v; weight=w;
	}
	Edge &operator=(Edge e)
	{
		first=e.first;last=e.last; weight=e.weight;
		return *this;
	}
};
struct Graph
{
	int n,m,tplt=1;
	slist<Edge> L;
	public:
		Graph(){n=m=0;}
		void readfile(string fname)
		{
			ifstream fin(fname);
			fin>>n>>m;
			for(int i=0;i<m;i++)
			{
				int u,v,w;
				fin>>u>>v>>w;
				L.push_back(Edge(u,v,w));
			}
			fin.close();
		}
		void write()
		{
			for(auto z:L) cout<<z.first<<" "<<z.last<<" "<<z.weight<<"\n";
		}
		void DFS(int x,int *d,int k)
		{
			d[x]=k;
			for(auto z:L)
			if(z.first==x && d[z.last]==0) DFS(z.last,d,k);
			else if(z.last==x && d[z.first]==0) DFS(z.first,d,k);
		}
		vector<Graph> Connect()
		{
			vector<Graph> V;
			int d[n+5]={},k=1;
			for(int x=1;x<=n;x++)
			if(d[x]==0) DFS(x,d,k++);
			for(int t=1;t<k;t++)
			{
				set<int> S;
				Graph GG;
				for(int i=1;i<=n;i++) if(d[i]==t) S.insert(i);
				for(auto z:L) if(S.find(z.first)!=S.end() && S.find(z.last)!=S.end())
				GG.L.push_back(z);
				V.push_back(GG);
			}
			tplt=V.size();
			return V;
		}
		void bfs(int x=1)
		{
			queue<int> Q;
			int d[n+5]={}; 
			d[x]=1;
			Q.push(x);
			while(Q.size())
			{
				int u=Q.front(); cout<<u<<" "; Q.pop();
				for(auto z:L)
				if(z.first==u && d[z.last]==0) {Q.push(z.last);d[z.last]=1;}
				else if(z.last==u && d[z.first]==0) {Q.push(z.first); d[z.first]=1;}
			}
		}
		void dfs()
		{
			stack<int> Q;
			int d[n+5]={},k=0; 
			for(int x=1;x<=n;x++)
			if(d[x]==0)
			{
				d[x]=1;
				cout<<"\nThanh phan thu "<<++k<<" : ";
				Q.push(x);
				while(Q.size())
				{
					int u=Q.top(); cout<<u<<" "; Q.pop();
					for(auto z:L)
					if(z.first==u && d[z.last]==0) {Q.push(z.last);d[z.last]=1;}
					else if(z.last==u && d[z.first]==0) {Q.push(z.first); d[z.first]=1;}
				}
			}
		}
		void travel()
		{
			cout<<"\nDuyet do thi : ";
			if(tplt==1) dfs();
			else dfs();
		}
		void dijkstra()
		{
				
		}

};

int main()
{
	Graph G;
	G.readfile("g.txt");
	G.write();
	vector<Graph> T=G.Connect();
	for(int i=0;i<T.size();i++) 
	{
		cout<<"Thanh phan lien thong : "<<i+1<<" : \n";
		T[i].write();
	}
	G.travel();
}


