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
static const char *ng0 = "C:/Users/Aakash/Dropbox/project007/DES/DESS/Sbox_output.v";



static void Cont_41_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    t2 = (t0 + 1848U);
    t6 = *((char **)t2);
    t2 = (t0 + 1688U);
    t7 = *((char **)t2);
    t2 = (t0 + 1528U);
    t8 = *((char **)t2);
    t2 = (t0 + 1368U);
    t9 = *((char **)t2);
    t2 = (t0 + 1208U);
    t10 = *((char **)t2);
    t2 = (t0 + 1048U);
    t11 = *((char **)t2);
    xsi_vlogtype_concat(t3, 32, 32, 8U, t11, 4, t10, 4, t9, 4, t8, 4, t7, 4, t6, 4, t5, 4, t4, 4);
    t2 = (t0 + 3888);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t16 = (t0 + 3808);
    *((int *)t16) = 1;

LAB1:    return;
}


extern void work_m_00000000003383744877_1143801129_init()
{
	static char *pe[] = {(void *)Cont_41_0};
	xsi_register_didat("work_m_00000000003383744877_1143801129", "isim/Des_Top_isim_beh.exe.sim/work/m_00000000003383744877_1143801129.didat");
	xsi_register_executes(pe);
}
