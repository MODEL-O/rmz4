; undefined FUN_0811dfa8(void)
; entry 0x811dfa8  size 24 bytes

0811DFA8: f0b5         push {r4,r5,r6,r7,lr}
0811DFAA: 051c         add r5,r0,#0x0
0811DFAC: a878         ldrb r0,[r5,#0x2]
0811DFAE: 0d28         cmp r0,#0xd
0811DFB0: 01d9         bls 0x0811dfb6
0811DFB2: 00f0eafc     bl 0x0811e98a
0811DFB6: 8000         lsl r0,r0,#0x2
0811DFB8: 0149         ldr r1,[0x0811dfc0]
0811DFBA: 4018         add r0,r0,r1
0811DFBC: 0068         ldr r0,[r0,#0x0]
0811DFBE: 8746         mov pc,r0
