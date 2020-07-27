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
static const char *ng0 = "C:/WORK_SPACE/UNIVERSIY/vendingMachine/cashHandler.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {16, 0};
static const char *ng4 = "you can't charge this amount of money (maximum of the money is 15)";

static void NetReassign_102_9(char *);
static void NetReassign_41_1(char *);
static void NetReassign_42_2(char *);
static void NetReassign_55_3(char *);
static void NetReassign_66_4(char *);
static void NetReassign_67_5(char *);
static void NetReassign_83_6(char *);
static void NetReassign_84_7(char *);
static void NetReassign_92_8(char *);


static void Always_34_0(char *t0)
{
    char t6[8];
    char t31[8];
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
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 6200);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(39, ng0);
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

LAB11:    xsi_set_current_line(78, ng0);

LAB45:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2728);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 8304);
    *((int *)t3) = 1;
    NetReassign_83_6(t0);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2248);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 8308);
    *((int *)t3) = 1;
    NetReassign_84_7(t0);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2728);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 8284);
    *((int *)t3) = 1;
    NetReassign_41_1(t0);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2248);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 8288);
    *((int *)t3) = 1;
    NetReassign_42_2(t0);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB12:    goto LAB2;

LAB14:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(61, ng0);

LAB33:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 4, t5, 4);
    t7 = ((char*)((ng3)));
    memset(t31, 0, 8);
    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB35;

LAB34:    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB36;

LAB37:    t28 = (t31 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t31);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(71, ng0);

LAB44:    xsi_set_current_line(72, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB41:
LAB21:    goto LAB12;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(49, ng0);

LAB22:    xsi_set_current_line(51, ng0);
    t21 = (t0 + 2248);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 1528U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB24;

LAB23:    t32 = (t30 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t28) < *((unsigned int *)t30))
        goto LAB25;

LAB26:    t34 = (t31 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t31);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(52, ng0);

LAB31:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2248);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 8292);
    *((int *)t3) = 1;
    NetReassign_55_3(t0);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB24:    t33 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t31) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(51, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 2088);
    xsi_vlogvar_assign_value(t41, t40, 0, 0, 1);

LAB30:    goto LAB21;

LAB32:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB30;

LAB35:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t31) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(64, ng0);

LAB42:    xsi_set_current_line(65, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 2568);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2728);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 8296);
    *((int *)t3) = 1;
    NetReassign_66_4(t0);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2248);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 8300);
    *((int *)t3) = 1;
    NetReassign_67_5(t0);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB41;

LAB46:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB50;

LAB47:    if (t18 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t6) = 1;

LAB50:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB59:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB60;

LAB61:
LAB62:
LAB53:    goto LAB12;

LAB49:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(90, ng0);

LAB54:    xsi_set_current_line(91, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2568);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2248);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 8312);
    *((int *)t3) = 1;
    NetReassign_92_8(t0);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB53;

LAB58:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(97, ng0);

LAB63:    xsi_set_current_line(101, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2568);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2248);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 8316);
    *((int *)t3) = 1;
    NetReassign_102_9(t0);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB64:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB62;

}

static void NetReassign_41_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t3 = 0;
    t2 = ((char*)((ng2)));
    t4 = (t0 + 8284);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 2728);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_42_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t3 = 0;
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 8288);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 6216);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 4, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 6216);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_55_3(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t3 = 0;
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1528U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 4, t5, 4, t7, 4);
    t6 = (t0 + 8292);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t11 = (t0 + 6232);
    *((int *)t11) = 0;

LAB8:
LAB1:    return;
LAB4:    t9 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t9, t8, 0, 0, 0, 4, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t10 = (t0 + 6232);
    *((int *)t10) = 1;
    goto LAB8;

}

static void NetReassign_66_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t3 = 0;
    t2 = ((char*)((ng2)));
    t4 = (t0 + 8296);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 2728);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_67_5(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t3 = 0;
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = (t0 + 2248);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 4, t4, 4, t6, 4);
    t8 = (t0 + 8300);
    if (*((int *)t8) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t11 = (t0 + 6248);
    *((int *)t11) = 0;

LAB8:
LAB1:    return;
LAB4:    t9 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t9, t7, 0, 0, 0, 4, ((int*)(t8)));
    t3 = 1;
    goto LAB5;

LAB6:    t10 = (t0 + 6248);
    *((int *)t10) = 1;
    goto LAB8;

}

static void NetReassign_83_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t3 = 0;
    t2 = ((char*)((ng1)));
    t4 = (t0 + 8304);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 2728);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_84_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 5384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t3 = 0;
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 8308);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 6264);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 4, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 6264);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_92_8(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 5632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t3 = 0;
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1528U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 4, t5, 4, t7, 4);
    t6 = (t0 + 8312);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t11 = (t0 + 6280);
    *((int *)t11) = 0;

LAB8:
LAB1:    return;
LAB4:    t9 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t9, t8, 0, 0, 0, 4, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t10 = (t0 + 6280);
    *((int *)t10) = 1;
    goto LAB8;

}

static void NetReassign_102_9(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 5880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t3 = 0;
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1528U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 4, t5, 4, t7, 4);
    t6 = (t0 + 8316);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t11 = (t0 + 6296);
    *((int *)t11) = 0;

LAB8:
LAB1:    return;
LAB4:    t9 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t9, t8, 0, 0, 0, 4, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t10 = (t0 + 6296);
    *((int *)t10) = 1;
    goto LAB8;

}


extern void work_m_00000000001910940079_3746868994_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)NetReassign_41_1,(void *)NetReassign_42_2,(void *)NetReassign_55_3,(void *)NetReassign_66_4,(void *)NetReassign_67_5,(void *)NetReassign_83_6,(void *)NetReassign_84_7,(void *)NetReassign_92_8,(void *)NetReassign_102_9};
	xsi_register_didat("work_m_00000000001910940079_3746868994", "isim/main_TEST_isim_beh.exe.sim/work/m_00000000001910940079_3746868994.didat");
	xsi_register_executes(pe);
}
