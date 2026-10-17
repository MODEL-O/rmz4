; undefined FUN_0803a8b4(void)
; entry 0x803a8b4  size 28 bytes

0803A8B4: 827a         ldrb r2,[r0,#0xa]
0803A8B6: fe21         mov r1,#0xfe
0803A8B8: 1140         and r1,r2
0803A8BA: 8172         strb r1,[r0,#0xa]
0803A8BC: 044a         ldr r2,[0x0803a8d0]
0803A8BE: 417a         ldrb r1,[r0,#0x9]
0803A8C0: 8900         lsl r1,r1,#0x2
0803A8C2: 8918         add r1,r1,r2
0803A8C4: 0422         mov r2,#0x4
0803A8C6: c260         str r2,[r0,#0xc]
0803A8C8: 0968         ldr r1,[r1,#0x0]
0803A8CA: 0969         ldr r1,[r1,#0x10]
0803A8CC: 4161         str r1,[r0,#0x14]
0803A8CE: 7047         bx lr
