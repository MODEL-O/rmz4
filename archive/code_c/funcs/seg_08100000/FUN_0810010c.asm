; undefined FUN_0810010c(void)
; entry 0x810010c  size 20 bytes

0810010C: 00b5         push {lr}
0810010E: 044a         ldr r2,[0x08100120]
08100110: 417b         ldrb r1,[r0,#0xd]
08100112: 8900         lsl r1,r1,#0x2
08100114: 8918         add r1,r1,r2
08100116: 0968         ldr r1,[r1,#0x0]
08100118: 28f032ff     bl 0x08128f80
0810011C: 01bc         pop {r0}
0810011E: 0047         bx r0
