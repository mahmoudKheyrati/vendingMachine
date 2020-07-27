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
static const char *ng0 = "C:/WORK_SPACE/UNIVERSIY/vendingMachine/getMoney.v";
static int ng1[] = {0, 0};
static const char *ng2 = "savedMachineMoney.txt";
static const char *ng3 = "r";
static const char *ng4 = "%b";
static const char *ng5 = "customerMoney.txt";



static void Always_14_0(char *t0)
{
    char t6[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(20, ng0);

LAB14:    xsi_set_current_line(22, ng0);
    *((int *)t6) = xsi_vlogfile_file_open_of_cname_ctype(ng5, ng3);
    t2 = (t6 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bit_copy(t6, 0, t8, 0, 4);
    *((int *)t28) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng4, 2, t0, (char)118, t6, 4);
    t21 = (t28 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 1608);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 4);
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB12:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15, ng0);

LAB13:    xsi_set_current_line(17, ng0);
    *((int *)t28) = xsi_vlogfile_file_open_of_cname_ctype(ng2, ng3);
    t29 = (t28 + 4);
    *((int *)t29) = 0;
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t28, 0, 0, 32);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bit_copy(t6, 0, t8, 0, 4);
    *((int *)t28) = xsi_vlogfile_fscanf(*((unsigned int *)t4), ng4, 2, t0, (char)118, t6, 4);
    t21 = (t28 + 4);
    *((int *)t21) = 0;
    t22 = (t0 + 1608);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 4);
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);
    goto LAB12;

}


extern void work_m_00000000003257676557_4039791999_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000003257676557_4039791999", "isim/main_TEST_isim_beh.exe.sim/work/m_00000000003257676557_4039791999.didat");
	xsi_register_executes(pe);
}
