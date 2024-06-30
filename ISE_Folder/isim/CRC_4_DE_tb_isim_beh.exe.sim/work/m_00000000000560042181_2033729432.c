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
static const char *ng0 = "C:/Hoan/hoc tap/TKHTVMTH/CRC_4/CRC_4_DE.v";
static int ng1[] = {12, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {2, 0};
static int ng8[] = {4, 0};



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
    t8 = 4095U;
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
    xsi_driver_vfirst_trans(t2, 0, 11U);
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
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3136);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 12);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2816);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_41_2(char *t0)
{
    char t6[8];
    char t30[8];
    char t37[8];
    char t53[8];
    char t61[8];
    char t95[8];
    char t108[8];
    char t109[8];
    char t110[8];
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    int t118;
    char *t119;
    unsigned int t120;
    int t121;
    int t122;
    char *t123;
    unsigned int t124;
    int t125;
    int t126;
    unsigned int t127;
    int t128;
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
    t4 = ((char*)((ng3)));
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

LAB19:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
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
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    memset(t30, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t22) != 0)
        goto LAB28;

LAB29:    t29 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB30;

LAB31:    memcpy(t61, t30, 8);

LAB32:    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(57, ng0);

LAB67:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t6, 1, t4, t8, 2, t28, 5, 2);

LAB68:    t29 = ((char*)((ng2)));
    t80 = xsi_vlog_unsigned_case_compare(t6, 1, t29, 1);
    if (t80 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng6)));
    t80 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 1);
    if (t80 == 1)
        goto LAB71;

LAB72:
LAB73:
LAB46:
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
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
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
    t28 = (t0 + 3136);
    xsi_vlogvar_assign_value(t28, t29, 0, 0, 12);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 5, t5, 32);
    t7 = (t0 + 2976);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB20;

LAB24:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t30) = 1;
    goto LAB29;

LAB28:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB29;

LAB30:    t35 = (t0 + 1456U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB36;

LAB33:    if (t49 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t37) = 1;

LAB36:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t54) != 0)
        goto LAB39;

LAB40:    t62 = *((unsigned int *)t30);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t30 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB35:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t53) = 1;
    goto LAB40;

LAB39:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB40;

LAB41:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t30 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t30);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    goto LAB43;

LAB44:    xsi_set_current_line(52, ng0);

LAB47:    xsi_set_current_line(53, ng0);
    t96 = (t0 + 3136);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    memset(t95, 0, 8);
    t99 = (t95 + 4);
    t100 = (t98 + 4);
    t101 = *((unsigned int *)t98);
    t102 = (t101 >> 0);
    *((unsigned int *)t95) = t102;
    t103 = *((unsigned int *)t100);
    t104 = (t103 >> 0);
    *((unsigned int *)t99) = t104;
    t105 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t105 & 15U);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t106 & 15U);
    t107 = (t0 + 3136);
    t111 = (t0 + 3136);
    t112 = (t111 + 72U);
    t113 = *((char **)t112);
    t114 = ((char*)((ng4)));
    t115 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t108, t109, t110, ((int*)(t113)), 2, t114, 32, 1, t115, 32, 1);
    t116 = (t108 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (!(t117));
    t119 = (t109 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (!(t120));
    t122 = (t118 && t121);
    t123 = (t110 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (!(t124));
    t126 = (t122 && t125);
    if (t126 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t37, 0, 8);
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
        goto LAB53;

LAB50:    if (t18 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t37) = 1;

LAB53:    memset(t30, 0, 8);
    t22 = (t37 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t37);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t22) != 0)
        goto LAB56;

LAB57:    t29 = (t30 + 4);
    t31 = *((unsigned int *)t30);
    t32 = *((unsigned int *)t29);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB58;

LAB59:    t34 = *((unsigned int *)t30);
    t40 = (~(t34));
    t41 = *((unsigned int *)t29);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t29) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t30) > 0)
        goto LAB64;

LAB65:    memcpy(t6, t36, 8);

LAB66:    t38 = (t0 + 2816);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 1);
    goto LAB46;

LAB48:    t127 = *((unsigned int *)t110);
    t128 = (t127 + 0);
    t129 = *((unsigned int *)t108);
    t130 = *((unsigned int *)t109);
    t131 = (t129 - t130);
    t132 = (t131 + 1);
    xsi_vlogvar_assign_value(t107, t95, t128, *((unsigned int *)t109), t132);
    goto LAB49;

LAB52:    t21 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t30) = 1;
    goto LAB57;

LAB56:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB57;

LAB58:    t35 = ((char*)((ng6)));
    goto LAB59;

LAB60:    t36 = ((char*)((ng2)));
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t6, 1, t35, 1, t36, 1);
    goto LAB66;

LAB64:    memcpy(t6, t35, 8);
    goto LAB66;

