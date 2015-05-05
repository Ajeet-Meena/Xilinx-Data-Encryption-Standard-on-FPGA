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

/* This file is designed for use with ISim build 0x7dea747 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Aakash/Dropbox/project007/DES/DESS/Permutation.v";
static int ng1[] = {1, 0};
static int ng2[] = {2, 0};
static int ng3[] = {3, 0};
static int ng4[] = {4, 0};
static int ng5[] = {5, 0};
static int ng6[] = {6, 0};
static int ng7[] = {7, 0};
static int ng8[] = {8, 0};
static int ng9[] = {9, 0};
static int ng10[] = {10, 0};
static int ng11[] = {11, 0};
static int ng12[] = {12, 0};
static int ng13[] = {13, 0};
static int ng14[] = {14, 0};
static int ng15[] = {15, 0};
static int ng16[] = {16, 0};
static int ng17[] = {17, 0};
static int ng18[] = {18, 0};
static int ng19[] = {19, 0};
static int ng20[] = {20, 0};
static int ng21[] = {21, 0};
static int ng22[] = {22, 0};
static int ng23[] = {23, 0};
static int ng24[] = {24, 0};
static int ng25[] = {25, 0};
static int ng26[] = {26, 0};
static int ng27[] = {27, 0};
static int ng28[] = {28, 0};
static int ng29[] = {29, 0};
static int ng30[] = {30, 0};
static int ng31[] = {31, 0};
static int ng32[] = {32, 0};



static void Always_26_0(char *t0)
{
    char t6[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    int t22;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 15);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1448);
    t16 = (t0 + 1448);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 19);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 19);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 20);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 20);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 28);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 28);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 27);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 27);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 16);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 16);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 14);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 14);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 22);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 22);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 25);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 25);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng12)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 17);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 17);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng14)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 30);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 30);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 9);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 9);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng18)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 23);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 23);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 13);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 13);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng20)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng21)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 26);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng22)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng23)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 8);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng24)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 18);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 18);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng25)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 12);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 12);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng26)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 29);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 29);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng27)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng28)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 21);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 21);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng29)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 10);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 10);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng30)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng31)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 24);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 24);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1448);
    t7 = (t0 + 1448);
    t14 = (t7 + 72U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng32)));
    xsi_vlog_generic_convert_bit_index(t15, t16, 2, t17, 32, 1);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB68;

LAB69:    goto LAB2;

LAB6:    xsi_vlogvar_wait_assign_value(t14, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB7;

LAB8:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB9;

LAB10:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB11;

LAB12:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB13;

LAB14:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB17;

LAB18:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB19;

LAB20:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB21;

LAB22:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB23;

LAB24:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB25;

LAB26:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB29;

LAB30:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB31;

LAB32:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB33;

LAB34:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB35;

LAB36:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB37;

LAB38:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB45;

LAB46:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB47;

LAB48:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB49;

LAB50:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB51;

LAB52:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB53;

LAB54:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB55;

LAB56:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB57;

LAB58:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB59;

LAB60:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB61;

LAB62:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB63;

LAB64:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB65;

LAB66:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB67;

LAB68:    xsi_vlogvar_wait_assign_value(t5, t6, 0, *((unsigned int *)t15), 1, 0LL);
    goto LAB69;

}


extern void work_m_00000000000718338037_2557467032_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000000718338037_2557467032", "isim/Des_Top_isim_beh.exe.sim/work/m_00000000000718338037_2557467032.didat");
	xsi_register_executes(pe);
}
