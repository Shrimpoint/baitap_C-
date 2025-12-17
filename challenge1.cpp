#include <iostream>
using namespace std;

int tong(){			//sale the east coast
	int a = 50, b = 100,total;
	total = a + b;
	cout<< "tong " << total << endl << '\n';
	return 0;
}

int predict_sale(){
	int a = 58;			//dat bien voi kieu du lieu la so thuc
	float b = 8.6,sale;
	sale = (a * b) / 100;			//vi phong sale the east coast cua mot cong ty tao ra 58% phan tong danh thu voi doanh thu cong ty do la 8.6 trieu nen ta co cong thuc (58 * 8.6) / 100;
	cout << "du doan sale " << sale << endl << '\n';
	return 0;
}

int tax(){
	int a = 95, b = 4, c = 2;
	float tieu_bang, quan;
	tieu_bang = (float) (a * b) / 100;
	quan = (float) (a * c) / 100;
	cout << "thue tieu bang " << tieu_bang << endl;
	cout << "thue quan " << quan << endl << '\n';
	return 0;
}

float hoa_don(){
	float a = 88.67,tien_tip = (a*20)/100,tax = (6.75*a)/100;
	cout << "so tien phai tra cho bua an la " << a  << endl;
	cout << "so tien thue " << tax << endl;
	cout << "so tien tip " << tien_tip << endl << '\n';
	return 0;
}

int GT_TB(){
	int gia_tri, a = 28, b = 32, c = 37, d = 24, e = 33, SUM = a + b + c + d + e;
	gia_tri = SUM/5;
	cout << "gia tri trung binh 5 bien " << gia_tri << endl << '\n';
	return 0;
}

int yearly_pay(){
	int a = 2200, annualPay,b = 26;
	annualPay = a * b;
	cout << "gia tri annualPay " << annualPay << endl << '\n';
	return 0;
}
/*
dau vao: 
	muc nuoc bien dang moi nam 1.5 mm
xy ly:
	bước 1: 1.5 mm x 5 năm
	bước 2: 1.5 mm x 7 năm
	bước 3: 1.5 mm x 10 năm
dau ra:
	so mm sẽ tăng lên so với mức nước biển hiện tại 5 năm
	số mm sẽ tăng lên so với mức nước biển hiện tại sau 7 năm
	số mm sẽ tăng lên so với mức nước biển hiện tại sau 10 năm
*/
int muc_nuoc_bien(){
	float a = 1.5, nam_nam, bay_nam, muoi_nam;
	nam_nam = 1.5 * 5;
	bay_nam = 1.5 * 7;
	muoi_nam = 1.5 * 10;
	cout << "nam nam muc nuoc bien tang len " << nam_nam << endl;
	cout << "nam bay muc nuoc bien tang len " << bay_nam << endl;
	cout << "nam muoi muc nuoc bien tang len " << muoi_nam << endl << '\n';
	return 0;
}

int total_money(){
	float a = 15.59, b = 24.59, c = 6.59, d = 12.59, e = 3.59,tong_tam_tinh,tien_thue = 0.07,tong_cong,so_tien_sau_khi_thue;
	tong_tam_tinh = a + b + c + d + e ;
	so_tien_sau_khi_thue = tong_tam_tinh * tien_thue;
	tong_cong = tong_tam_tinh + tien_thue;
	cout << "mon do nhat " << a << endl;
	cout << "mon do hai " << b << endl;
	cout << "mon do ba " << c << endl;
	cout << "mon do bon " << d << endl;
	cout << "mon do nam " << e << endl;
	cout << "tong tam tinh cua gio hang " << tong_tam_tinh << endl;
	cout << "so tien thue cua tong gio hang " << so_tien_sau_khi_thue << endl;
	cout << "so tien tong cong voi thue " << tong_cong << endl << '\n';
	return 0;
}
int data_size(){
	return 0;
}
int km_gallon(){
	int o_to_chua = 15, di_chuyen = 375;
	float moi_gallon_di_so_dam;
	moi_gallon_di_so_dam = di_chuyen/o_to_chua;
	cout << "moi gallon di duoc so dam la " << moi_gallon_di_so_dam << " km" << endl << '\n';
	return 0;
}

