#include<bits/stdc++.h>
using namespace std;

class phuong_tien {
 private:
     int ma_xe;
     string loai_xe;
     int gio_vao;
     int tg_do;

 public:
     phuong_tien();
     phuong_tien(int ma, string loai, int gio, int tg);

     int lay_ma_xe() const;
     string lay_loai_xe() const;
     double tinh_phi() const;
     void hien_thi() const;
};
phuong_tien :: phuong_tien(){
 ma_xe = 0;
 loai_xe = "";
 gio_vao = 0;
 tg_do = 0;
}
phuong_tien :: phuong_tien(int ma, string loai, int gio, int tg){
 ma_xe = ma;
 loai_xe = loai;
 gio_vao = gio;
 tg_do = tg;
}

int phuong_tien :: lay_ma_xe() const {
 return ma_xe;
}

string phuong_tien :: lay_loai_xe() const{
 return loai_xe;
}

void phuong_tien :: hien_thi() const{
 cout << "Ma xe la: " << ma_xe << endl;
 cout << "Loai xe la: " << loai_xe << endl;
 cout << "Gio xe vao la: " << gio_vao << endl;
 cout << "Thoi gian do xe la: " << tg_do << endl;
}

double phuong_tien :: tinh_phi() const{
 bool gio_cao_diem = ( gio_vao >=6 && gio_vao <10) || (gio_vao >= 15 && gio_vao < 19);
 int phi_co_ban = 0;
 if(loai_xe == "xe oto") phi_co_ban = 6;
 else if(loai_xe == "xe may") phi_co_ban = 4;
 else if(loai_xe == "xe dap") phi_co_ban = 2;
 double phu_phi = 0.0;
 if(gio_cao_diem){
  phu_phi = 1.3;
 }else{
  phu_phi = 0.95;
 }
 double phi_do_xe = 0.0;
 if(tg_do <= 2){
        phi_do_xe = phi_co_ban * phu_phi * 25000 * tg_do;
    } else {
        double phi_trong_2h_dau = phi_co_ban * phu_phi * 25000 * 2;
        double phi_tiep_theo = phi_co_ban * 0.9 * 25000 * (tg_do - 2);
        phi_do_xe = phi_trong_2h_dau + phi_tiep_theo;
    }
    return phi_do_xe;
}
class bai_xe {
 private:
     int ma_bai;
     char kich_thuoc;
     phuong_tien pt1, pt2, pt3;
     bool co1, co2, co3;

 public:
     bai_xe();
     bai_xe(int ma, char kt);

     int lay_ma() const;
     bool them(phuong_tien v);
     bool xoa(int ma_xe);
     bool chua(int ma_xe) const;
     void hien_thi() const;
     bool co_loai(string loai, int& dem, double& tong) const;
};
