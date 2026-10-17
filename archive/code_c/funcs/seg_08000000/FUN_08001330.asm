; undefined FUN_08001330(void)
; entry 0x8001330  size 32 bytes

08001330: 00b5         push {lr}
08001332: 021c         add r2,r0,#0x0
08001334: 0029         cmp r1,#0x0
08001336: 09d0         beq 0x0800134c
08001338: 5180         strh r1,[r2,#0x2]
0800133A: 0420         mov r0,#0x4
0800133C: 1070         strb r0,[r2,#0x0]
0800133E: 101d         add r0,r2,#0x4
08001340: 111c         add r1,r2,#0x0
08001342: 0831         add r1,#0x8
08001344: 024a         ldr r2,[0x08001350]
08001346: 1268         ldr r2,[r2,#0x0]
08001348: fef7daff     bl 0x08000300
0800134C: 01bc         pop {r0}
0800134E: 0047         bx r0
