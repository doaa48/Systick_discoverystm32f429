#ifndef SYSTICK_PRIVATE_H
#define SYSTICK_PRIVATE_H

#define MSTK_CTRL     *((volatile u32*)0xE000E010)
#define MSTK_LOAD	  *((volatile u32*)0xE000E014)
#define MSTK_VAL 	  *((volatile u32*)0xE000E018)
#define MSTK_CALIB    *((volatile u32*)0xE000E01C)



#endif
