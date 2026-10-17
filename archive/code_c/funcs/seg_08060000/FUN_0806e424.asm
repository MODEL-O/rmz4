; undefined FUN_0806e424(void)
; entry 0x806e424  size 72 bytes

0806E424: 10b5         push {r4,lr}
0806E426: 041c         add r4,r0,#0x0
0806E428: e07b         ldrb r0,[r4,#0xf]
0806E42A: 0028         cmp r0,#0x0
0806E42C: 0ed1         bne 0x0806e44c
0806E42E: 201c         add r0,r4,#0x0
0806E430: 7430         add r0,#0x74
0806E432: 0e49         ldr r1,[0x0806e46c]
0806E434: 97f7a6f9     bl 0x08005784
0806E438: ad21         mov r1,#0xad
0806E43A: 0902         lsl r1,r1,#0x8
0806E43C: 201c         add r0,r4,#0x0
0806E43E: aef75ffd     bl 0x0801cf00
0806E442: 1020         mov r0,#0x10
0806E444: a074         strb r0,[r4,#0x12]
0806E446: e07b         ldrb r0,[r4,#0xf]
0806E448: 0130         add r0,#0x1
0806E44A: e073         strb r0,[r4,#0xf]
0806E44C: 201c         add r0,r4,#0x0
0806E44E: aef7cffd     bl 0x0801cff0
0806E452: a07c         ldrb r0,[r4,#0x12]
0806E454: 0138         sub r0,#0x1
0806E456: a074         strb r0,[r4,#0x12]
0806E458: 0006         lsl r0,r0,#0x18
0806E45A: 010e         lsr r1,r0,#0x18
0806E45C: 0029         cmp r1,#0x0
0806E45E: 02d1         bne 0x0806e466
0806E460: 0120         mov r0,#0x1
0806E462: a073         strb r0,[r4,#0xe]
0806E464: e173         strb r1,[r4,#0xf]
0806E466: 10bc         pop {r4}
0806E468: 01bc         pop {r0}
0806E46A: 0047         bx r0
