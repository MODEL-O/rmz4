; undefined FUN_08017434(void)
; entry 0x8017434  size 32 bytes

08017434: 00b5         push {lr}
08017436: 011c         add r1,r0,#0x0
08017438: 8b7b         ldrb r3,[r1,#0xe]
0801743A: 1a1c         add r2,r3,#0x0
0801743C: 002a         cmp r2,#0x0
0801743E: 07d1         bne 0x08017450
08017440: 0448         ldr r0,[0x08017454]
08017442: c864         str r0,[r1,#0x4c]
08017444: 0a65         str r2,[r1,#0x50]
08017446: a020         mov r0,#0xa0
08017448: 4000         lsl r0,r0,#0x1
0801744A: 4864         str r0,[r1,#0x44]
0801744C: 581c         add r0,r3,#0x1
0801744E: 8873         strb r0,[r1,#0xe]
08017450: 01bc         pop {r0}
08017452: 0047         bx r0
