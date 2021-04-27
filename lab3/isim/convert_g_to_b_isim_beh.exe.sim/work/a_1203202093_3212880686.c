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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/lab3/convert_g_to_b.vhd";



static void work_a_1203202093_3212880686_p_0(char *t0)
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
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(46, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = xsi_vhdl_bitvec_srl(t1, t3, 4U, 2);
    t4 = xsi_vhdl_bitvec_xor(t4, t2, 4U, t1, 4U);
    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t5 = xsi_vhdl_bitvec_srl(t5, t6, 4U, 1);
    t7 = xsi_vhdl_bitvec_xor(t7, t4, 4U, t5, 4U);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t8 = xsi_vhdl_bitvec_srl(t8, t9, 4U, 3);
    t10 = xsi_vhdl_bitvec_xor(t10, t7, 4U, t8, 4U);
    t11 = (4U != 4U);
    if (t11 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 2912);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 4U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 2832);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB6;

}


extern void work_a_1203202093_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1203202093_3212880686_p_0};
	xsi_register_didat("work_a_1203202093_3212880686", "isim/convert_g_to_b_isim_beh.exe.sim/work/a_1203202093_3212880686.didat");
	xsi_register_executes(pe);
}
