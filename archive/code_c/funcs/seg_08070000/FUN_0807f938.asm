; undefined FUN_0807f938(void)
; entry 0x807f938  size 24 bytes

0807F938: 00b5         push {lr}
0807F93A: 011c         add r1,r0,#0x0
0807F93C: 0448         ldr r0,[0x0807f950]
0807F93E: 0068         ldr r0,[r0,#0x0]
0807F940: 5431         add r1,#0x54
0807F942: 9df7f5f8     bl 0x0801cb30
0807F946: 0028         cmp r0,#0x0
0807F948: 00d1         bne 0x0807f94c
0807F94A: 0020         mov r0,#0x0
0807F94C: 02bc         pop {r1}
0807F94E: 0847         bx r1
