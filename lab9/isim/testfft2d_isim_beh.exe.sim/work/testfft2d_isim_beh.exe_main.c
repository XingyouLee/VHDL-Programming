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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_STANDARD;
char *IEEE_P_3972351953;
char *WORK_P_4269718380;
char *IEEE_P_2592010699;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3972351953_init();
    work_p_4269718380_init();
    work_a_3956407695_3212880686_init();
    work_a_1216406513_3212880686_init();
    work_a_4279447810_3212880686_init();
    work_a_0683414706_2372691052_init();


    xsi_register_tops("work_a_0683414706_2372691052");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3972351953 = xsi_get_engine_memory("ieee_p_3972351953");
    WORK_P_4269718380 = xsi_get_engine_memory("work_p_4269718380");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);

    return xsi_run_simulation(argc, argv);

}
