//ͷ�ļ� 
#include <string> 
#include <iostream>
using namespace std;
//-------------------------------------------------------------------------
//������ 
int main() {
	//ģʽѡ�� 
	cout<<"��ѡ��ҵ�����ͣ�"<<endl<<"1.����SSH��������"<<"  "<<"2.����SSH����������"<<"  "<<"3.���ɹر�SSH����";
	int mode,network,stok;
	cout<<endl<<"������:";
	cin>>mode;
	if(mode=1)
	{	//���� 
		cout<<endl<<"��ã�����SSH������Ը�������ޣ��������Ը�������޲�ͬ������������1��Enter��������رմ���"
	;	cout<<endl<<"����С��·������SSH����֮���û����Ի��rootȨ��, root֮���û��ĸ��ֲ������п��ܻᵼ��·����ϵͳ���ȶ�����Ӳ�����ϡ������û�����ѡ�����������ܶ����ܲ����ĺ��,С�׹�˾������е��κη�������(������������·���������ݵ�ʧ����Ӳ����)��ͬʱ,�û������˹��ܼ�������������С�׹�˾�ṩ�ı��޷���,�����ڿ���������֮ǰ���ؿ���!"	
	;
		mode = 0;
		cout<<endl;	
		cin>>mode;
		if(mode=1)
		{//������� 
			cout<<endl<<"���������Σ�";
			cin>>network;
			cout<<endl<<"������STOK��"; 
			cin>>stok;
			cout<<endl<<"�����ǣ�"<<"http:// "<<network<<"/cgi-bin/luci/;stok="<<stok<<"/api/misystem/set_config_iotdev?bssid=Xiaomi&user_id=longdike&ssid=-h%3B%20nvram%20set%20ssh_en%3D1%3B%20nvram%20commit%3B%20sed%20-i%20's%2Fchannel%3D.*%2Fchannel%3D%5C%22debug%5C%22%2Fg'%20%2Fetc%2Finit.d%2Fdropbear%3B%20%2Fetc%2Finit.d%2Fdropbear%20start%3B";
		}
	} 
	if(mode=2)
	{//���� 
		cout<<endl<<"���������Σ�";
		cin>>network;
		cout<<endl<<"������STOK��";
		cin>>stok;
		int d1,d2;//������֤ 
		cout<<endl<<"����������"; 
		cin>>d1;
		cout<<"���ٴ���������";
		cin>>d2;
		while(d1=!d2&&d1==0)
		{
			if(d1!=d2)
			{
				cout<<"�������벻һ�������������� ";
			}
			else
			cout<<" ���벻��Ϊ��";
			d1 = 0;
			d2 = 0;
			cout<<endl<<"����������" ;
			cin>>d1;
			cout<<"���ٴ���������";
			cin>>d2;
		}
		cout<<endl<<"�����ǣ�"<<"http:// "<<network<<"/cgi-bin/luci/;stok="<<stok<<"/api/misystem/set_config_iotdev?bssid=Xiaomi&user_id=longdike&ssid=-h%3B%20echo%20-e%20'"<<d1<<"%5Cn"<<d2<<"'%20%7C%20passwd%20root%3B";
	}
		if(mode=3)
	{
	//����
		cout<<endl<<"���������Σ�";
		cin>>network;
		cout<<endl<<"������STOK��";
		cin>>stok;
		cout<<endl<<"�����ǣ�"<<"http:// "<<network<<"/cgi-bin/luci/;stok="<<stok<<"/api/misystem/set_config_iotdev?bssid=Xiaomi&user_id=longdike&ssid=-h%3B%20nvram%20set%20ssh_en%3D0%3B%20nvram%20commit%3B%20sed%20-i%20's%2Fchannel%3D.*%2Fchannel%3D%5C%22debug%5C%22%2Fg'%20%2Fetc%2Finit.d%2Fdropbear%3B%20%2Fetc%2Finit.d%2Fdropbear%20start%3B"
		;
	}
	
	return 0;
}

