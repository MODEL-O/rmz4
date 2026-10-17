; undefined FUN_08105784(void)
; entry 0x8105784  size 26 bytes

08105784: 00b5         push {lr}
08105786: 0904         lsl r1,r1,#0x10
08105788: 090c         lsr r1,r1,#0x10
0810578A: c27a         ldrb r2,[r0,#0xb]
0810578C: 9208         lsr r2,r2,#0x2
0810578E: 0123         mov r3,#0x1
08105790: 1a40         and r2,r3
08105792: 00f029f8     bl 0x081057e8
08105796: 0004         lsl r0,r0,#0x10
08105798: 000c         lsr r0,r0,#0x10
0810579A: 02bc         pop {r1}
0810579C: 0847         bx r1
