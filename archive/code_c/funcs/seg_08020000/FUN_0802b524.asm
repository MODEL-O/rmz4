; undefined FUN_0802b524(void)
; entry 0x802b524  size 20 bytes

0802B524: 044a         ldr r2,[0x0802b538]
0802B526: 417a         ldrb r1,[r0,#0x9]
0802B528: 8900         lsl r1,r1,#0x2
0802B52A: 8918         add r1,r1,r2
0802B52C: 0422         mov r2,#0x4
0802B52E: c260         str r2,[r0,#0xc]
0802B530: 0968         ldr r1,[r1,#0x0]
0802B532: 0969         ldr r1,[r1,#0x10]
0802B534: 4161         str r1,[r0,#0x14]
0802B536: 7047         bx lr
