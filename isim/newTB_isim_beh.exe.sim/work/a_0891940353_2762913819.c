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
static const char *ng0 = "D:/Users/Mokykla/Desktop/SensorWorking/Sensor/Sensor/up_counter_en.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );


static void work_a_0891940353_2762913819_p_0(char *t0)
{
    char t19[16];
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
    char *t11;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(32, ng0);
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
LAB3:    t1 = (t0 + 4608);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(34, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)2, 4U);
    t6 = (t0 + 2808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 4U);
    goto LAB3;

LAB5:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t8 = (t4 == (unsigned char)3);
    if (t8 != 0)
        goto LAB7;

LAB9:
LAB8:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2808U);
    t2 = *((char **)t1);
    t1 = (t0 + 4720);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t2, 4U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2808U);
    t2 = *((char **)t1);
    t1 = (t0 + 4784);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t9 = *((unsigned char *)t6);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2808U);
    t2 = *((char **)t1);
    t1 = (t0 + 7632U);
    t5 = (t0 + 7693);
    t7 = (t0 + 7584U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t7);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2808U);
    t2 = *((char **)t1);
    t1 = (t0 + 7632U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t19, t2, t1, 1);
    t6 = (t0 + 2808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t11 = (t19 + 12U);
    t20 = *((unsigned int *)t11);
    t21 = (1U * t20);
    memcpy(t6, t5, t21);

LAB17:
LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2808U);
    t7 = *((char **)t2);
    t2 = (t0 + 7632U);
    t11 = (t0 + 7685);
    t13 = (t0 + 7568U);
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t7, t2, t11, t13);
    if (t14 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2808U);
    t2 = *((char **)t1);
    t1 = (t0 + 7632U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t2, t1, 1);
    t6 = (t0 + 2808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t11 = (t19 + 12U);
    t20 = *((unsigned int *)t11);
    t21 = (1U * t20);
    memcpy(t6, t5, t21);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(41, ng0);
    t15 = (t0 + 7689);
    t17 = (t0 + 2808U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    memcpy(t17, t15, 4U);
    goto LAB14;

LAB16:    xsi_set_current_line(49, ng0);
    t11 = (t0 + 7697);
    t13 = (t0 + 2808U);
    t15 = *((char **)t13);
    t13 = (t15 + 0);
    memcpy(t13, t11, 4U);
    goto LAB17;

}

static void work_a_0891940353_2762913819_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t3 = (t0 + 7616U);
    t5 = (t0 + 7701);
    t7 = (t0 + 7568U);
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t3, t5, t7);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 1992U);
    t14 = *((char **)t9);
    t9 = (t0 + 7616U);
    t15 = (t0 + 7705);
    t17 = (t0 + 7584U);
    t18 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t14, t9, t15, t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    t13 = (unsigned char)0;

LAB13:    t1 = t13;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t27 = (t0 + 4848);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)2;
    xsi_driver_first_trans_fast(t27);

LAB2:    t32 = (t0 + 4624);
    *((int *)t32) = 1;

LAB1:    return;
LAB3:    t19 = (t0 + 4848);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast(t19);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t2 = t12;
    goto LAB10;

LAB11:    t19 = (t0 + 1512U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)3);
    t13 = t22;
    goto LAB13;

LAB15:    goto LAB2;

}

static void work_a_0891940353_2762913819_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(69, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4912);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4640);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0891940353_2762913819_init()
{
	static char *pe[] = {(void *)work_a_0891940353_2762913819_p_0,(void *)work_a_0891940353_2762913819_p_1,(void *)work_a_0891940353_2762913819_p_2};
	xsi_register_didat("work_a_0891940353_2762913819", "isim/newTB_isim_beh.exe.sim/work/a_0891940353_2762913819.didat");
	xsi_register_executes(pe);
}
