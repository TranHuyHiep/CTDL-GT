#include <bits/stdc++.h>
#define up(i,a,b) for (int i = a; i <= b; i++)
#define pii pair<int, int>
#define f first
#define s second
#define bit(x,i) ((x >> i) & 1)
using namespace std;

const int maxn = 21;
const int LIM = INT_MAX;
char a[maxn][maxn];
int n,m;	//	m là số hàng, n là số cột
pii st;		// vị trí ban đầu con robot
pii V[50];	// vị trí vết bẩn
int cnt;	// Đếm số vết bẩn

void input(){
    cnt = 0;
    for(int i=1; i<=n; i++)
	{
        for(int j=1; j<=m; j++)
		{
            cin >> a[i][j];
            if (a[i][j] == 'o') st = make_pair(i, j);	//st là vị trí đầu tiên con rô bốt
            if (a[i][j] == '*')
			{
				cnt++;							//Đếm số vết bẩn
                V[cnt] = make_pair(i, j);		//Lưu vị trí vết bẩn
			}
        }
    }
}


int dis[maxn][maxn];			// vị trí làm sạch
const int dx[] = {0, 1, 0, -1, 0};
const int dy[] = {0, 0, 1, 0, -1};
int P[maxn];

bool beyond(int x, int y)		// kiểm tra xem tọa độ (x,y) có nằm ngoài phòng không?
{
    if(x < 1 || x > n || y < 1 || y > m) return true;		// Nằm ngoài -> true
    else return false;										// Nằm trong -> false
}

// root: vị trí robot;		fi: vị trí của 1 vết bẩn
int BFS(pii root, pii fi)	
{
    queue<pii> Q;						// khởi tạo 1 queue rỗng
    memset(dis, -1, sizeof(dis));		// cho tất cả các phần tử dis = -1
    Q.push(root);						// cho vị trí ban đầu của robot vào queue
    dis[root.f][root.s] = 0;			// đánh dấu vị trí đầu tiên của robot có giá trị là 0

    while (!Q.empty())
	{
        pii x = Q.front();				// gán vị trí đầu tiên
        Q.pop();						// xóa bỏ vị trí đầu tiên
        int ux = x.f;					// tọa độ x đầu tiên
        int uy = x.s;					// tọa độ y đầu tiên

        for(int i=1; i<=4; i++)			// có 8 nước để đi
		{
            int vx = ux + dx[i];
            int vy = uy + dy[i];
            if (dis[vx][vy] != -1) continue;						// nếu đã từng đi thì ->  bỏ qua
            if (beyond(vx, vy) || a[vx][vy] == 'x') continue;		// nếu vượt quá phạm vi hoặc tường -> bỏ qua

            Q.push({vx, vy});										// thêm vào giá trị đi được
            dis[vx][vy] = dis[ux][uy] + 1;							// (số bước của vị trí sau) = (số bước của vị trí trước) + 1
            if (vx == fi.f && vy == fi.s) return dis[vx][vy];		// nếu trùng với vị trí vết bẩn -> trả về:  số bước đi
        }
    }
    return LIM;														// trả về số vô cùng (do không thể dọn)
}

int T[11][11];
int F[1<<11][11];						// ???????? chưa rõ tại sao 		int F[(1 << 11)][11];	 	
void Dp_Bit()
{
	// res: tổng số bước
    int res = LIM;							// tổng số bước = vô cùng
    memset(F, 60, sizeof(F));				// khởi tạo tất cả các F = 60
    int mask = (1 << cnt) - 1;				// ??? chưa rõ tại sao				int mask = (1 << cnt) - 1;
    
	for(int i=0; i<cnt; i++)				//duyệt tất cả các vết bẩn
	{
        F[1 << i][i] = P[i+1];
    }
    
    for(int x=0; x<=mask; x++)
	{
        for(int i=0; i<cnt; i++)			// duyệt tất cả vết bẩn
		{
            if (bit(x, i))
            for(int j=0; j<cnt; j++)
			{
                F[x][i] = min(F[x][i], F[x - (1 << i)][j] + T[j][i]);
            }
            if (x == mask) res = min(res, F[x][i]);
        }
    }

    if (res == LIM) cout<<"\nKhong the lam sach";
    else cout << res << "\n";
}

int main(){
    //nhập dữ liệu
    cin>>m;		//Nhập số cột
    cin>>n;		//Nhập số hàng
    input();
    
    // xử lý dữ liệu
    for(int i=1; i<=cnt; i++)
	{
        P[i] = BFS(st, V[i]);
    }

    for(int i=1; i<=cnt; i++)
	{
        for(int j=i+1; j<=cnt; j++)
		{
            T[i-1][j-1] = T[j-1][i-1] = BFS(V[i], V[j]);
        }
    }
	// in ra dữ liệu
    Dp_Bit();
    
}
