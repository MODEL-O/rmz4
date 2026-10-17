; undefined FUN_0804f360(void)
; entry 0x804f360  size 40 bytes

0804F360: 00b5         push {lr}
0804F362: b8f78bfc     bl 0x08007c7c
0804F366: 0004         lsl r0,r0,#0x10
0804F368: 000c         lsr r0,r0,#0x10
0804F36A: 011c         add r1,r0,#0x0
0804F36C: 0f20         mov r0,#0xf
0804F36E: 0840         and r0,r1
0804F370: 0f28         cmp r0,#0xf
0804F372: 06d0         beq 0x0804f382
0804F374: 8020         mov r0,#0x80
0804F376: 0002         lsl r0,r0,#0x8
0804F378: 0840         and r0,r1
0804F37A: 0028         cmp r0,#0x0
0804F37C: 01d1         bne 0x0804f382
0804F37E: 081c         add r0,r1,#0x0
0804F380: 00e0         b 0x0804f384
0804F382: 0020         mov r0,#0x0
0804F384: 02bc         pop {r1}
0804F386: 0847         bx r1
