#include<bits/stdc++.h>
using namespace std;
#define MAX 50
#define TRUE 1
#define FALSE  0
#define VOCUNG 10000000
int n;//số đỉnh của đồ thị.
int s;//đỉnh đầu.
int t;//đỉnh cuối
int d[MAX];//mảng đánh dấu khoảng cách.
int Matrix[MAX][MAX];//ma trận trọng số
int chuaxet[MAX];//mảng đánh dấu đỉnh đã được gán nhãn.

void Dijkstra()
{
	int u, minp;	
	//khởi tạo nhãn tạm thời cho các đỉnh.	
	for (int v = 1; v <= n; v++)
	{	
		d[v] = Matrix[s][v];				
		chuaxet[v] = FALSE;	
	}		
	d[s] = 0;	
	chuaxet[s] = TRUE;
	//bươc lặp
	while (chuaxet[t] == false) 
	{
		minp = VOCUNG;
		//tìm đỉnh u sao cho d[u] là nhỏ nhất
		for (int v = 1; v <= n; v++)
		{	
			if ((chuaxet[v] == false) and (minp > d[v]))
			{	
				u = v;
				minp = d[v];
			}
		}
		chuaxet[u] = TRUE;// u la dinh co nhan tam thoi nho nhat
		if (chuaxet[t] == false)
		{	
			//gán nhãn lại cho các đỉnh.	
			for (int v = 1; v <= n; v++)
			{	
				if ((chuaxet[v] == false) and (d[u] + Matrix[u][v] < d[v]))
				{	
					d[v] = d[u] + Matrix[u][v];		
				}
			}
		}
	}

}