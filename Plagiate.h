#pragma once
class Plagiate
{
public:
	char* studName;
	char* workName;
	enum typeOfWork {vkr,courseWork, report, practiseReport};
	int pageCount;
	int plagiatePercent;
	int selfCitation;
	/*��������� ������� ����������� �������� �� ������ ������������� ������ (����� 70 %)*/
	bool passed;
};