int quang_duong_gallon(){
	float binh_xang = 20,moi_dam_thanh_pho = 23.5, moi_dam_cao_toc = 28.9,moi_dam_thi_tran,q_moi_dam_cao_toc;
	moi_dam_thi_tran = moi_dam_thanh_pho/binh_xang;
	q_moi_dam_cao_toc = moi_dam_cao_toc/binh_xang;
	cout << "moi dam thi tran khi di duoc 1 gallon " << moi_dam_thi_tran << endl;
	cout << "moi dam cao toc khi di duoc 1 gallon " << q_moi_dam_cao_toc << endl << '\n';
	return 0;
}
int dirt_example(){
	float mau_dat = 43.560,khu_dat_dien_tich = 391.876;
	int so_mau_dat;
	so_mau_dat= khu_dat_dien_tich/mau_dat;
	cout << "so mau dat la " << so_mau_dat << endl << '\n';
	return 0;
}
int triangle(){
	cout << "   *" <<'\n';
	cout << "  ***" <<'\n';
	cout << " *****" <<'\n';
	cout << "*******"<<'\n'<<'\n';
	return 0;
}
int diamond(){
	cout << "   *" <<'\n';
	cout << "  ***" <<'\n';
	cout << " *****" <<'\n';
	cout << "*******"<<'\n';
	cout << " *****" <<'\n';
	cout << "  ***" <<'\n';
	cout << "   *" <<'\n'<<'\n';
	return 0;
}
int thong_tin(){
	cout << "ten cua toi la nong phu thien" << endl;
	cout << "hanoi, quanabc, 123456789" << endl;
	cout << "0338228848" << endl;
	cout << "Chuyen ngang cong nghe thong tin" << endl << '\n';
	return 0;
}
int gia_bo_mach(){
	float loi_nhuan=0.35,tong_gia_bo_mach=14.95,gia_bo_mach;
	gia_bo_mach = loi_nhuan*tong_gia_bo_mach;
	cout << "gia loi nhuan " << loi_nhuan <<endl;
	cout << "gia bo mach " << loi_nhuan <<endl;
	cout << "gia bo mach sau loi nhuan la" << gia_bo_mach <<endl<<'\n';
	return 0;
}
int chung_khoan(){
	float co_phieu = 750, gia_co_phieu = 35.00,so_tien_cho_co_phieu,so_tien_hoa_hong,hoa_hong = 0.02,tong_so;
	so_tien_cho_co_phieu = co_phieu * gia_co_phieu;
	so_tien_hoa_hong = so_tien_cho_co_phieu * hoa_hong;
	tong_so = so_tien_cho_co_phieu + so_tien_hoa_hong;
	cout << "so tien thanh toan cho co phieu (khong co hoa hong)" << so_tien_cho_co_phieu << endl;
	cout << "so tien hoa hong " << so_tien_hoa_hong << endl;
	cout << "tong so tien da thanh toan " << tong_so << endl;
	return 0;
}
int tieu_thu_nuoc_tang_luc(){
	float khach_hang = 16.500,nguoi_duoc_khao_sat = 0.15,thich_nuoc_cam_trong_tang_luc = 0.58,so_luong_khach_hang_mua_tang_luc,so_luong_khach_hang_tang_luc_cam;
	so_luong_khach_hang_mua_tang_luc = khach_hang * nguoi_duoc_khao_sat;
	so_luong_khach_hang_tang_luc_cam = so_luong_khach_hang_mua_tang_luc * thich_nuoc_cam_trong_tang_luc;
	cout << "so luong khach hang mua nuoc tang luc moi tuan " << so_luong_khach_hang_mua_tang_luc << endl;
	cout << "so luong khach hang mua nuoc tang luc vi cam " << so_luong_khach_hang_tang_luc_cam << endl << '\n';
	return 0;
}
int nhiet_do(){
	//bước 1 gán và nhập biến
	float do_new_york = 85, do_denver = 88, do_pheonix = 106, nhiet_do_tang = 0.02, tang_nhiet_do_new_york, tang_nhiet_do_denver, tang_nhiet_do_pheonix;
	//bước 2 tính toán
	tang_nhiet_do_new_york = do_new_york + do_new_york * nhiet_do_tang;
	tang_nhiet_do_denver = do_denver + do_denver * nhiet_do_tang;
	tang_nhiet_do_pheonix = do_pheonix + do_pheonix * nhiet_do_tang;
	cout << "nhiet do new york tang len la " << tang_nhiet_do_new_york << endl;
	cout << "nhiet denver tang len la " << tang_nhiet_do_denver << endl;
	cout << "nhiet do pheonix tang len la " << tang_nhiet_do_pheonix << endl << '\n';
	return 0;
}
int so_son(){
	//bước 1 gán biến
	float phu_duoc = 340, hang_rao_go_cao = 6, hang_rao_go_dai = 100,so_luong_gallon_can,chieu_cao_dai_cua_ao;
	chieu_cao_dai_cua_ao = hang_rao_go_cao * hang_rao_go_dai
	so_luong_gallon_can = chieu_cao_dai_cua_ao/phu_duoc
	cout << "dien tich cua ao la " << chieu_cao_dai_cua_ao << 
	return 0;
}
int main(){
	tong();
	predict_sale();
	tax();
	hoa_don();
	yearly_pay();
	muc_nuoc_bien();
	total_money();
	
	km_gallon();
	quang_duong_gallon();
	dirt_example();
	gia_bo_mach();
	thong_tin();
	triangle();
	diamond();
	chung_khoan();
	tieu_thu_nuoc_tang_luc();
	nhiet_do();
	
	return 0;
}