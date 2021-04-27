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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/lab9/test22.vhd";



static void work_a_0683414706_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0683414706_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2128U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(100, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 1.0000000000000000;
    t6 = (t2 + 8U);
    *((double *)t6) = 0.00000000000000000;
    t7 = (t0 + 3808);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_delta(t7, 0U, 2U, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 2.0000000000000000;
    t6 = (t2 + 8U);
    *((double *)t6) = 0.00000000000000000;
    t7 = (t0 + 3808);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_delta(t7, 2U, 2U, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 3.0000000000000000;
    t6 = (t2 + 8U);
    *((double *)t6) = 0.00000000000000000;
    t7 = (t0 + 3808);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_delta(t7, 32U, 2U, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 4.0000000000000000;
    t6 = (t2 + 8U);
    *((double *)t6) = 0.00000000000000000;
    t7 = (t0 + 3808);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_delta(t7, 34U, 2U, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = xsi_get_transient_memory(224U);
    memset(t2, 0, 224U);
    t4 = t2;
    t6 = t4;
    *((double *)t6) = 0.00000000000000000;
    t7 = (t4 + 8U);
    *((double *)t7) = 0.00000000000000000;
    t12 = (16U != 0);
    if (t12 == 1)
        goto LAB12;

LAB13:    t8 = (t0 + 3808);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    memcpy(t14, t2, 224U);
    xsi_driver_first_trans_delta(t8, 4U, 28U, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = xsi_get_transient_memory(224U);
    memset(t2, 0, 224U);
    t4 = t2;
    t6 = t4;
    *((double *)t6) = 0.00000000000000000;
    t7 = (t4 + 8U);
    *((double *)t7) = 0.00000000000000000;
    t12 = (16U != 0);
    if (t12 == 1)
        goto LAB14;

LAB15:    t8 = (t0 + 3808);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    memcpy(t14, t2, 224U);
    xsi_driver_first_trans_delta(t8, 36U, 28U, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = xsi_get_transient_memory(3584U);
    memset(t2, 0, 3584U);
    t4 = t2;
    t15 = (15 - 2);
    t13 = (t15 * 1);
    t13 = (t13 + 1);
    t16 = (t13 * 16U);
    t6 = t4;
    t7 = t6;
    *((double *)t7) = 0.00000000000000000;
    t8 = (t6 + 8U);
    *((double *)t8) = 0.00000000000000000;
    t12 = (16U != 0);
    if (t12 == 1)
        goto LAB16;

LAB17:    t18 = (t16 != 0);
    if (t18 == 1)
        goto LAB18;

LAB19:    t9 = (t0 + 3808);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t14 = (t11 + 56U);
    t20 = *((char **)t14);
    memcpy(t20, t2, 3584U);
    xsi_driver_first_trans_delta(t9, 64U, 448U, 0LL);
    xsi_set_current_line(141, ng0);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t13 = (224U / 16U);
    xsi_mem_set_data(t4, t4, 16U, t13);
    goto LAB13;

LAB14:    t13 = (224U / 16U);
    xsi_mem_set_data(t4, t4, 16U, t13);
    goto LAB15;

LAB16:    t17 = (t16 / 16U);
    xsi_mem_set_data(t6, t6, 16U, t17);
    goto LAB17;

LAB18:    t19 = (3584U / t16);
    xsi_mem_set_data(t4, t4, t16, t19);
    goto LAB19;

LAB20:    goto LAB2;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

}


extern void work_a_0683414706_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0683414706_2372691052_p_0,(void *)work_a_0683414706_2372691052_p_1};
	xsi_register_didat("work_a_0683414706_2372691052", "isim/testfft2d_isim_beh.exe.sim/work/a_0683414706_2372691052.didat");
	xsi_register_executes(pe);
}
