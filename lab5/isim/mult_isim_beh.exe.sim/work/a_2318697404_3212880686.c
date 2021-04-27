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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/mult/mult/mult.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2318697404_3212880686_p_0(char *t0)
{
    char t18[16];
    char t19[16];
    char t21[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    int t9;
    int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 1648U);
    t4 = *((char **)t3);
    t5 = (63 - 63);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    memcpy(t3, t1, 32U);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 1648U);
    t3 = *((char **)t1);
    t5 = (63 - 31);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    memcpy(t1, t2, 32U);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1888U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 5275);
    *((int *)t1) = 0;
    t2 = (t0 + 5279);
    *((int *)t2) = 31;
    t8 = 0;
    t9 = 31;

LAB2:    if (t8 <= t9)
        goto LAB3;

LAB5:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    t1 = (t0 + 3272);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 64U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3192);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1648U);
    t4 = *((char **)t3);
    t10 = (0 - 63);
    t5 = (t10 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t11 = *((unsigned char *)t3);
    t12 = (t0 + 1768U);
    t13 = *((char **)t12);
    t14 = (1 - 1);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t12 = (t13 + t17);
    *((unsigned char *)t12) = t11;
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1888U);
    t2 = *((char **)t1);
    t11 = *((unsigned char *)t2);
    t1 = (t0 + 1768U);
    t3 = *((char **)t1);
    t10 = (0 - 1);
    t5 = (t10 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    *((unsigned char *)t1) = t11;
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1768U);
    t2 = *((char **)t1);
    t1 = (t0 + 5120U);
    t3 = (t0 + 5283);
    t12 = (t18 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t10 = (1 - 0);
    t5 = (t10 * 1);
    t5 = (t5 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t5;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t18);
    if (t11 != 0)
        goto LAB6;

LAB8:    t1 = (t0 + 1768U);
    t2 = *((char **)t1);
    t1 = (t0 + 5120U);
    t3 = (t0 + 5285);
    t12 = (t18 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t10 = (1 - 0);
    t5 = (t10 * 1);
    t5 = (t5 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t5;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t18);
    if (t11 != 0)
        goto LAB9;

LAB10:    xsi_set_current_line(67, ng0);

LAB7:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    t10 = (0 - 63);
    t5 = (t10 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t11 = *((unsigned char *)t1);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    *((unsigned char *)t3) = t11;
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1648U);
    t2 = *((char **)t1);
    t1 = (t0 + 5104U);
    t3 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t19, t2, t1, (unsigned char)0);
    t4 = (t19 + 12U);
    t5 = *((unsigned int *)t4);
    t5 = (t5 * 1U);
    t12 = xsi_vhdl_bitvec_sra(t12, t3, t5, 1);
    t13 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t18, t12, t19);
    t20 = (t0 + 1648U);
    t22 = *((char **)t20);
    t20 = (t22 + 0);
    t23 = (t18 + 12U);
    t6 = *((unsigned int *)t23);
    t6 = (t6 * 1U);
    memcpy(t20, t13, t6);

LAB4:    t1 = (t0 + 5275);
    t8 = *((int *)t1);
    t2 = (t0 + 5279);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB5;

LAB11:    t10 = (t8 + 1);
    t8 = t10;
    t3 = (t0 + 5275);
    *((int *)t3) = t8;
    goto LAB2;

LAB6:    xsi_set_current_line(63, ng0);
    t13 = (t0 + 1648U);
    t20 = *((char **)t13);
    t5 = (63 - 63);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t13 = (t20 + t7);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 63;
    t23 = (t22 + 4U);
    *((int *)t23) = 32;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t14 = (32 - 63);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t15;
    t23 = (t0 + 1032U);
    t24 = *((char **)t23);
    t23 = (t0 + 5056U);
    t25 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t19, t13, t21, t24, t23);
    t26 = (t0 + 1648U);
    t27 = *((char **)t26);
    t15 = (63 - 63);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t26 = (t27 + t17);
    t28 = (t19 + 12U);
    t29 = *((unsigned int *)t28);
    t30 = (1U * t29);
    memcpy(t26, t25, t30);
    goto LAB7;

LAB9:    xsi_set_current_line(65, ng0);
    t13 = (t0 + 1648U);
    t20 = *((char **)t13);
    t5 = (63 - 63);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t13 = (t20 + t7);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 63;
    t23 = (t22 + 4U);
    *((int *)t23) = 32;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t14 = (32 - 63);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t15;
    t23 = (t0 + 1032U);
    t24 = *((char **)t23);
    t23 = (t0 + 5056U);
    t25 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t19, t13, t21, t24, t23);
    t26 = (t0 + 1648U);
    t27 = *((char **)t26);
    t15 = (63 - 63);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t26 = (t27 + t17);
    t28 = (t19 + 12U);
    t29 = *((unsigned int *)t28);
    t30 = (1U * t29);
    memcpy(t26, t25, t30);
    goto LAB7;

}


extern void work_a_2318697404_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2318697404_3212880686_p_0};
	xsi_register_didat("work_a_2318697404_3212880686", "isim/mult_isim_beh.exe.sim/work/a_2318697404_3212880686.didat");
	xsi_register_executes(pe);
}
