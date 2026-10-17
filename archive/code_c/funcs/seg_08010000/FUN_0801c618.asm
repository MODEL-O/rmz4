; undefined FUN_0801c618(void)
; entry 0x801c618  size 36 bytes

0801C618: 00b5         push {lr}
0801C61A: 0848         ldr r0,[0x0801c63c]
0801C61C: 084a         ldr r2,[0x0801c640]
0801C61E: 8118         add r1,r0,r2
0801C620: 0878         ldrb r0,[r1,#0x0]
0801C622: 0130         add r0,#0x1
0801C624: 0870         strb r0,[r1,#0x0]
0801C626: 0006         lsl r0,r0,#0x18
0801C628: 000e         lsr r0,r0,#0x18
0801C62A: 2c28         cmp r0,#0x2c
0801C62C: 01d9         bls 0x0801c632
0801C62E: 0020         mov r0,#0x0
0801C630: 0870         strb r0,[r1,#0x0]
0801C632: c820         mov r0,#0xc8
0801C634: e5f7d0ff     bl 0x080025d8
0801C638: 01bc         pop {r0}
0801C63A: 0047         bx r0
