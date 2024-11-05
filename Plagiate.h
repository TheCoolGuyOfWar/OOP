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
	/*константа границы прохождения проверки по объему оригинального текста (более 70 %)*/
	bool passed;
};

