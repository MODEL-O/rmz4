; undefined FUN_0806e71c(void)
; entry 0x806e71c  size 74 bytes

0806E71C: 10b5         push {r4,lr}
0806E71E: 041c         add r4,r0,#0x0
0806E720: e07b         ldrb r0,[r4,#0xf]
0806E722: 0028         cmp r0,#0x0
0806E724: 0ed1         bne 0x0806e744
0806E726: 201c         add r0,r4,#0x0
0806E728: 7430         add r0,#0x74
0806E72A: 0f49         ldr r1,[0x0806e768]
0806E72C: 97f72af8     bl 0x08005784
0806E730: ad21         mov r1,#0xad
0806E732: 0902         lsl r1,r1,#0x8
0806E734: 201c         add r0,r4,#0x0
0806E736: aef7e3fb     bl 0x0801cf00
0806E73A: 0820         mov r0,#0x8
0806E73C: a074         strb r0,[r4,#0x12]
0806E73E: e07b         ldrb r0,[r4,#0xf]
0806E740: 0130         add r0,#0x1
0806E742: e073         strb r0,[r4,#0xf]
0806E744: 201c         add r0,r4,#0x0
0806E746: aef753fc     bl 0x0801cff0
0806E74A: a07c         ldrb r0,[r4,#0x12]
0806E74C: 0138         sub r0,#0x1
0806E74E: a074         strb r0,[r4,#0x12]
0806E750: 0006         lsl r0,r0,#0x18
0806E752: 010e         lsr r1,r0,#0x18
0806E754: 0029         cmp r1,#0x0
0806E756: 03d1         bne 0x0806e760
0806E758: 0820         mov r0,#0x8
0806E75A: 6073         strb r0,[r4,#0xd]
0806E75C: a173         strb r1,[r4,#0xe]
0806E75E: e173         strb r1,[r4,#0xf]
0806E760: 10bc         pop {r4}
0806E762: 01bc         pop {r0}
0806E764: 0047         bx r0
