#include <bits/stdc++.h>
using namespace std;
class Dentistry{
	public:
		int hotline;
		string diaChi;
		string coSo;
		string thoiGianHoatDong;
	Dentistry(){
		this->hotline = 0;
		this->diaChi =" ";
		this->coSo =" ";
		this->thoiGianHoatDong = " ";
	} 
	Dentistry(int hotline, string diaChi, string coSo, string thoiGianHoatDong){
		this->hotline = hotline;
		this->diaChi = diaChi;
		this->coSo = coSo;
		this->thoiGianHoatDong = thoiGianHoatDong;
	}
	void sethotline(int hotline){
		this->hotline = hotline;
	}
	void setdiaChi(string diaChi){
		this->diaChi = diaChi;
	}
	void setcoSo(string coSo){
		this->coSo = coSo;
	}
	void setthoiGianHoatDong(string thoiGianHoatDong){
		this->thoiGianHoatDong = thoiGianHoatDong;
	}
	int gethotline(){
	    return this->hotline;
	}
	string getdiaChi(){
		return this->diaChi;
	}
	string getcoSo(){
		return this->coSo;
	}
	string getthoiGianHoatDong(){
		return this->thoiGianHoatDong;
	}
	virtual void input(){
		ofstream fo;
		fo.open("C:\\ProjectDentistry\\Dentistry.txt");
		if(fo.is_open()){
			cout<<"hotline: ";
			cin>>hotline;
			this->sethotline(hotline);
			cin.ignore();
			cout<<"Dia chi: ";
			getline(cin,diaChi);
			this->setdiaChi(diaChi);
			cout<<"Co so: ";
			getline(cin, coSo);
			this->setcoSo(coSo);
			cout<<"Thoi Gian Hoat Dong: ";
			getline(cin, thoiGianHoatDong);
			this->setthoiGianHoatDong(thoiGianHoatDong);
			fo<<"hotline: "<< hotline <<"."<<endl;
			fo<<"Dia chi: "<< diaChi  <<"."<<endl;
			fo<<"Co so: "  << coSo    <<"."<<endl;
			fo<<"Thoi Gian Hoat Dong: " << thoiGianHoatDong<<"."<<endl;
			fo.close();
		}
			else{
				cout << "File not found!";
			}
	}
	virtual void output(){
		cout<<"___________________________________________"<<endl;
		cout<<"hotline: "<<this->gethotline()<<endl;
		cout<<"Dia chi: "<<this->getdiaChi()<<endl;
		cout<<"Co so: "<<this->getcoSo()<<endl;
		cout<<"Thoi Gian Hoat Dong: "<<this->getthoiGianHoatDong()<<endl;
	}
};
class Patient : public Dentistry{
	public: 
	    int patientID;
	    string namePatient;
	    int sdtPatient;
	    string gioiTinh;
	    string baoHiem;
	Patient(){
	    this->patientID = 0;
	    this->namePatient = " ";
	    this->sdtPatient = 0;
	    this->gioiTinh = " ";
	    this->baoHiem = " ";
	}
	Patient(int patientID, string namePatient, int sdt, string gioiTinh, string baoHiem){
		this->patientID = patientID;
	    this->namePatient = namePatient;
	    this->sdtPatient = sdtPatient;
	    this->gioiTinh = gioiTinh;
	    this->baoHiem = baoHiem;
	}
	void setpatientID(int patientID){
		this->patientID = patientID;
	}
	void setnamePatient(string namePatient){
		this->namePatient = namePatient;
	}
	void setsdtPatient(int sdtPatient){
		this->sdtPatient = sdtPatient;
	}
	void setgioiTinh(string gioiTinh){
		this->gioiTinh = gioiTinh;
	} 
	void setbaoHiem(string baoHiem){
		this->baoHiem = baoHiem;
	}
	int getpatientID(){
		return this->patientID;
	}
	string getnamePatient(){
		return this->namePatient;
	}
	int getsdtPatient(){
		return this->sdtPatient;
	}
	string getgioiTinh(){
		return this->gioiTinh;
	} 
	string getbaoHiem(){
		return this->baoHiem;
	}
	void input(){
		ofstream fo;
		fo.open("C:\\ProjectDentistry\\Patient.txt");
		if(fo.is_open()){
		    Dentistry::input();
		   	cout<<"Nhap ma id cua benh nhan: "; 
			cin>>patientID;
			this->setpatientID(patientID);
		    cin.ignore(1);
		    cout <<"Ten benh nhan: ";
		    getline(cin, namePatient);
		    this->setnamePatient(namePatient);
		    cout<<"Nhap so dien thoai: ";
		    cin>>sdtPatient;
		    this->setsdtPatient(sdtPatient);
		    cin.ignore(1);
		    cout<<"Nhap gioi tinh: ";
		    getline(cin, gioiTinh);
		    this->setgioiTinh(gioiTinh);
		    cout<<"Nhap bao hiem: ";
		    getline(cin, baoHiem);
		    this->setbaoHiem(baoHiem);
		    fo<<"Nhap ma id benh nhan: "<<patientID<<"."<< endl;
		    fo<<"Nhap ten benh nhan: "<<namePatient<<"."<<endl;
		    fo<<"Nhap so dien thoai: "<<sdtPatient<<"."<<endl;
		    fo<<"Nhap gioi tinh: "<<gioiTinh<<"."<<endl;
		    fo<<"Nhap bao hiem: "<<baoHiem<<"."<<endl;
		    fo.close();
		}
		else{
			cout<<"File not found!";
		}
	}
	void output(){
		Dentistry::output();
		cout<<"-----BENH NHAN-----"<<endl;
		cout<<"Ma id benh nhan: "<< this->getpatientID()<<endl;
		cout<<"Ten benh nhan: "<< this->getnamePatient()<<endl;
		cout<<"So dien thoai: "<< this->getsdtPatient()<<endl;
		cout<<"Gioi tinh: "<< this->getgioiTinh()<<endl;
		cout<<"Bao hiem: "<< this->getbaoHiem()<<endl;
	    }
};
class Doctor : public Dentistry{
	public:
		int doctorID;
		string nameDoctor;
		int sdtDoctor;
		string trinhDo;
		string chuyenNganh;
		string thanhTuu;
	Doctor(){
		this-> doctorID = 0;
		this->nameDoctor=" ";
		this->sdtDoctor= 0;
		this->trinhDo=" ";
		this->chuyenNganh=" ";
		this->thanhTuu=" ";
		}
	Doctor(int doctorID, string nameDoctor, int sdtDoctor, string trinhDo, string chuyenNganh, string thanhTuu){
		this->doctorID = doctorID;
		this->nameDoctor = nameDoctor;
		this->sdtDoctor = sdtDoctor;
		this->trinhDo = trinhDo;
		this->chuyenNganh = chuyenNganh;
		this->thanhTuu = thanhTuu; 
	}
	void setdoctorID(int doctor){
		this->doctorID = doctorID;
	}
	void setnameDoctor(string nameDoctor){
		this->nameDoctor = nameDoctor;
	}
	void setsdtDoctor(int sdtdoctor){
		this->sdtDoctor = sdtdoctor;
	}
	void settrinhDo(string trinhDo){
		this->trinhDo = trinhDo;
	}
	void setchuyenNganh(string chuyenNganh){
		this->chuyenNganh = chuyenNganh;
	}
	void setthanhTuu(string thanhTuu){
		this->thanhTuu = thanhTuu;
	}
	int getdoctorID(){
		return this->doctorID;
	}
	string getnameDoctor(){
		return this->nameDoctor;
	}
	int getsdtDoctor(){
		return this->sdtDoctor;
	}
	string gettrinhDo(){
		return this->trinhDo;
	}
	string getchuyenNganh(){
		return this->chuyenNganh;
	}
	string getthanhTuu(){
		return this->thanhTuu;
    }
    void input(){
    	ofstream fo;
		fo.open("C:\\ProjectDentistry\\Doctor.txt");
		if(fo.is_open()){
			Dentistry::input();
			cout<<"Nhap ma id bac si: ";
			cin>> doctorID;
			this->setdoctorID(doctorID);
			cin.ignore(1);
			cout<<"Nhap ten bac si: ";
			getline(cin, nameDoctor);
			this->setnameDoctor(nameDoctor);
			cout<<"Nhap so dien thoai: ";
			cin>>sdtDoctor;
			this->setsdtDoctor(sdtDoctor);
			cin.ignore(1);
			cout<<"Nhap trinh do: ";
			getline(cin, trinhDo);
			this->settrinhDo(trinhDo);
			cout<<"Nhap chuyen nganh: ";
			getline(cin, chuyenNganh);
			this->setchuyenNganh(chuyenNganh);
			cout<<"Nhap thanh tuu: ";
			getline(cin, thanhTuu);
			this->setthanhTuu(thanhTuu);
			fo<<"Nhap ma id bac si: "<< doctorID<<"."<<endl;
			fo<<"Nhap ten bac si: "<< nameDoctor<<"."<<endl;
			fo<<"Nhap so dien thoai: "<< sdtDoctor<<"."<<endl;
			fo<<"Nhap trinh do: "<< trinhDo<<"."<<endl;
			fo<<"Nhap chuyen nganh: "<< chuyenNganh<<"."<<endl;
			fo<<"Nhap thanh tuu: "<< thanhTuu<<"."<<endl;
			fo.close();
		    }
			else{
				cout<<"File not found!";
			}
	    }
	void output(){
		Dentistry::output();
		cout<<"-----BAC SI-----"<<endl;
		cout<<"Ma id bac si: "<< this->getdoctorID()<<endl;
		cout<<"Ten bac si: "<<this->getnameDoctor()<<endl;
		cout<<"So dien thoai"<<this->getsdtDoctor()<<endl;
		cout<<"Trinh do: "<<this->gettrinhDo()<<endl;
		cout<<"Chuyen nganh: "<<this->getchuyenNganh()<<endl;
		cout<<"Thanh tuu: "<<this->getthanhTuu()<<endl;
	    }
}; 
class Medicine : public Dentistry{
	public:
	    int medicineID;
	    string nameMedicine;
	    string xuatXu;
	    string thanhPhan;
	    string hsd;
	    string hdsd;
        string tacDung;
    Medicine(){
    	this->medicineID =0;
    	this->nameMedicine= " ";
    	this->xuatXu=" ";
    	this->thanhPhan=" ";
    	this->hsd=" ";
    	this->hdsd=" ";
    	this->tacDung=" ";
	}
	Medicine(int medicineID, string nameMedicine, string xuatXu, string thanhPhan, string hsd, string hdsd, string tacDung){
		this->medicineID = medicineID;
		this->nameMedicine = nameMedicine;
		this->xuatXu = xuatXu;
		this->thanhPhan = thanhPhan;
		this->hsd = hsd;
		this->hdsd = hdsd;
		this->tacDung = tacDung;
	}	
	void setmedicineID(int medicineID){
		this->medicineID = medicineID;
	}
	void setnameMedicine(string nameMedicine){
		this->nameMedicine = nameMedicine;
	}
	void setxuatXu(string xuatXu){
		this->xuatXu = xuatXu;
	}
	void setthanhPhan(string thanhPhan){
	    this->thanhPhan = thanhPhan;
	}
	void sethsd(string hsd){
		this->hsd = hsd;
	}
	void sethdsd(string hdsd){
		this->hdsd = hdsd;
	}
	void settacDung(string tacDung){
		this->tacDung =tacDung;
	}
	int getmedicineID(){
		return this->medicineID;
	}
	string getnameMedicine(){
		return this->nameMedicine;
	}
	string getxuatXu(){
		return this->xuatXu;
	}
	string getthanhPhan(){
	    return this->thanhPhan;
	}
	string gethsd(){
		return this->hsd;
	}
	string gethdsd(){
		return this->hdsd;
	}
	string gettacDung(){
		return this->tacDung;
	}
	void input(){
		ofstream fo;
		fo.open("C:\\ProjectDentistry\\Medicine.txt");
        if(fo.is_open()){
        	Dentistry::input();
        	cout<<"Nhap ma id cua thuoc: ";
        	cin>>medicineID;
        	this->setmedicineID(medicineID);
        	cin.ignore(1);
        	cout<<"Nhap ten thuoc: ";
        	getline(cin, nameMedicine);
        	this->setnameMedicine(nameMedicine);
			cout<<"Nhap xuat xu: ";
			getline(cin, xuatXu);
			this->setxuatXu(xuatXu);
			cout<<"Nhap thanh phan: ";
			getline(cin, thanhPhan);
			this->setthanhPhan(thanhPhan);
			cout<<"Nhap han su dung: ";
			getline(cin, hsd);
			this->sethsd(hsd);
			cout<<"Nhap huong dan su dung: ";
			getline(cin, hdsd);
			this->sethdsd(hdsd);
			cout<<"Nhap tac dung: ";
			getline(cin, tacDung);
			this->sethdsd(hdsd);
			fo<<"Nhap ma id cua thuoc: "<<medicineID<<"."<<endl;
			fo<<"Nhap ten thuoc: "<<nameMedicine<<"."<<endl;
			fo<<"Nhap xuat xu: "<<xuatXu<<"."<<endl;
			fo<<"Nhap thanh phan: "<<thanhPhan<<"."<<endl;
			fo<<"Nhap han su dung: "<<hsd<<"."<<endl;
			fo<<"Nhap huong dan su dung: "<<hdsd<<"."<<endl;
			fo<<"Nhap tac dung: "<<tacDung<<"."<<endl;
			fo.close();
		}
		else{
			cout<<"File note found!";
		}
	}
	void output(){
	 	Dentistry::output();
	 	cout<<"-----THUOC-----"<<endl;
	 	cout<<"Ma id thuoc: "<<this->getmedicineID()<<endl;
	 	cout<<"Ten thuoc: "<<this->getnameMedicine()<<endl;
	 	cout<<"Xuat xu: "<<this->getxuatXu()<<endl;
	 	cout<<"Thanh phan: "<<this->getthanhPhan()<<endl;
	 	cout<<"Han su dung: "<<this->gethsd()<<endl;
	 	cout<<"Huong dan su dung: "<<this->gethdsd()<<endl;
	 	cout<<"Tac dung: "<<this->gettacDung()<<endl;
	    }
};
class File : public Dentistry{
	public: 
	    string tien;
	    string hour;
	    string date;
	    string tttt;
	    string tkdt;
	    string tklb;
	    string tt;
	File(){
		this->tien=" ";
		this->hour=" ";
		this->date=" ";
		this->tttt=" ";
		this->tkdt=" ";
		this->tklb=" ";
		this->tt=" ";
	}
	File(string tien, string hour, string date, string tttt, string tkdt, string tklb, string tt){
		this->tien = tien;
		this->hour = hour;
		this->date = date;
		this->tttt = tttt;
		this->tkdt = tkdt;
		this->tklb = tklb;
		this->tt = tt;
	}
	void settien(string tien){
	    this->tien = tien;
	}
	void sethour(string hour){
		this->hour = hour;
	}
	void setdate(string date){
		this->date = date;
	}
	void settttt(string tttt){
		this->tttt = tttt;
	}
	void settkdt(string tkdt){
		this->tkdt = tkdt;
	}
	void settklb(string tklb){
		this->tklb = tklb;
	}
	void settt(string tt){
		this->tt = tt;
	}
	string gettien(){
	    return this->tien;
	}
	string gethour(){
		return this->hour;
	}
    string getdate(){
		return this->date;
	}
	string gettttt(){
		return this->tttt;
	}
	string gettkdt(){
		return this->tkdt;
	}
	string gettklb(){
		return this->tklb;
	}
	string gettt(){
		return this->tt;
	}
	void input(){
		ofstream fo;
		fo.open("C:\\ProjectDentistry\\File.txt");
		if(fo.is_open()){
		    Dentistry::input();
		    cin.ignore();
		    cout<<"Nhap so tien: ";
		    getline(cin, tien);
		    this->settien(tien);
		    cout<<"Nhap gio: ";
		    getline(cin, hour);
		    this->sethour(hour);
		    cout<<"Nhap ngay thang nam: ";
		    getline(cin, date);
		    this->setdate(date);
		    cout<<"Nhap tinh trang thanh toan: ";
		    getline(cin, tttt);
		    this->settttt(tttt);
		    cout<<"Nhap thong ke don thuoc: ";
		    getline(cin, tkdt);
		    this->settkdt(tkdt);
		    cout<<"Nhap thong ke loai benh: ";
		    getline(cin, tklb);
		    this->settklb(tklb);
		    cout<<"Nhap tinh trang: ";
		    getline(cin, tt);
		    this->settt(tt);
		    fo<<"Nhap gio: "<<hour<<"."<<endl;
		    fo<<"Nhap ngay thang nam: "<<date<<"."<<endl;
		    fo<<"Nhap so tien: "<<tien<<"."<<endl;
		    fo<<"Nhap tinh trang thanh toan: "<<tttt<<"."<<endl;
		    fo<<"Nhap thong ke don thuoc: "<<tkdt<<"."<<endl;
		    fo<<"Nhap thong ke loai benh: "<<tklb<<"."<<endl;
		    fo<<"Nhap tinh trang: "<<tt<<"."<<endl;
		    fo.close();
		}
		else{
			cout<<"File not found!";
		}
	}
	void output(){
		Dentistry::output();
		cout<<"-----HOA DON-----"<<endl;
		cout<<"So tien: "<<this->gettien()<<endl;
		cout<<"Gio: "<<this->gethour()<<endl;
		cout<<"Ngay thang nam: "<<this->getdate()<<endl;
		cout<<"Tinh trang thanh toan: "<<this->gettttt()<<endl;
		cout<<"Thong ke don thuoc: "<<this->gettkdt()<<endl;
		cout<<"Thong ke loai benh: "<<this->gettklb()<<endl;
		cout<<"Tinh trang: "<<this->gettt()<<endl;
	}
};
class ListDentistry{
	public:
		Dentistry *ds[100];
		int k;
	void intputDentistry(){
		int a,i;
		k = 0;
		while(1){
			cout<<"-----CHUONG TRINH QUAN LY PHONG KHAM RANG-----"<<endl;
			cout<<"1. BENH NHAN"<<endl;
			cout<<"2. BAC SI"<<endl;
			cout<<"3. THUOC"<<endl;
			cout<<"4. HOA DON"<<endl;
			cout<<"5. Thoat"<<endl;
            cout<<"Vui long chon muc can dien: ";cin>>a;
			cin.get();
			if(a==5) break;
			if(a==1) ds[k]=new Patient();
			if(a==2) ds[k]=new Doctor();
			if(a==3) ds[k]=new Medicine();
			if(a==4) ds[k]=new File();
			ds[k]->input(); k++; 
		}
	}
	void outputDentistry()
	{
		for(int i=0; i<k; i++)
		{
			ds[i]->output();
		}
	}
};
int main(){
	ListDentistry T;
	T.intputDentistry();
	T.outputDentistry();
	return 0;
}
