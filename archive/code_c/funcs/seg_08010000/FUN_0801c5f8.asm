; undefined FUN_0801c5f8(void)
; entry 0x801c5f8  size 22 bytes

0801C5F8: 00b5         push {lr}
0801C5FA: 0548         ldr r0,[0x0801c610]
0801C5FC: 0549         ldr r1,[0x0801c614]
0801C5FE: 4018         add r0,r0,r1
0801C600: 0021         mov r1,#0x0
0801C602: 0170         strb r1,[r0,#0x0]
0801C604: c820         mov r0,#0xc8
0801C606: e5f749ff     bl 0x0800249c
0801C60A: 01bc         pop {r0}
0801C60C: 0047         bx r0
