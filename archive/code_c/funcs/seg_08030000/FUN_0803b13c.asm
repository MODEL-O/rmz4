; undefined FUN_0803b13c(void)
; entry 0x803b13c  size 32 bytes

0803B13C: 00b5         push {lr}
0803B13E: 021c         add r2,r0,#0x0
0803B140: 107c         ldrb r0,[r2,#0x10]
0803B142: 0128         cmp r0,#0x1
0803B144: 0ad0         beq 0x0803b15c
0803B146: 506d         ldr r0,[r2,#0x54]
0803B148: 0860         str r0,[r1,#0x0]
0803B14A: 906d         ldr r0,[r2,#0x58]
0803B14C: 024a         ldr r2,[0x0803b158]
0803B14E: 8018         add r0,r0,r2
0803B150: 4860         str r0,[r1,#0x4]
0803B152: 0120         mov r0,#0x1
0803B154: 03e0         b 0x0803b15e
0803B15C: 0020         mov r0,#0x0
0803B15E: 02bc         pop {r1}
0803B160: 0847         bx r1
