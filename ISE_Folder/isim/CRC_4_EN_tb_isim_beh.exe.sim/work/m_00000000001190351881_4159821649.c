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
static const char *ng0 = "C:/Hoan/hoc tap/TKHTVMTH/CRC_4/CRC_4_EN.v";
static int ng1[] = {12, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {11, 0};
static int ng6[] = {10, 0};
static int ng7[] = {9, 0};
static int ng8[] = {8, 0};
static int ng9[] = {7, 0};
static int ng10[] = {6, 0};
static int ng11[] = {5, 0};
static int ng12[] = {4, 0};
static int ng13[] = {3, 0};
static unsigned int ng14[] = {1U, 0U};
static int ng15[] = {2, 0};



static void NetDecl_29_0(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 5496);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 7U);
    t16 = (t0 + 5368);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Initial_35_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2976);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3136);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 12);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2816);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_41_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t39[8];
    char t63[8];
    char t69[8];
    char t101[8];
    char t114[8];
    char t115[8];
    char t116[8];
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
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    unsigned int t123;
    char *t124;
    unsigned int t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    int t131;
    int t132;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5384);
    *((int *)t2) = 1;
    t3 = (t0 + 4584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1776U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
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

LAB11:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t6) = 1;

LAB43:    memset(t30, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t22) != 0)
        goto LAB46;

LAB47:    t29 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (!(t32));
    t34 = *((unsigned int *)t29);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB48;

LAB49:    memcpy(t69, t30, 8);

LAB50:    t95 = (t69 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t69);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(65, ng0);

LAB85:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t6, 1, t4, t8, 2, t28, 4, 2);

LAB86:    t29 = ((char*)((ng2)));
    t46 = xsi_vlog_unsigned_case_compare(t6, 1, t29, 1);
    if (t46 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng14)));
    t46 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 1);
    if (t46 == 1)
        goto LAB89;

LAB90:
LAB91:
LAB64:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2976);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB16:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(47, ng0);

LAB21:    xsi_set_current_line(48, ng0);
    t28 = (t0 + 2096U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t28 = (t30 + 4);
    t31 = (t29 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 7);
    t34 = (t33 & 1);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 7);
    t37 = (t36 & 1);
    *((unsigned int *)t28) = t37;
    t38 = (t0 + 3136);
    t40 = (t0 + 3136);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t39, t42, 2, t43, 32, 1);
    t44 = (t39 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    if (t46 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 6);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 6);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3136);
    t7 = (t0 + 3136);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t46 = (!(t15));
    if (t46 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 5);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 5);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3136);
    t7 = (t0 + 3136);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t46 = (!(t15));
    if (t46 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 4);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3136);
    t7 = (t0 + 3136);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t46 = (!(t15));
    if (t46 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3136);
    t7 = (t0 + 3136);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t46 = (!(t15));
    if (t46 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 2);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3136);
    t7 = (t0 + 3136);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t46 = (!(t15));
    if (t46 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3136);
    t7 = (t0 + 3136);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t46 = (!(t15));
    if (t46 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3136);
    t7 = (t0 + 3136);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t30, t21, 2, t22, 32, 1);
    t28 = (t30 + 4);
    t15 = *((unsigned int *)t28);
    t46 = (!(t15));
    if (t46 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3136);
    t4 = (t0 + 3136);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng13)));
    t21 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t6, t30, t39, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t46 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t47 = (!(t10));
    t48 = (t46 && t47);
    t29 = (t39 + 4);
    t11 = *((unsigned int *)t29);
    t49 = (!(t11));
    t50 = (t48 && t49);
    if (t50 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB20;

LAB22:    xsi_vlogvar_assign_value(t38, t30, 0, *((unsigned int *)t39), 1);
    goto LAB23;

LAB24:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB25;

LAB26:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB31;

LAB32:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB33;

LAB34:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB35;

LAB36:    xsi_vlogvar_assign_value(t5, t6, 0, *((unsigned int *)t30), 1);
    goto LAB37;

LAB38:    t12 = *((unsigned int *)t39);
    t51 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t52 = (t13 - t14);
    t53 = (t52 + 1);
    xsi_vlogvar_assign_value(t3, t2, t51, *((unsigned int *)t30), t53);
    goto LAB39;

LAB42:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t30) = 1;
    goto LAB47;

LAB46:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB47;

