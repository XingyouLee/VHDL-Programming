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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/lab10/butterfly.vhd";
extern char *WORK_P_4269718380;

char *work_p_4269718380_sub_1612176599_68998546(char *, char *, char *);
char *work_p_4269718380_sub_1759608656_68998546(char *, char *, char *);
char *work_p_4269718380_sub_1787935808_68998546(char *, char *, char *);


static void work_a_3956407695_3212880686_p_0(char *t0)
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
    char *t11;

LAB0:    xsi_set_current_line(19, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t1 = work_p_4269718380_sub_1759608656_68998546(WORK_P_4269718380, t3, t4);
    t5 = work_p_4269718380_sub_1612176599_68998546(WORK_P_4269718380, t2, t1);
    t6 = (t0 + 3496);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 16U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3400);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3956407695_3212880686_p_1(char *t0)
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
    char *t11;

LAB0:    xsi_set_current_line(20, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t1 = work_p_4269718380_sub_1759608656_68998546(WORK_P_4269718380, t3, t4);
    t5 = work_p_4269718380_sub_1787935808_68998546(WORK_P_4269718380, t2, t1);
    t6 = (t0 + 3560);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 16U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3416);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3956407695_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3956407695_3212880686_p_0,(void *)work_a_3956407695_3212880686_p_1};
	xsi_register_didat("work_a_3956407695_3212880686", "isim/testfft2d_isim_beh.exe.sim/work/a_3956407695_3212880686.didat");
	xsi_register_executes(pe);
}
