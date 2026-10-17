; undefined FUN_08090178(void)
; entry 0x8090178  size 20 bytes

08090178: 00b5         push {lr}
0809017A: 044a         ldr r2,[0x0809018c]
0809017C: 817b         ldrb r1,[r0,#0xe]
0809017E: 8900         lsl r1,r1,#0x2
08090180: 8918         add r1,r1,r2
08090182: 0968         ldr r1,[r1,#0x0]
08090184: 98f0fcfe     bl 0x08128f80
08090188: 01bc         pop {r0}
0809018A: 0047         bx r0
