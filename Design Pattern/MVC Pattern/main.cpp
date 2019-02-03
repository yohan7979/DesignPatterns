/**	MVC Pattern **/
/**
	[ Model View Controller ]
		Model		: ���� ������ ������ ���
		View		: ���÷��̸� ���
		Controller	: ����� �Է� ó���� ���

	[ ���� �÷ο� ]
		-> ����ڰ� �信 ����
		-> ��� ��Ʈ�ѷ����� �Է������� ����
		-> ��Ʈ�ѷ��� �Է������� �ؼ��ؼ� �𵨿��� ó������� ����
		-> ���� �����͸� ���� �� �信�� noti
		-> ��� �𵨿��� ���¸� ��û �� ���÷��̸� ����

	[ MVC ���Ͽ� ���� ���������ϵ� ]
		1. Strategy Pattern		: �信�� ����� �Է��� �޾� ó���� ��Ʈ�ѷ�(���� ��ü)���� ����
		2. Composite Pattern	: ��� ���հ�ü�� �̷����
		3. Observer Pattern		: �𵨿��� ���°� �ٲ�� ��/��Ʈ�ѷ����� ����
		+ Adapter pattern		: ���ο� ���� ���� �信 �����ؼ� ����� �� ����

	

**/
#include "BPMController.h"
#include "BeatModel.h"

int main(int argc, char* argv[])
{
	BeatModel* model = new BeatModel;
	BPMController* controller = new BPMController(model);

	controller->Start();
	controller->IncreaseBPM();
	controller->IncreaseBPM();
	controller->DecreaseBPM();
	controller->Stop();

	delete controller;
	delete model;

	return 0;
}