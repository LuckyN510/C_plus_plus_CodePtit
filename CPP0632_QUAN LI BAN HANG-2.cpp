#include<bits/stdc++.h>

using namespace std;
using ll = long long;

class KhachHang
{
    private:
        string mkh, tenKh, sex, date, add;
    public:
        friend istream &operator >> (istream &in, KhachHang &a);
        friend ostream &operator << (ostream &out, KhachHang &a);
};

int cntMkh = 0;
istream &operator >> (istream &in, KhachHang &a)
{
    ++cntMkh;
    if(cntMkh < 10) a.mkh = "KH00" + to_string(cntMkh);
    else a.mkh = "KH0" + to_string(cntMkh);
    scanf("\n");
    getline(in, a.tenKh);
    getline(in, a.sex);
    getline(in, a.date);
    getline(in, a.add);

}

class MatHang
{
    private: 
        string mmh, tenMh, dv, giaMua, giaBan;
    public:
        friend istream &operator >> (istream &in, MatHang &a);
        friend ostream &operator << (ostream &out, MatHang &a);

};

int cntMmh = 0;
istream &operator >> (istream &in, MatHang &a)
{
    ++cntMmh = 0;
    if(cntMmh < 10) a.mmh = "MH00" + to_string(cntMmh);
    else a.mmh = "MH0" + to_string(cntMmh);
    scanf("\n");
    getline(in, a.mmh);
    getline(in, a.tenMh);
    getline(in, a.dv);
    getline(in, a.giaMua);
    getline(in, a.giaBan);
}

class HoaDon
{
    private:
        string mhd, mkh, mmh;
        ll sl;
    public:
        friend istream &operator >> (istream &in, HoaDon &a);
        friend ostream &operator << (ostream &out, HoaDon &a);

};

istream &operator >> (istream)