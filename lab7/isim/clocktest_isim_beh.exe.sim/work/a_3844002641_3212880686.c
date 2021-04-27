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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/clock/clock.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_3844002641_3212880686_p_0(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t8 = (t4 == (unsigned char)3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t1 = (t0 + 4672);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t0 + 4736);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t1 = (t0 + 4800);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4864);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = t3;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 4592);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 7561);
    t6 = (t0 + 2928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 4U);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 7565);
    t5 = (t0 + 3048U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 6U);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 7571);
    t5 = (t0 + 3168U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 6U);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    goto LAB3;

LAB5:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1512U);
    t6 = *((char **)t1);
    t1 = (t0 + 2928U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    memcpy(t1, t6, 4U);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t2, 6U);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3168U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t2, 6U);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3288U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = t3;
    goto LAB3;

LAB7:    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)2);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3168U);
    t5 = *((char **)t2);
    t2 = (t0 + 7500U);
    t6 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t5, t2, (unsigned char)3);
    t7 = (t0 + 3168U);
    t12 = *((char **)t7);
    t7 = (t12 + 0);
    t13 = (t11 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    memcpy(t7, t6, t15);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t1 = (t0 + 7500U);
    t5 = (t0 + 7577);
    t7 = (t11 + 0U);
    t12 = (t7 + 0U);
    *((int *)t12) = 0;
    t12 = (t7 + 4U);
    *((int *)t12) = 5;
    t12 = (t7 + 8U);
    *((int *)t12) = 1;
    t16 = (5 - 0);
    t14 = (t16 * 1);
    t14 = (t14 + 1);
    t12 = (t7 + 12U);
    *((unsigned int *)t12) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t0 + 7484U);
    t5 = (t0 + 7589);
    t7 = (t11 + 0U);
    t12 = (t7 + 0U);
    *((int *)t12) = 0;
    t12 = (t7 + 4U);
    *((int *)t12) = 5;
    t12 = (t7 + 8U);
    *((int *)t12) = 1;
    t16 = (5 - 0);
    t14 = (t16 * 1);
    t14 = (t14 + 1);
    t12 = (t7 + 12U);
    *((unsigned int *)t12) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t1 = (t0 + 7468U);
    t5 = (t0 + 7601);
    t7 = (t11 + 0U);
    t12 = (t7 + 0U);
    *((int *)t12) = 0;
    t12 = (t7 + 4U);
    *((int *)t12) = 3;
    t12 = (t7 + 8U);
    *((int *)t12) = 1;
    t16 = (3 - 0);
    t14 = (t16 * 1);
    t14 = (t14 + 1);
    t12 = (t7 + 12U);
    *((unsigned int *)t12) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB3;

LAB12:    xsi_set_current_line(96, ng0);
    t12 = (t0 + 7583);
    t17 = (t0 + 3168U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    memcpy(t17, t12, 6U);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    t1 = (t0 + 7484U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t0 + 3048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t12 = (t11 + 12U);
    t14 = *((unsigned int *)t12);
    t15 = (1U * t14);
    memcpy(t6, t5, t15);
    goto LAB13;

LAB15:    xsi_set_current_line(103, ng0);
    t12 = (t0 + 7595);
    t17 = (t0 + 3048U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    memcpy(t17, t12, 6U);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    t1 = (t0 + 7468U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t0 + 2928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t12 = (t11 + 12U);
    t14 = *((unsigned int *)t12);
    t15 = (1U * t14);
    memcpy(t6, t5, t15);
    goto LAB16;

LAB18:    xsi_set_current_line(109, ng0);
    t12 = (t0 + 7605);
    t17 = (t0 + 2928U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    memcpy(t17, t12, 4U);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 3288U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((unsigned char *)t1) = t4;
    goto LAB19;

}


extern void work_a_3844002641_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3844002641_3212880686_p_0};
	xsi_register_didat("work_a_3844002641_3212880686", "isim/clocktest_isim_beh.exe.sim/work/a_3844002641_3212880686.didat");
	xsi_register_executes(pe);
}
