; undefined FUN_0802ffc0(void)
; entry 0x802ffc0  size 44 bytes

0802FFC0: 30b5         push {r4,r5,lr}
0802FFC2: 051c         add r5,r0,#0x0
0802FFC4: 8720         mov r0,#0x87
0802FFC6: 4000         lsl r0,r0,#0x1
0802FFC8: 2c18         add r4,r5,r0
0802FFCA: 0020         mov r0,#0x0
0802FFCC: 215e         ldrsh r1,[r4,r0]
0802FFCE: 0120         mov r0,#0x1
0802FFD0: 4042         rsb r0,r0
0802FFD2: 8142         cmp r1,r0
0802FFD4: 04d0         beq 0x0802ffe0
0802FFD6: 081c         add r0,r1,#0x0
0802FFD8: d2f7c0fd     bl 0x08002b5c
0802FFDC: 0348         ldr r0,[0x0802ffec]
0802FFDE: 2080         strh r0,[r4,#0x0]
0802FFE0: 281c         add r0,r5,#0x0
0802FFE2: fbf79ffa     bl 0x0802b524
0802FFE6: 30bc         pop {r4,r5}
0802FFE8: 01bc         pop {r0}
0802FFEA: 0047         bx r0
