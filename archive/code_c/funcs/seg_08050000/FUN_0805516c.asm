; undefined FUN_0805516c(void)
; entry 0x805516c  size 26 bytes

0805516C: 1206         lsl r2,r2,#0x18
0805516E: 0023         mov r3,#0x0
08055170: 0366         str r3,[r0,#0x60]
08055172: d20d         lsr r2,r2,#0x17
08055174: 013a         sub r2,#0x1
08055176: 5143         mul r1,r2
08055178: 8166         str r1,[r0,#0x68]
0805517A: b630         add r0,#0xb6
0805517C: 0278         ldrb r2,[r0,#0x0]
0805517E: f721         mov r1,#0xf7
08055180: 1140         and r1,r2
08055182: 0170         strb r1,[r0,#0x0]
08055184: 7047         bx lr
