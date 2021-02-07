#include <string.h>
#include <stdio.h>
#include <math.h>
#include "test.h"
#include <haizei/linklist.h>
#include <stdlib.h>
//int func_cnt;
//Function func_arr[100];
Function func_head, *func_tail = &func_head;
struct Function_Info haizei_testinfo;

void add_function(testfunct func, const char *str) {
	//func_arr[func_cnt].func = func;
	//func_arr[func_cnt].str = strdup(str);
	//func_cnt++;
	Function *temp = (Function *)calloc(1, sizeof(Function));
	temp->func = func;
	temp->str = strdup(str);
	func_tail->p.next = &(temp->p);
	func_tail = temp;
	return;
}

int RUN_ALL_TESTS() {
	for (struct LinkNode *p = func_head.p.next; p != nullptr; p = p->next) {
		Function *func = Head(p, Function, p);
		printf(GREEN("[====RUN====] ") RED_HL("%s\n"), func->str);
		haizei_testinfo.total = 0, haizei_testinfo.success = 0;
		func->func();
		double rate = (1.0 * haizei_testinfo.success) / haizei_testinfo.total;
		rate *= 100.0 * rate;
		printf(PURPLE("[  "));
		if (fabs(rate - 100.0) < 1e-6) {
			printf(BULE_HL("%6.2lf%%"), rate);
		}else{
			printf(RED_HL("%6.2lf%%"), rate);
		}
 		printf(PURPLE("  ]") " total = %d  success = %d\n", haizei_testinfo.total, haizei_testinfo.success);
	}

	return 0;
}