LAB48:    t31 = (t0 + 1456U);
    t38 = *((char **)t31);
    t31 = ((char*)((ng3)));
    memset(t39, 0, 8);
    t40 = (t38 + 4);
    t41 = (t31 + 4);
    t36 = *((unsigned int *)t38);
    t37 = *((unsigned int *)t31);
    t45 = (t36 ^ t37);
    t54 = *((unsigned int *)t40);
    t55 = *((unsigned int *)t41);
    t56 = (t54 ^ t55);
    t57 = (t45 | t56);
    t58 = *((unsigned int *)t40);
    t59 = *((unsigned int *)t41);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB54;

LAB51:    if (t60 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t39) = 1;

LAB54:    memset(t63, 0, 8);
    t43 = (t39 + 4);
    t64 = *((unsigned int *)t43);
    t65 = (~(t64));
    t66 = *((unsigned int *)t39);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t43) != 0)
        goto LAB57;

LAB58:    t70 = *((unsigned int *)t30);
    t71 = *((unsigned int *)t63);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = (t30 + 4);
    t74 = (t63 + 4);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t73);
    t77 = *((unsigned int *)t74);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 != 0);
    if (t80 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t42 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t63) = 1;
    goto LAB58;

LAB57:    t44 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB58;

LAB59:    t81 = *((unsigned int *)t69);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t69) = (t81 | t82);
    t83 = (t30 + 4);
    t84 = (t63 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (~(t85));
    t87 = *((unsigned int *)t30);
    t46 = (t87 & t86);
    t88 = *((unsigned int *)t84);
    t89 = (~(t88));
    t90 = *((unsigned int *)t63);
    t47 = (t90 & t89);
    t91 = (~(t46));
    t92 = (~(t47));
    t93 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t93 & t91);
    t94 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t94 & t92);
    goto LAB61;

LAB62:    xsi_set_current_line(60, ng0);

LAB65:    xsi_set_current_line(61, ng0);
    t102 = (t0 + 3136);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t101, 0, 8);
    t105 = (t101 + 4);
    t106 = (t104 + 4);
    t107 = *((unsigned int *)t104);
    t108 = (t107 >> 0);
    *((unsigned int *)t101) = t108;
    t109 = *((unsigned int *)t106);
    t110 = (t109 >> 0);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t111 & 15U);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t112 & 15U);
    t113 = (t0 + 3136);
    t117 = (t0 + 3136);
    t118 = (t117 + 72U);
    t119 = *((char **)t118);
    t120 = ((char*)((ng13)));
    t121 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t114, t115, t116, ((int*)(t119)), 2, t120, 32, 1, t121, 32, 1);
    t122 = (t114 + 4);
    t123 = *((unsigned int *)t122);
    t48 = (!(t123));
    t124 = (t115 + 4);
    t125 = *((unsigned int *)t124);
    t49 = (!(t125));
    t50 = (t48 && t49);
    t126 = (t116 + 4);
    t127 = *((unsigned int *)t126);
    t51 = (!(t127));
    t52 = (t50 && t51);
    if (t52 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t39, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB71;

LAB68:    if (t18 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t39) = 1;

LAB71:    memset(t30, 0, 8);
    t22 = (t39 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t39);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t22) != 0)
        goto LAB74;

LAB75:    t29 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB76;

LAB77:    t35 = *((unsigned int *)t30);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t45 = (t36 || t37);
    if (t45 > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t29) > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t30) > 0)
        goto LAB82;

LAB83:    memcpy(t6, t38, 8);

LAB84:    t40 = (t0 + 2816);
    xsi_vlogvar_assign_value(t40, t6, 0, 0, 1);
    goto LAB64;

LAB66:    t128 = *((unsigned int *)t116);
    t53 = (t128 + 0);
    t129 = *((unsigned int *)t114);
    t130 = *((unsigned int *)t115);
    t131 = (t129 - t130);
    t132 = (t131 + 1);
    xsi_vlogvar_assign_value(t113, t101, t53, *((unsigned int *)t115), t132);
    goto LAB67;

LAB70:    t21 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t30) = 1;
    goto LAB75;

LAB74:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB75;

LAB76:    t31 = ((char*)((ng14)));
    goto LAB77;

LAB78:    t38 = ((char*)((ng2)));
    goto LAB79;

LAB80:    xsi_vlog_unsigned_bit_combine(t6, 1, t31, 1, t38, 1);
    goto LAB84;

LAB82:    memcpy(t6, t31, 8);
    goto LAB84;

LAB87:    xsi_set_current_line(67, ng0);
    t31 = (t0 + 2976);
    t38 = (t31 + 56U);
    t40 = *((char **)t38);
    t41 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t40, 4, t41, 32);
    t42 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t42, t30, 0, 0, 4, 0LL);
    goto LAB91;

