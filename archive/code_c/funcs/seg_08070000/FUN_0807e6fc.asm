; undefined FUN_0807e6fc(void)
; entry 0x807e6fc  size 30 bytes

0807E6FC: 00b5         push {lr}
0807E6FE: 817b         ldrb r1,[r0,#0xe]
0807E700: 0131         add r1,#0x1
0807E702: 0022         mov r2,#0x0
0807E704: 8173         strb r1,[r0,#0xe]
0807E706: c273         strb r2,[r0,#0xf]
0807E708: 044a         ldr r2,[0x0807e71c]
0807E70A: 417b         ldrb r1,[r0,#0xd]
0807E70C: 8900         lsl r1,r1,#0x2
0807E70E: 8918         add r1,r1,r2
0807E710: 0968         ldr r1,[r1,#0x0]
0807E712: aaf035fc     bl 0x08128f80
0807E716: 01bc         pop {r0}
0807E718: 0047         bx r0
