#pragma once

/* Ŀ�ǵ� ��ü�� �������̽� ���� */
class Command
{
public:
	Command();
	virtual ~Command();

	virtual void Execute() = 0;
	virtual void Undo() = 0;
};

