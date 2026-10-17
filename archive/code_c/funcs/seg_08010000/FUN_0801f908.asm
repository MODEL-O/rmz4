; undefined FUN_0801f908(void)
; entry 0x801f908  size 22 bytes

0801F908: 0022         mov r2,#0x0
0801F90A: 0176         strb r1,[r0,#0x18]
0801F90C: c261         str r2,[r0,#0x1c]
0801F90E: 0284         strh r2,[r0,#0x20]
0801F910: 4283         strh r2,[r0,#0x1a]
0801F912: 034a         ldr r2,[0x0801f920]
0801F914: 8900         lsl r1,r1,#0x2
0801F916: 8918         add r1,r1,r2
0801F918: 0968         ldr r1,[r1,#0x0]
0801F91A: 4161         str r1,[r0,#0x14]
0801F91C: 7047         bx lr
