; undefined FUN_0807e574(void)
; entry 0x807e574  size 30 bytes

0807E574: 00b5         push {lr}
0807E576: 817b         ldrb r1,[r0,#0xe]
0807E578: 0131         add r1,#0x1
0807E57A: 0022         mov r2,#0x0
0807E57C: 8173         strb r1,[r0,#0xe]
0807E57E: c273         strb r2,[r0,#0xf]
0807E580: 044a         ldr r2,[0x0807e594]
0807E582: 417b         ldrb r1,[r0,#0xd]
0807E584: 8900         lsl r1,r1,#0x2
0807E586: 8918         add r1,r1,r2
0807E588: 0968         ldr r1,[r1,#0x0]
0807E58A: aaf0f9fc     bl 0x08128f80
0807E58E: 01bc         pop {r0}
0807E590: 0047         bx r0
