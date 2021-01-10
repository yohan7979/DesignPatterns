#pragma once

/* 커맨드 객체의 인터페이스 제공 */
class Command
{
public:
	Command();
	virtual ~Command();

	virtual void Execute() = 0;
	virtual void Undo() = 0;
};

