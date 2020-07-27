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
static const char *ng0 = "C:/WORK_SPACE/UNIVERSIY/vendingMachine/writeStuff.v";
static const char *ng1 = "stuff.txt";
static const char *ng2 = "w";
static const char *ng3 = "%b\n%b\n%b\n%b\n%b\n";



static void Always_13_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t5 = (t4 + 4);
    *((int *)t5) = 0;
    t6 = (t0 + 2248);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    t6 = (t0 + 1368U);
    t8 = *((char **)t6);
    t6 = (t0 + 1528U);
    t9 = *((char **)t6);
    t6 = (t0 + 1688U);
    t10 = *((char **)t6);
    t6 = (t0 + 1848U);
    t11 = *((char **)t6);
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 1, 0, 0, ng3, 6, t0, (char)118, t7, 11, (char)118, t8, 11, (char)118, t9, 11, (char)118, t10, 11, (char)118, t11, 11);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    goto LAB2;

}


extern void work_m_00000000003755408268_0217715741_init()
{
	static char *pe[] = {(void *)Always_13_0};
	xsi_register_didat("work_m_00000000003755408268_0217715741", "isim/main_TEST_isim_beh.exe.sim/work/m_00000000003755408268_0217715741.didat");
	xsi_register_executes(pe);
}
