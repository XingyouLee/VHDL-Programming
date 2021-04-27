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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/lab4/acc.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767632659_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0527561317_3212880686_p_0(char *t0)
{
    char t14[16];
    char t18[16];
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    int t15;
    unsigned int t16;
    unsigned char t17;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t5 = t1;
    memset(t5, (unsigned char)2, 32U);
    t6 = (t0 + 3656);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(53, ng0);
    t1 = xsi_get_transient_memory(64U);
    memset(t1, 0, 64U);
    t2 = t1;
    memset(t2, (unsigned char)2, 64U);
    t5 = (t0 + 3720);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 64U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(56, ng0);
    t10 = (t0 + 1672U);
    t19 = *((char **)t10);
    t10 = (t0 + 5700U);
    t21 = (t0 + 1032U);
    t22 = *((char **)t21);
    t21 = (t0 + 5668U);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t23 = (t0 + 5716U);
    t25 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t20, t22, t21, t24, t23);
    t26 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t18, t19, t10, t25, t20);
    t27 = (t18 + 12U);
    t16 = *((unsigned int *)t27);
    t28 = (1U * t16);
    t29 = (64U != t28);
    if (t29 == 1)
        goto LAB13;

LAB14:    t30 = (t0 + 3720);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t26, 64U);
    xsi_driver_first_trans_fast(t30);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5716U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t14 + 12U);
    t16 = *((unsigned int *)t6);
    t28 = (1U * t16);
    t3 = (32U != t28);
    if (t3 == 1)
        goto LAB15;

LAB16:    t7 = (t0 + 3656);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t19 = *((char **)t10);
    memcpy(t19, t5, 32U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB7:    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t5 = (t0 + 5716U);
    t7 = (t0 + 5870);
    t9 = (t14 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 31;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t15 = (31 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t16;
    t17 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t6, t5, t7, t14);
    t3 = t17;
    goto LAB9;

LAB10:    t1 = (t0 + 1312U);
    t13 = xsi_signal_has_event(t1);
    t4 = t13;
    goto LAB12;

LAB13:    xsi_size_not_matching(64U, t28, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(32U, t28, 0);
    goto LAB16;

}

static void work_a_0527561317_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 64U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3576);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0527561317_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0527561317_3212880686_p_0,(void *)work_a_0527561317_3212880686_p_1};
	xsi_register_didat("work_a_0527561317_3212880686", "isim/acctest_isim_beh.exe.sim/work/a_0527561317_3212880686.didat");
	xsi_register_executes(pe);
}