LAB69:    xsi_set_current_line(59, ng0);
    t35 = (t0 + 2976);
    t36 = (t35 + 56U);
    t38 = *((char **)t36);
    t39 = ((char*)((ng3)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t38, 5, t39, 32);
    t52 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t52, t30, 0, 0, 5, 0LL);
    goto LAB73;

LAB71:    xsi_set_current_line(61, ng0);

LAB74:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 3136);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3136);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 2976);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_index_select_value(t30, 1, t5, t21, 2, t29, 5, 2);
    t35 = ((char*)((ng6)));
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t35);
    t11 = (t9 ^ t10);
    *((unsigned int *)t37) = t11;
    t36 = (t30 + 4);
    t38 = (t35 + 4);
    t39 = (t37 + 4);
    t12 = *((unsigned int *)t36);
    t13 = *((unsigned int *)t38);
    t14 = (t12 | t13);
    *((unsigned int *)t39) = t14;
    t15 = *((unsigned int *)t39);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB75;

LAB76:
LAB77:    t52 = (t0 + 3136);
    t54 = (t0 + 3136);
    t60 = (t54 + 72U);
    t65 = *((char **)t60);
    t66 = (t0 + 2976);
    t67 = (t66 + 56U);
    t75 = *((char **)t67);
    xsi_vlog_generic_convert_bit_index(t53, t65, 2, t75, 5, 2);
    t76 = (t53 + 4);
    t19 = *((unsigned int *)t76);
    t84 = (!(t19));
    if (t84 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng3)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t28, 5, t29, 32);
    xsi_vlog_generic_get_index_select_value(t30, 1, t4, t8, 2, t37, 32, 2);
    t35 = ((char*)((ng2)));
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t35);
    t11 = (t9 ^ t10);
    *((unsigned int *)t53) = t11;
    t36 = (t30 + 4);
    t38 = (t35 + 4);
    t39 = (t53 + 4);
    t12 = *((unsigned int *)t36);
    t13 = *((unsigned int *)t38);
    t14 = (t12 | t13);
    *((unsigned int *)t39) = t14;
    t15 = *((unsigned int *)t39);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB80;

LAB81:
LAB82:    t52 = (t0 + 3136);
    t54 = (t0 + 3136);
    t60 = (t54 + 72U);
    t65 = *((char **)t60);
    t66 = (t0 + 2976);
    t67 = (t66 + 56U);
    t75 = *((char **)t67);
    t76 = ((char*)((ng3)));
    memset(t95, 0, 8);
    xsi_vlog_unsigned_minus(t95, 32, t75, 5, t76, 32);
    xsi_vlog_generic_convert_bit_index(t61, t65, 2, t95, 32, 2);
    t89 = (t61 + 4);
    t19 = *((unsigned int *)t89);
    t80 = (!(t19));
    if (t80 == 1)
        goto LAB83;

LAB84:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng7)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t28, 5, t29, 32);
    xsi_vlog_generic_get_index_select_value(t30, 1, t4, t8, 2, t37, 32, 2);
    t35 = ((char*)((ng2)));
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t35);
    t11 = (t9 ^ t10);
    *((unsigned int *)t53) = t11;
    t36 = (t30 + 4);
    t38 = (t35 + 4);
    t39 = (t53 + 4);
    t12 = *((unsigned int *)t36);
    t13 = *((unsigned int *)t38);
    t14 = (t12 | t13);
    *((unsigned int *)t39) = t14;
    t15 = *((unsigned int *)t39);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB85;

LAB86:
LAB87:    t52 = (t0 + 3136);
    t54 = (t0 + 3136);
    t60 = (t54 + 72U);
    t65 = *((char **)t60);
    t66 = (t0 + 2976);
    t67 = (t66 + 56U);
    t75 = *((char **)t67);
    t76 = ((char*)((ng7)));
    memset(t95, 0, 8);
    xsi_vlog_unsigned_minus(t95, 32, t75, 5, t76, 32);
    xsi_vlog_generic_convert_bit_index(t61, t65, 2, t95, 32, 2);
    t89 = (t61 + 4);
    t19 = *((unsigned int *)t89);
    t80 = (!(t19));
    if (t80 == 1)
        goto LAB88;

LAB89:    xsi_set_current_line(65, ng0);
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
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t28, 5, t29, 32);
    xsi_vlog_generic_get_index_select_value(t30, 1, t4, t8, 2, t37, 32, 2);
    t35 = ((char*)((ng6)));
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t35);
    t11 = (t9 ^ t10);
    *((unsigned int *)t53) = t11;
    t36 = (t30 + 4);
    t38 = (t35 + 4);
    t39 = (t53 + 4);
    t12 = *((unsigned int *)t36);
    t13 = *((unsigned int *)t38);
    t14 = (t12 | t13);
    *((unsigned int *)t39) = t14;
    t15 = *((unsigned int *)t39);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB90;

