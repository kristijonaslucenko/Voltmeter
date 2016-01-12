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
static const char *ng0 = "D:/Users/Mokykla/Desktop/SensorWorking/Sensor/Sensor/Digit.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0939230780_1516540902_p_0(char *t0)
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
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7692);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB14:    t5 = (t0 + 7696);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB15:    t8 = (t0 + 7700);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB16:    t11 = (t0 + 7704);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB17:    t14 = (t0 + 7708);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB18:    t17 = (t0 + 7712);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB19:    t20 = (t0 + 7716);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB20:    t23 = (t0 + 7720);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB21:    t26 = (t0 + 7724);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB22:    t29 = (t0 + 7728);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB12;

LAB23:
LAB13:    xsi_set_current_line(53, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)8, 3U);
    t3 = (t0 + 4928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 4784);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(33, ng0);
    t32 = (t0 + 7732);
    t34 = (t0 + 4928);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t32, 3U);
    xsi_driver_first_trans_fast(t34);
    goto LAB2;

LAB4:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 7735);
    t3 = (t0 + 4928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 7738);
    t3 = (t0 + 4928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 7741);
    t3 = (t0 + 4928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 7744);
    t3 = (t0 + 4928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 7747);
    t3 = (t0 + 4928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 7750);
    t3 = (t0 + 4928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB10:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 7753);
    t3 = (t0 + 4928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB11:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 7756);
    t3 = (t0 + 4928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB12:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 7759);
    t3 = (t0 + 4928);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB24:;
}

static void work_a_0939230780_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7762);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB5:    t5 = (t0 + 7766);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB3;

LAB6:    t8 = (t0 + 7770);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB3;

LAB7:    t11 = (t0 + 7774);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB3;

LAB8:    t14 = (t0 + 7778);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB3;

LAB9:
LAB4:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4992);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:    t1 = (t0 + 4800);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(63, ng0);
    t17 = (t0 + 4992);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    goto LAB2;

LAB10:;
}

static void work_a_0939230780_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(70, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 5056);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t12 = (t0 + 4816);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0939230780_1516540902_p_3(char *t0)
{
    char t13[16];
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
    char *t12;
    unsigned int t14;
    char *t15;

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4832);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(75, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)2, 4U);
    t6 = (t0 + 5120);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t3 = *((unsigned char *)t5);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 7656U);
    t1 = xsi_base_array_concat(t1, t13, t6, (char)97, t2, t7, (char)99, t3, (char)101);
    t14 = (3U + 1U);
    t4 = (4U != t14);
    if (t4 == 1)
        goto LAB10;

LAB11:    t8 = (t0 + 5120);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t12 = (t10 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t8);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(78, ng0);
    t2 = xsi_get_transient_memory(4U);
    memset(t2, 0, 4U);
    t6 = t2;
    memset(t6, (unsigned char)2, 4U);
    t7 = (t0 + 5120);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5120);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB8;

LAB10:    xsi_size_not_matching(4U, t14, 0);
    goto LAB11;

}

static void work_a_0939230780_1516540902_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5184);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4848);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0939230780_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0939230780_1516540902_p_0,(void *)work_a_0939230780_1516540902_p_1,(void *)work_a_0939230780_1516540902_p_2,(void *)work_a_0939230780_1516540902_p_3,(void *)work_a_0939230780_1516540902_p_4};
	xsi_register_didat("work_a_0939230780_1516540902", "isim/newTB_isim_beh.exe.sim/work/a_0939230780_1516540902.didat");
	xsi_register_executes(pe);
}
