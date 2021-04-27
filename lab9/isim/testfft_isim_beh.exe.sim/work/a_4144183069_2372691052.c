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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/lab9/test.vhd";



static void work_a_4144183069_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2600);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2600);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4144183069_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int64 t11;

LAB0:    t1 = (t0 + 3040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2848);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 1.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 0U, 2U, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 2.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 2U, 2U, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 3.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 4U, 2U, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 4.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 6U, 2U, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 5.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 8U, 2U, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 6.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 10U, 2U, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 7.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 12U, 2U, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 8.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 14U, 2U, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 8.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 16U, 2U, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 7.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 18U, 2U, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 6.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 20U, 2U, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 5.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 22U, 2U, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 4.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 24U, 2U, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 3.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 26U, 2U, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 2.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 28U, 2U, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    *((double *)t4) = 1.0000000000000000;
    t5 = (t2 + 8U);
    *((double *)t5) = 0.00000000000000000;
    t6 = (t0 + 3488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_delta(t6, 30U, 2U, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t11 = (t3 * 10);
    t2 = (t0 + 2848);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(113, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}


extern void work_a_4144183069_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4144183069_2372691052_p_0,(void *)work_a_4144183069_2372691052_p_1};
	xsi_register_didat("work_a_4144183069_2372691052", "isim/testfft_isim_beh.exe.sim/work/a_4144183069_2372691052.didat");
	xsi_register_executes(pe);
}