LAB91:
LAB92:    t52 = (t0 + 3136);
    t54 = (t0 + 3136);
    t60 = (t54 + 72U);
    t65 = *((char **)t60);
    t66 = (t0 + 2976);
    t67 = (t66 + 56U);
    t75 = *((char **)t67);
    t76 = ((char*)((ng4)));
    memset(t95, 0, 8);
    xsi_vlog_unsigned_minus(t95, 32, t75, 5, t76, 32);
    xsi_vlog_generic_convert_bit_index(t61, t65, 2, t95, 32, 2);
    t89 = (t61 + 4);
    t19 = *((unsigned int *)t89);
    t80 = (!(t19));
    if (t80 == 1)
        goto LAB93;

LAB94:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3136);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2976);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng8)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t28, 5, t29, 32);
    xsi_vlog_generic_get_index_select_value(t30, 1, t4, t8, 2, t37, 32, 2);
    t35 = ((char*)((ng6)));
    t9 = *((unsigned int *)t30);
    t10 = *((unsigned int *)t35);
    t11 = (t9 ^ t10);
    *((unsigned int *)t53) = t11;
    t36 = (t30 + 4);
    t38 = (t35 + 4);
    t39 = (t53 + 4);
    t12 = *((unsigned int *)t36);
    t13 = *((unsigned int *)t38);
    t14 = (t12 | t13);
    *((unsigned int *)t39) = t14;
    t15 = *((unsigned int *)t39);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB95;

LAB96:
LAB97:    t52 = (t0 + 3136);
    t54 = (t0 + 3136);
    t60 = (t54 + 72U);
    t65 = *((char **)t60);
    t66 = (t0 + 2976);
    t67 = (t66 + 56U);
    t75 = *((char **)t67);
    t76 = ((char*)((ng8)));
    memset(t95, 0, 8);
    xsi_vlog_unsigned_minus(t95, 32, t75, 5, t76, 32);
    xsi_vlog_generic_convert_bit_index(t61, t65, 2, t95, 32, 2);
    t89 = (t61 + 4);
    t19 = *((unsigned int *)t89);
    t80 = (!(t19));
    if (t80 == 1)
        goto LAB98;

LAB99:    goto LAB73;

LAB75:    t17 = *((unsigned int *)t37);
    t18 = *((unsigned int *)t39);
    *((unsigned int *)t37) = (t17 | t18);
    goto LAB77;

LAB78:    xsi_vlogvar_wait_assign_value(t52, t37, 0, *((unsigned int *)t53), 1, 0LL);
    goto LAB79;

LAB80:    t17 = *((unsigned int *)t53);
    t18 = *((unsigned int *)t39);
    *((unsigned int *)t53) = (t17 | t18);
    goto LAB82;

LAB83:    xsi_vlogvar_wait_assign_value(t52, t53, 0, *((unsigned int *)t61), 1, 0LL);
    goto LAB84;

LAB85:    t17 = *((unsigned int *)t53);
    t18 = *((unsigned int *)t39);
    *((unsigned int *)t53) = (t17 | t18);
    goto LAB87;

LAB88:    xsi_vlogvar_wait_assign_value(t52, t53, 0, *((unsigned int *)t61), 1, 0LL);
    goto LAB89;

LAB90:    t17 = *((unsigned int *)t53);
    t18 = *((unsigned int *)t39);
    *((unsigned int *)t53) = (t17 | t18);
    goto LAB92;

LAB93:    xsi_vlogvar_wait_assign_value(t52, t53, 0, *((unsigned int *)t61), 1, 0LL);
    goto LAB94;

LAB95:    t17 = *((unsigned int *)t53);
    t18 = *((unsigned int *)t39);
    *((unsigned int *)t53) = (t17 | t18);
    goto LAB97;

LAB98:    xsi_vlogvar_wait_assign_value(t52, t53, 0, *((unsigned int *)t61), 1, 0LL);
    goto LAB99;

}

static void Cont_71_3(char *t0)
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

LAB2:    xsi_set_current_line(71, ng0);
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

static void Cont_72_4(char *t0)
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

LAB2:    xsi_set_current_line(72, ng0);
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


extern void work_m_00000000000560042181_2033729432_init()
{
	static char *pe[] = {(void *)NetDecl_29_0,(void *)Initial_35_1,(void *)Always_41_2,(void *)Cont_71_3,(void *)Cont_72_4};
	xsi_register_didat("work_m_00000000000560042181_2033729432", "isim/CRC_4_DE_tb_isim_beh.exe.sim/work/m_00000000000560042181_2033729432.didat");
	xsi_register_executes(pe);
}
