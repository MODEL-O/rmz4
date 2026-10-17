; undefined FUN_0803b0d0(void)
; entry 0x803b0d0  size 36 bytes

0803B0D0: 00b5         push {lr}
0803B0D2: 021c         add r2,r0,#0x0
0803B0D4: 107c         ldrb r0,[r2,#0x10]
0803B0D6: 0128         cmp r0,#0x1
0803B0D8: 03d1         bne 0x0803b0e2
0803B0DA: 506d         ldr r0,[r2,#0x54]
0803B0DC: 0860         str r0,[r1,#0x0]
0803B0DE: 906d         ldr r0,[r2,#0x58]
0803B0E0: 04e0         b 0x0803b0ec
0803B0E2: 506d         ldr r0,[r2,#0x54]
0803B0E4: 0860         str r0,[r1,#0x0]
0803B0E6: 906d         ldr r0,[r2,#0x58]
0803B0E8: 024a         ldr r2,[0x0803b0f4]
0803B0EA: 8018         add r0,r0,r2
0803B0EC: 4860         str r0,[r1,#0x4]
0803B0EE: 0120         mov r0,#0x1
0803B0F0: 02bc         pop {r1}
0803B0F2: 0847         bx r1