LAB89:    xsi_set_current_line(69, ng0);

LAB92:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 3136);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3136);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 2976);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_index_select_value(t30, 1, t5, t21, 2, t29, 4, 2);
    t31 = ((char*)((ng14)));
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t31);
    t11 = (t9 ^ t10);
    *((unsigned int *)t39) = t11;
    t38 = (t30 + 4);
    t40 = (t31 + 4);
    t41 = (t39 + 4);
    t12 = *((unsigned int *)t38);
    t13 = *((unsigned int *)t40);
    t14 = (t12 | t13);
    *((unsigned int *)t41) = t14;
    t15 = *((unsigned int *)t41);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB93;

LAB94:
LAB95:    t42 = (t0 + 3136);
    t43 = (t0 + 3136);
    t44 = (t43 + 72U);
    t73 = *((char **)t44);
    t74 = (t0 + 2976);
    t75 = (t74 + 56U);
    t83 = *((char **)t75);
    xsi_vlog_generic_convert_bit_index(t63, t73, 2, t83, 4, 2);
    t84 = (t63 + 4);
    t19 = *((unsigned int *)t84);
    t47 = (!(t19));
    if (t47 == 1)
        goto LAB96;

LAB97:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng4)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t28, 4, t29, 32);
    xsi_vlog_generic_get_index_select_value(t30, 1, t4, t8, 2, t39, 32, 2);
    t31 = ((char*)((ng2)));
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t31);
    t11 = (t9 ^ t10);
    *((unsigned int *)t63) = t11;
    t38 = (t30 + 4);
    t40 = (t31 + 4);
    t41 = (t63 + 4);
    t12 = *((unsigned int *)t38);
    t13 = *((unsigned int *)t40);
    t14 = (t12 | t13);
    *((unsigned int *)t41) = t14;
    t15 = *((unsigned int *)t41);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB98;

LAB99:
LAB100:    t42 = (t0 + 3136);
    t43 = (t0 + 3136);
    t44 = (t43 + 72U);
    t73 = *((char **)t44);
    t74 = (t0 + 2976);
    t75 = (t74 + 56U);
    t83 = *((char **)t75);
    t84 = ((char*)((ng4)));
    memset(t101, 0, 8);
    xsi_vlog_unsigned_minus(t101, 32, t83, 4, t84, 32);
    xsi_vlog_generic_convert_bit_index(t69, t73, 2, t101, 32, 2);
    t95 = (t69 + 4);
    t19 = *((unsigned int *)t95);
    t46 = (!(t19));
    if (t46 == 1)
        goto LAB101;

LAB102:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng15)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t28, 4, t29, 32);
    xsi_vlog_generic_get_index_select_value(t30, 1, t4, t8, 2, t39, 32, 2);
    t31 = ((char*)((ng2)));
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t31);
    t11 = (t9 ^ t10);
    *((unsigned int *)t63) = t11;
    t38 = (t30 + 4);
    t40 = (t31 + 4);
    t41 = (t63 + 4);
    t12 = *((unsigned int *)t38);
    t13 = *((unsigned int *)t40);
    t14 = (t12 | t13);
    *((unsigned int *)t41) = t14;
    t15 = *((unsigned int *)t41);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB103;

LAB104:
LAB105:    t42 = (t0 + 3136);
    t43 = (t0 + 3136);
    t44 = (t43 + 72U);
    t73 = *((char **)t44);
    t74 = (t0 + 2976);
    t75 = (t74 + 56U);
    t83 = *((char **)t75);
    t84 = ((char*)((ng15)));
    memset(t101, 0, 8);
    xsi_vlog_unsigned_minus(t101, 32, t83, 4, t84, 32);
    xsi_vlog_generic_convert_bit_index(t69, t73, 2, t101, 32, 2);
    t95 = (t69 + 4);
    t19 = *((unsigned int *)t95);
    t46 = (!(t19));
    if (t46 == 1)
        goto LAB106;

LAB107:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng13)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t28, 4, t29, 32);
    xsi_vlog_generic_get_index_select_value(t30, 1, t4, t8, 2, t39, 32, 2);
    t31 = ((char*)((ng14)));
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t31);
    t11 = (t9 ^ t10);
    *((unsigned int *)t63) = t11;
    t38 = (t30 + 4);
    t40 = (t31 + 4);
    t41 = (t63 + 4);
    t12 = *((unsigned int *)t38);
    t13 = *((unsigned int *)t40);
    t14 = (t12 | t13);
    *((unsigned int *)t41) = t14;
    t15 = *((unsigned int *)t41);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB108;

