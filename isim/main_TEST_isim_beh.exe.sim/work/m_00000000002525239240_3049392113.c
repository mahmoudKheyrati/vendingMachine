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
static const char *ng0 = "C:/WORK_SPACE/UNIVERSIY/vendingMachine/buyProductModule.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static int ng8[] = {5, 0};
static const char *ng9 = "you can't buy this product even 1 item";
static const char *ng10 = "you can't buy this procut at this count you can at most buy ";
static const char *ng11 = "";
static const char *ng12 = "of this product";
static const char *ng13 = "your purchase canceled! ";
static const char *ng14 = "thanks for buying , give your product! ";
static const char *ng15 = "good luck ";
static const char *ng16 = "you can't buy this product! product code in the range of (0-4)";
static const char *ng17 = "please select correct product code.";



static void Always_39_0(char *t0)
{
    char t7[8];
    char t23[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;

LAB0:    t1 = (t0 + 6848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 8904);
    *((int *)t2) = 1;
    t3 = (t0 + 6880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 6656);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6656);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 4328);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 4, t4, 4, t8, 4);
    t15 = (t0 + 4648);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB21;

LAB20:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t4) < *((unsigned int *)t2))
        goto LAB22;

LAB23:    t16 = (t7 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(108, ng0);

LAB53:    xsi_set_current_line(109, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    xsi_set_current_line(110, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB27:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 6656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB9:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 15U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    t15 = (t0 + 4328);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 4);
    goto LAB19;

LAB11:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 15U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    t15 = (t0 + 4328);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 4);
    goto LAB19;

LAB13:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 15U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    t15 = (t0 + 4328);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 4);
    goto LAB19;

LAB15:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 15U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    t15 = (t0 + 4328);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 4);
    goto LAB19;

LAB17:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t7 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t13 & 15U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    t15 = (t0 + 4328);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 4);
    goto LAB19;

LAB21:    t15 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(62, ng0);

LAB28:    xsi_set_current_line(63, ng0);
    t17 = (t0 + 4648);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 4168);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t24 = (t19 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB30;

LAB29:    t25 = (t22 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB30;

LAB33:    if (*((unsigned int *)t19) > *((unsigned int *)t22))
        goto LAB31;

LAB32:    t27 = (t23 + 4);
    t14 = *((unsigned int *)t27);
    t28 = (~(t14));
    t29 = *((unsigned int *)t23);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(83, ng0);

LAB48:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 6656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB30:    t26 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB32;

LAB31:    *((unsigned int *)t23) = 1;
    goto LAB32;

LAB34:    xsi_set_current_line(63, ng0);

LAB37:    xsi_set_current_line(66, ng0);
    t32 = (t0 + 4168);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t0 + 4328);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_mod(t38, 5, t34, 4, t37, 4);
    t39 = (t0 + 4488);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 5);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4328);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t0 + 4168);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    memset(t7, 0, 8);
    t17 = (t5 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB39;

LAB38:    t18 = (t16 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t5) > *((unsigned int *)t16))
        goto LAB40;

LAB41:    t20 = (t7 + 4);
    t9 = *((unsigned int *)t20);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(71, ng0);

LAB47:    xsi_set_current_line(72, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)118, t5, 5);
    xsi_set_current_line(74, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB45:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB36:    goto LAB27;

LAB39:    t19 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB43:    xsi_set_current_line(67, ng0);

LAB46:    xsi_set_current_line(68, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB45;

LAB49:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 6656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 6656);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(97, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);
    xsi_set_current_line(100, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 4008);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB36;

LAB54:    xsi_set_current_line(119, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 5288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 8984);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 9048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 9112);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig4_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 9176);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);

LAB1:    return;
}

static void implSig5_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 9240);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 1);

LAB1:    return;
}

static void implSig6_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 9304);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 3);

LAB1:    return;
}

static void implSig7_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 9368);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 1);

LAB1:    return;
}


extern void work_m_00000000002525239240_3049392113_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute,(void *)implSig7_execute};
	xsi_register_didat("work_m_00000000002525239240_3049392113", "isim/main_TEST_isim_beh.exe.sim/work/m_00000000002525239240_3049392113.didat");
	xsi_register_executes(pe);
}
