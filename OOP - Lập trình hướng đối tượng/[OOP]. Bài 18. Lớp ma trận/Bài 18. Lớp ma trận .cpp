#include <bits/stdc++.h>
using namespace std;
class Matrix
{
private:
    int Hang;
    int Cot;
    vector<vector<int>> v;
public:
    Matrix(int h, int c) : Hang(h) , Cot(c)
    {
        v.resize(Hang, vector<int>(Cot));
    }
    void Nhap()
    {
        for(int i = 0; i < Hang; i++)
        {
            for(int j = 0; j < Cot; j++)
            {
                cin >> v[i][j];
            }
        }
    }
    int ReturnHang()
    {
        return Hang;
    }
    int ReturnCot()
    {
        return Cot;
    }
    int ReturnMatrix(int i, int j)
    {
        return v[i][j];
    }
    Matrix Nhanhaimatran(Matrix& a)
    {
        int H = Hang;
        int C = a.ReturnCot();
        Matrix Ketqua(H, C);
        for(int i = 0; i < H; i++)
        {
            for(int j = 0; j < C; j++)
            {
                Ketqua.v[i][j] = 0;
                for(int k = 0; k < Cot; k++)
                {
                    Ketqua.v[i][j] += v[i][k] * a.ReturnMatrix(k , j);
                }
            }
        }
        return Ketqua;
    }
    void In()
    {
        for(int i = 0; i < Hang; i++)
        {
            for(int j = 0; j < Cot; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    Matrix A(n, m), B(m, p);
    A.Nhap();
    B.Nhap();
    Matrix C = A.Nhanhaimatran(B);
    C.In();
    return 0;
}
