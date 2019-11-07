/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

【两个整数的加减乘除计算器II】
输入
  输入一个整数a，一个运算符（+、-、*、/），另一个数字b。

输出
  计算结果。

运算说明：
  + a加b的结果
  - a减b的结果
  * a乘b的结果
  / a除b的结果（保留两位小数）
  X : 输入错误
  (X代表除+、-、*、/以外的其他字符)

示例
  输入：
	2+3
  输出：
	5
*/

#ifndef __A008__
#define __A008__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A008"

namespace foxzzz {

	class TheJudge : public LooseJudge {
	private:
		virtual void build() {
			setTitle("两个整数的加减乘除计算器II");
			setID(ID);
			loadExamples(ID);
		}

		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	double a, b;
		//	char op;
		//	scanf("%lf%c%lf", &a, &op, &b);
		//	switch (op) {
		//	case '+':
		//		printf("%d", (int)(a + b));
		//		break;
		//	case '-':
		//		printf("%d", (int)(a - b));
		//		break;
		//	case '*':
		//		printf("%d", (int)(a * b));
		//		break;
		//	case '/':
		//		printf("%.2lf", a / b);
		//		break;
		//	default:
		//		std::cout << "输入错误";
		//		break;
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
