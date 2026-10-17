; undefined FUN_0810c83c(void)
; entry 0x810c83c  size 20 bytes

0810C83C: 044a         ldr r2,[0x0810c850]
0810C83E: 417a         ldrb r1,[r0,#0x9]
0810C840: 8900         lsl r1,r1,#0x2
0810C842: 8918         add r1,r1,r2
0810C844: 0422         mov r2,#0x4
0810C846: c260         str r2,[r0,#0xc]
0810C848: 0968         ldr r1,[r1,#0x0]
0810C84A: 0969         ldr r1,[r1,#0x10]
0810C84C: 4161         str r1,[r0,#0x14]
0810C84E: 7047         bx lr