LAB109:
LAB110:    t42 = (t0 + 3136);
    t43 = (t0 + 3136);
    t44 = (t43 + 72U);
    t73 = *((char **)t44);
    t74 = (t0 + 2976);
    t75 = (t74 + 56U);
    t83 = *((char **)t75);
    t84 = ((char*)((ng13)));
    memset(t101, 0, 8);
    xsi_vlog_unsigned_minus(t101, 32, t83, 4, t84, 32);
    xsi_vlog_generic_convert_bit_index(t69, t73, 2, t101, 32, 2);
    t95 = (t69 + 4);
    t19 = *((unsigned int *)t95);
    t46 = (!(t19));
    if (t46 == 1)
        goto LAB111;

LAB112:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng12)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_minus(t39, 32, t28, 4, t29, 32);
    xsi_vlog_generic_get_index_select_value(t30, 1, t4, t8, 2, t39, 32, 2);
    t31 = ((char*)((ng14)));
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t31);
    t11 = (t9 ^ t10);
    *((unsigned int *)t63) = t11;
    t38 = (t30 + 4);
    t40 = (t31 + 4);
    t41 = (t63 + 4);
    t12 = *((unsigned int *)t38);
    t13 = *((unsigned int *)t40);
    t14 = (t12 | t13);
    *((unsigned int *)t41) = t14;
    t15 = *((unsigned int *)t41);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB113;

LAB114:
LAB115:    t42 = (t0 + 3136);
    t43 = (t0 + 3136);
    t44 = (t43 + 72U);
    t73 = *((char **)t44);
    t74 = (t0 + 2976);
    t75 = (t74 + 56U);
    t83 = *((char **)t75);
    t84 = ((char*)((ng12)));
    memset(t101, 0, 8);
    xsi_vlog_unsigned_minus(t101, 32, t83, 4, t84, 32);
    xsi_vlog_generic_convert_bit_index(t69, t73, 2, t101, 32, 2);
    t95 = (t69 + 4);
    t19 = *((unsigned int *)t95);
    t46 = (!(t19));
    if (t46 == 1)
        goto LAB116;

LAB117:    goto LAB91;

LAB93:    t17 = *((unsigned int *)t39);
    t18 = *((unsigned int *)t41);
    *((unsigned int *)t39) = (t17 | t18);
    goto LAB95;

LAB96:    xsi_vlogvar_wait_assign_value(t42, t39, 0, *((unsigned int *)t63), 1, 0LL);
    goto LAB97;

LAB98:    t17 = *((unsigned int *)t63);
    t18 = *((unsigned int *)t41);
    *((unsigned int *)t63) = (t17 | t18);
    goto LAB100;

LAB101:    xsi_vlogvar_wait_assign_value(t42, t63, 0, *((unsigned int *)t69), 1, 0LL);
    goto LAB102;

LAB103:    t17 = *((unsigned int *)t63);
    t18 = *((unsigned int *)t41);
    *((unsigned int *)t63) = (t17 | t18);
    goto LAB105;

LAB106:    xsi_vlogvar_wait_assign_value(t42, t63, 0, *((unsigned int *)t69), 1, 0LL);
    goto LAB107;

LAB108:    t17 = *((unsigned int *)t63);
    t18 = *((unsigned int *)t41);
    *((unsigned int *)t63) = (t17 | t18);
    goto LAB110;

LAB111:    xsi_vlogvar_wait_assign_value(t42, t63, 0, *((unsigned int *)t69), 1, 0LL);
    goto LAB112;

LAB113:    t17 = *((unsigned int *)t63);
    t18 = *((unsigned int *)t41);
    *((unsigned int *)t63) = (t17 | t18);
    goto LAB115;

LAB116:    xsi_vlogvar_wait_assign_value(t42, t63, 0, *((unsigned int *)t69), 1, 0LL);
    goto LAB117;

}

static void Cont_79_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 5400);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_80_4(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3136);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 15U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = (t0 + 5624);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 15U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 3);
    t27 = (t0 + 5416);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000001190351881_4159821649_init()
{
	static char *pe[] = {(void *)NetDecl_29_0,(void *)Initial_35_1,(void *)Always_41_2,(void *)Cont_79_3,(void *)Cont_80_4};
	xsi_register_didat("work_m_00000000001190351881_4159821649", "isim/CRC_4_EN_tb_isim_beh.exe.sim/work/m_00000000001190351881_4159821649.didat");
	xsi_register_executes(pe);
}
