; undefined FUN_0805524c(void)
; entry 0x805524c  size 28 bytes

0805524C: 00b5         push {lr}
0805524E: 82b0         sub sp,#0x8
08055250: 416d         ldr r1,[r0,#0x54]
08055252: 0091         str r1,[sp,#0x0]
08055254: 806d         ldr r0,[r0,#0x58]
08055256: 0449         ldr r1,[0x08055268]
08055258: 4018         add r0,r0,r1
0805525A: 0190         str r0,[sp,#0x4]
0805525C: 6846         mov r0,sp
0805525E: b8f7c1fa     bl 0x0800d7e4
08055262: 02b0         add sp,#0x8
08055264: 01bc         pop {r0}
08055266: 0047         bx r0
