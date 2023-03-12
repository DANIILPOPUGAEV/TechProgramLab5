#pragma once
#include <iostream>
#include <iomanip>
#include "Classes.h" 
string Maximum(Electronical electronical[5], Mechanical mechanical[5]);
void Function()
{
	Electronical* electronical;
	Mechanical* mechanical;
	electronical = new Electronical[5];
	mechanical = new Mechanical[5];

	mechanical[0].set_name("Edifice"); mechanical[0].set_country("�����");
	mechanical[1].set_name("MAST"); mechanical[1].set_country("�����");
	mechanical[2].set_name("Kolibri"); mechanical[2].set_country("�����");
	mechanical[3].set_name("��������"); mechanical[3].set_country("�����");
	mechanical[4].set_name("Noprints "); mechanical[4].set_country("�����");
	
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(2000, 12000);

	for (int i = 0; i < 5; ++i)
	{
		mechanical[i].set_prise(dist(gen));
		electronical[i].set_prise(dist(gen));
	}

	random_device sd;
	mt19937 gen1(sd());
	uniform_int_distribution<> dist1(25, 65);

	for (int i = 0; i < 5; ++i)
	{
		mechanical[i].set_diametr(dist1(gen1));
		electronical[i].set_dial(dist1(gen1));
	}

	random_device pd;
	mt19937 gen2(pd());
	uniform_int_distribution<> dist2(150, 350);
	for (int i = 0; i < 5; ++i)
	{
		mechanical[i].set_weight(dist2(gen2));
		electronical[i].set_battery(dist2(gen2));
	}

	electronical[0].set_name("G-Shock"); electronical[0].set_country("�������");
	electronical[1].set_name("WFS"); electronical[1].set_country("�����");
	electronical[2].set_name("SKMEI"); electronical[2].set_country("�����");
	electronical[3].set_name("DT N0.1"); electronical[3].set_country("���");
	electronical[4].set_name("Illuminator "); electronical[4].set_country("�����");

	string row = "----------------------------------------------------------------------------------------------------------\n";
	cout << row;
	cout << setiosflags(ios::left) << setw(45) << "|"<< setiosflags(ios::left) << setw(60) << "������������ ����" << "|"<< endl;
	cout << row;
	
	cout << setiosflags(ios::left) << setw(15) << "|  ��������" << setiosflags(ios::left) << setw(15) << "|";

	for (int i = 0; i < 5; i++)
		cout << setiosflags(ios::left)
		<< setw(15) << mechanical[i].get_name() ;
	cout << "|";
	cout << endl;
	cout << row;
	

	cout << setiosflags(ios::left) << setw(15) << "|  ������" << setiosflags(ios::left) << setw(15) << "|";

	for (int i = 0; i < 5; i++)
		cout << setiosflags(ios::left)
		<< setw(15) << mechanical[i].get_country();
	cout << "|";
	cout << endl;
	cout << row;
	
	cout << setiosflags(ios::left) << setw(15) << "|  ���� (���.)" << setiosflags(ios::left) << setw(15) << "|";

	for (int i = 0; i < 5; i++)
		cout << setiosflags(ios::left)
		<< setw(15) << mechanical[i].get_prise();
	cout << "|";
	cout << endl;
	cout << row;

	cout << setiosflags(ios::left) << setw(15) << "|  ���" << setiosflags(ios::left) << setw(15) << "|";

	for (int i = 0; i < 5; i++)
		cout << setiosflags(ios::left)
		<< setw(0) << mechanical[i].get_weight() << setiosflags(ios::left)
		<< setw(12) << "�.";
	cout << "|";
	cout << endl;
	cout << row;

	cout << setiosflags(ios::left) << setw(15) << "|  �������" << setiosflags(ios::left) << setw(15) << "|";

	for (int i = 0; i < 5; i++)
		cout << setiosflags(ios::left)
		<< setw(0) << mechanical[i].get_diametr() << setiosflags(ios::left)
		<< setw(13) << "��";
	cout << "|";
	cout << endl;
	cout << row << "\n";

	cout << row;
	cout << setiosflags(ios::left) << setw(45) << "|" << setiosflags(ios::left) << setw(60) << "����������� ����" << "|" << endl;
	cout << row;

	cout << setiosflags(ios::left) << setw(15) << "|  ��������" << setiosflags(ios::left) << setw(15) << "|";

	for (int i = 0; i < 5; i++)
		cout << setiosflags(ios::left)
		<< setw(15) << electronical[i].get_name();
	cout << "|";
	cout << endl;
	cout << row;


	cout << setiosflags(ios::left) << setw(15) << "|  ������" << setiosflags(ios::left) << setw(15) << "|";

	for (int i = 0; i < 5; i++)
		cout << setiosflags(ios::left)
		<< setw(15) << electronical[i].get_country();
	cout << "|";
	cout << endl;
	cout << row;

	cout << setiosflags(ios::left) << setw(15) << "|  ���� (���.)" << setiosflags(ios::left) << setw(15) << "|";

	for (int i = 0; i < 5; i++)
		cout << setiosflags(ios::left)
		<< setw(15) << electronical[i].get_prise();
	cout << "|";
	cout << endl;
	cout << row;

	cout << setiosflags(ios::left) << setw(15) << "|  �������" << setiosflags(ios::left) << setw(15) << "|";

	for (int i = 0; i < 5; i++)
		cout << setiosflags(ios::left)
		<< setw(0) << electronical[i].get_battery() << setiosflags(ios::left)
		<< setw(12) << "���";
	cout << "|";
	cout << endl;
	cout << row;

	cout << setiosflags(ios::left) << setw(15) << "|  ���������" << setiosflags(ios::left) << setw(15) << "|";

	for (int i = 0; i < 5; i++)
		cout << setiosflags(ios::left)
		<< setw(0) << electronical[i].get_dial() << setiosflags(ios::left)
		<< setw(13) << "��";
	cout << "|";
	cout << endl;
	cout << row << "\n";
	string max = Maximum(electronical, mechanical);
	cout << "����� ������� ���������: " << max <<"\n";
	delete[] electronical;
	delete[] mechanical;
}