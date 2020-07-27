/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/WORK_SPACE/UNIVERSIY/vendingMachine/saveMachineLog.v";
static const char *ng1 = "logs.txt";
static const char *ng2 = "a";
static unsigned int ng3[] = {0U, 0U};
static const char *ng4 = "buy\t status:%d, productCode:%d , itemCount:%d , price:%d ";
static unsigned int ng5[] = {1U, 0U};
static const char *ng6 = "chargeMachine\t status:%d, productCode:%d , addedCount:%d";
static unsigned int ng7[] = {2U, 0U};
static const char *ng8 = "recieveMoney\t status:%d, amount:%d\n";
static unsigned int ng9[] = {3U, 0U};
static const char *ng10 = "changePrice\t status:%d, productCode:%d , newPrice:%d";



static void Initial_17_0(char *t0)
{

LAB0:    xsi_set_current_line(17, ng0);

LAB2:
LAB1:    return;
}

static void Always_21_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t5 = (t4 + 4);
    *((int *)t5) = 0;
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t7 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2248);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_fclose(*((unsigned int *)t6));
    goto LAB2;

LAB7:    xsi_set_current_line(25, ng0);

LAB16:    xsi_set_current_line(26, ng0);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    t9 = (t0 + 1528U);
    t11 = *((char **)t9);
    t9 = (t0 + 1688U);
    t12 = *((char **)t9);
    t9 = (t0 + 1848U);
    t13 = *((char **)t9);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 1, 0, 0, ng4, 5, t0, (char)118, t10, 1, (char)118, t11, 4, (char)118, t12, 4, (char)118, t13, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(28, ng0);

LAB17:    xsi_set_current_line(29, ng0);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    t9 = (t0 + 1528U);
    t11 = *((char **)t9);
    t9 = (t0 + 1688U);
    t12 = *((char **)t9);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 1, 0, 0, ng6, 4, t0, (char)118, t10, 1, (char)118, t11, 4, (char)118, t12, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(31, ng0);

LAB18:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    t9 = (t0 + 1528U);
    t11 = *((char **)t9);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 1, 0, 0, ng8, 3, t0, (char)118, t10, 1, (char)118, t11, 4);
    goto LAB15;

LAB13:    xsi_set_current_line(34, ng0);

LAB19:    xsi_set_current_line(35, ng0);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    t9 = (t0 + 1528U);
    t11 = *((char **)t9);
    t9 = (t0 + 1688U);
    t12 = *((char **)t9);
    xsi_vlogfile_fwrite(*((unsigned int *)t8), 1, 0, 0, ng10, 4, t0, (char)118, t10, 1, (char)118, t11, 4, (char)118, t12, 4);
    goto LAB15;

}


extern void work_m_00000000002384522746_2977542592_init()
{
	static char *pe[] = {(void *)Initial_17_0,(void *)Always_21_1};
	xsi_register_didat("work_m_00000000002384522746_2977542592", "isim/main_TEST_isim_beh.exe.sim/work/m_00000000002384522746_2977542592.didat");
	xsi_register_executes(pe);
}
