; undefined FUN_0804c564(void)
; entry 0x804c564  size 40 bytes

0804C564: 00b5         push {lr}
0804C566: bbf789fb     bl 0x08007c7c
0804C56A: 0004         lsl r0,r0,#0x10
0804C56C: 000c         lsr r0,r0,#0x10
0804C56E: 011c         add r1,r0,#0x0
0804C570: 0f20         mov r0,#0xf
0804C572: 0840         and r0,r1
0804C574: 0f28         cmp r0,#0xf
0804C576: 06d0         beq 0x0804c586
0804C578: 8020         mov r0,#0x80
0804C57A: 0002         lsl r0,r0,#0x8
0804C57C: 0840         and r0,r1
0804C57E: 0028         cmp r0,#0x0
0804C580: 01d1         bne 0x0804c586
0804C582: 081c         add r0,r1,#0x0
0804C584: 00e0         b 0x0804c588
0804C586: 0020         mov r0,#0x0
0804C588: 02bc         pop {r1}
0804C58A: 0847         bx r1
