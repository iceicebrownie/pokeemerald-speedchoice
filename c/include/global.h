typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;
typedef signed char    s8;
typedef signed short   s16;
typedef signed int     s32;

typedef u8  bool8;
typedef u16 bool16;
typedef u32 bool32;

#define NULL (void *)0

#define TRUE  1
#define FALSE 0

#define CPU_SET_SRC_FIX (1 << 24)
#define CPU_SET_32BIT   (1 << 26)

extern void CpuSet(void *src, void *dest, u32 controlData);