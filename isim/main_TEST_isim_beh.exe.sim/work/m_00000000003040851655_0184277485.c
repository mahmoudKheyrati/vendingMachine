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
static const char *ng0 = "C:/WORK_SPACE/UNIVERSIY/vendingMachine/readStuff.v";
static const char *ng1 = "stuff.txt";
static const char *ng2 = "r";
static const char *ng3 = "%b\n%b\n%b\n%b\n%b\n";



static void Always_16_0(char *t0)
{
    char t4[8];
    char t9[8];
    char t13[8];
    char t17[8];
    char t21[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t5 = (t4 + 4);
    *((int *)t5) = 0;
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1448);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bit_copy(t4, 0, t8, 0, 11);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_bit_copy(t9, 0, t12, 0, 11);
    t14 = (t0 + 1768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_bit_copy(t13, 0, t16, 0, 11);
    t18 = (t0 + 1928);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t17, 0, t20, 0, 11);
    t22 = (t0 + 2088);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_bit_copy(t21, 0, t24, 0, 11);
    *((int *)t25) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng3, 6, t0, (char)118, t4, 11, (char)118, t9, 11, (char)118, t13, 11, (char)118, t17, 11, (char)118, t21, 11);
    t26 = (t25 + 4);
    *((int *)t26) = 0;
    t27 = (t0 + 1448);
    xsi_vlogvar_assign_value(t27, t4, 0, 0, 11);
    t28 = (t0 + 1608);
    xsi_vlogvar_assign_value(t28, t9, 0, 0, 11);
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t13, 0, 0, 11);
    t30 = (t0 + 1928);
    xsi_vlogvar_assign_value(t30, t17, 0, 0, 11);
    t31 = (t0 + 2088);
    xsi_vlogvar_assign_value(t31, t21, 0, 0, 11);
    t32 = (t0 + 2408);
    xsi_vlogvar_assign_value(t32, t25, 0, 0, 32);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    goto LAB2;

}


extern void work_m_00000000003040851655_0184277485_init()
{
	static char *pe[] = {(void *)Always_16_0};
	xsi_register_didat("work_m_00000000003040851655_0184277485", "isim/main_TEST_isim_beh.exe.sim/work/m_00000000003040851655_0184277485.didat");
	xsi_register_executes(pe);
}
