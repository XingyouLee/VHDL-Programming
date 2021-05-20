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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/test1/test1.vhd";



static void work_a_3733755454_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    static char *nl0[] = {&&LAB16, &&LAB16, &&LAB14, &&LAB15, &&LAB16, &&LAB16, &&LAB16, &&LAB16, &&LAB16};
    static char *nl1[] = {&&LAB20, &&LAB20, &&LAB18, &&LAB19, &&LAB20, &&LAB20, &&LAB20, &&LAB20, &&LAB20};
    static char *nl2[] = {&&LAB24, &&LAB24, &&LAB22, &&LAB23, &&LAB24, &&LAB24, &&LAB24, &&LAB24, &&LAB24};
    static char *nl3[] = {&&LAB28, &&LAB28, &&LAB26, &&LAB27, &&LAB28, &&LAB28, &&LAB28, &&LAB28, &&LAB28};

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5815);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 5817);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB9:    t8 = (t0 + 5819);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB10:    t11 = (t0 + 5821);
    t13 = xsi_mem_cmp(t11, t2, 2U);
    if (t13 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(93, ng0);

LAB2:    t1 = (t0 + 3560);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(53, ng0);
    t14 = (t0 + 3656);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t19 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t19);
    goto **((char **)t1);

LAB4:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t19 = *((unsigned char *)t2);
    t1 = (char *)((nl1) + t19);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 3656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t19 = *((unsigned char *)t2);
    t1 = (char *)((nl2) + t19);
    goto **((char **)t1);

LAB6:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 3656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t19 = *((unsigned char *)t2);
    t1 = (char *)((nl3) + t19);
    goto **((char **)t1);

LAB12:;
LAB13:    goto LAB2;

LAB14:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 5823);
    t6 = (t0 + 3720);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB13;

LAB15:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 5825);
    t3 = (t0 + 3720);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t3);
    goto LAB13;

LAB16:    xsi_set_current_line(60, ng0);
    goto LAB13;

LAB17:    goto LAB2;

LAB18:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 5827);
    t6 = (t0 + 3720);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB17;

LAB19:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 5829);
    t3 = (t0 + 3720);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t3);
    goto LAB17;

LAB20:    xsi_set_current_line(70, ng0);
    goto LAB17;

LAB21:    goto LAB2;

LAB22:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 5831);
    t6 = (t0 + 3720);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB21;

LAB23:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 5833);
    t3 = (t0 + 3720);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t3);
    goto LAB21;

LAB24:    xsi_set_current_line(80, ng0);
    goto LAB21;

LAB25:    goto LAB2;

LAB26:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 5835);
    t6 = (t0 + 3720);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast(t6);
    goto LAB25;

LAB27:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5837);
    t3 = (t0 + 3720);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t3);
    goto LAB25;

LAB28:    xsi_set_current_line(90, ng0);
    goto LAB25;

}

static void work_a_3733755454_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 992U);
    t4 = xsi_signal_has_event(t2);
    if (t4 == 1)
        goto LAB10;

LAB11:    t1 = (unsigned char)0;

LAB12:    if (t1 != 0)
        goto LAB8;

LAB9:
LAB3:    t2 = (t0 + 3576);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(109, ng0);
    t7 = (t0 + 5839);
    t9 = (t0 + 3784);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 2U);
    xsi_driver_first_trans_fast(t9);
    goto LAB3;

LAB5:    t2 = (t0 + 1152U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(111, ng0);
    t3 = (t0 + 1832U);
    t8 = *((char **)t3);
    t3 = (t0 + 3784);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 2U);
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

LAB10:    t3 = (t0 + 1032U);
    t7 = *((char **)t3);
    t5 = *((unsigned char *)t7);
    t6 = (t5 == (unsigned char)3);
    t1 = t6;
    goto LAB12;

}


extern void work_a_3733755454_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3733755454_3212880686_p_0,(void *)work_a_3733755454_3212880686_p_1};
	xsi_register_didat("work_a_3733755454_3212880686", "isim/atest_isim_beh.exe.sim/work/a_3733755454_3212880686.didat");
	xsi_register_executes(pe);
}
