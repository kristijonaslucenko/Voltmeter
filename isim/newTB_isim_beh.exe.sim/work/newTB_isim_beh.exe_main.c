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

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_a_0159862796_3212880686_init();
    work_a_3231050335_3212880686_init();
    work_a_3289945837_3212880686_init();
    work_a_3643194780_3212880686_init();
    work_a_0939230780_1516540902_init();
    work_a_3146888275_1516540902_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_a_0916399279_3212880686_init();
    work_a_1106386305_3212880686_init();
    work_a_0567069081_3212880686_init();
    work_a_0891940353_2762913819_init();
    work_a_3034357451_3212880686_init();
    work_a_4258168381_3212880686_init();
    work_a_1531675454_2372691052_init();


    xsi_register_tops("work_a_1531675454_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");

    return xsi_run_simulation(argc, argv);

}
