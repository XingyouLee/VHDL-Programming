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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/MiniCPU/registers.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_3620187407;



static void work_a_1350853198_0427524003_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4512);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = (t0 + 7984U);
    t6 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t5, t1);
    t7 = (t0 + 3088U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t6;
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7952U);
    t6 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t2, t1);
    t5 = (t0 + 2848U);
    t7 = *((char **)t5);
    t5 = (t7 + 0);
    *((int *)t5) = t6;
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 7968U);
    t6 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t2, t1);
    t5 = (t0 + 2968U);
    t7 = *((char **)t5);
    t5 = (t7 + 0);
    *((int *)t5) = t6;
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = *((unsigned char *)t2);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB11;

LAB12:    t4 = (unsigned char)0;

LAB13:    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 9213);
    t5 = (t0 + 2608U);
    t7 = *((char **)t5);
    t6 = (0 - 31);
    t17 = (t6 * -1);
    t18 = (32U * t17);
    t19 = (0 + t18);
    t5 = (t7 + t19);
    memcpy(t5, t1, 32U);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t9 = (t4 == (unsigned char)3);
    if (t9 == 1)
        goto LAB17;

LAB18:    t3 = (unsigned char)0;

LAB19:    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t1 = (t0 + 2848U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t16 = (t6 - 31);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t6);
    t18 = (32U * t17);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t7 = (t0 + 4592);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t20 = *((char **)t15);
    memcpy(t20, t1, 32U);
    xsi_driver_first_trans_fast_port(t7);

LAB15:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t9 = (t4 == (unsigned char)3);
    if (t9 == 1)
        goto LAB23;

LAB24:    t3 = (unsigned char)0;

LAB25:    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2608U);
    t2 = *((char **)t1);
    t1 = (t0 + 2968U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    t16 = (t6 - 31);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t6);
    t18 = (32U * t17);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t7 = (t0 + 4656);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t20 = *((char **)t15);
    memcpy(t20, t1, 32U);
    xsi_driver_first_trans_fast_port(t7);

LAB21:    goto LAB3;

LAB5:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 2152U);
    t8 = *((char **)t5);
    t5 = (t0 + 2608U);
    t14 = *((char **)t5);
    t5 = (t0 + 3088U);
    t15 = *((char **)t5);
    t6 = *((int *)t15);
    t16 = (t6 - 31);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t6);
    t18 = (32U * t17);
    t19 = (0 + t18);
    t5 = (t14 + t19);
    memcpy(t5, t8, 32U);
    goto LAB6;

LAB8:    t5 = (t0 + 2312U);
    t7 = *((char **)t5);
    t12 = *((unsigned char *)t7);
    t13 = (t12 == (unsigned char)3);
    t3 = t13;
    goto LAB10;

LAB11:    t1 = (t0 + 992U);
    t11 = xsi_signal_has_event(t1);
    t4 = t11;
    goto LAB13;

LAB14:    xsi_set_current_line(53, ng0);
    t14 = (t0 + 2152U);
    t15 = *((char **)t14);
    t14 = (t0 + 4592);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB15;

LAB17:    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = (t0 + 7984U);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 7952U);
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t1, t8, t7);
    t3 = t10;
    goto LAB19;

LAB20:    xsi_set_current_line(59, ng0);
    t14 = (t0 + 2152U);
    t15 = *((char **)t14);
    t14 = (t0 + 4656);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 32U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB21;

LAB23:    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = (t0 + 7984U);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t7 = (t0 + 7968U);
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t1, t8, t7);
    t3 = t10;
    goto LAB25;

}


extern void work_a_1350853198_0427524003_init()
{
	static char *pe[] = {(void *)work_a_1350853198_0427524003_p_0};
	xsi_register_didat("work_a_1350853198_0427524003", "isim/scpu_tb_isim_beh.exe.sim/work/a_1350853198_0427524003.didat");
	xsi_register_executes(pe);
}
