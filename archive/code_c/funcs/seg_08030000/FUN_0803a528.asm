; undefined FUN_0803a528(void)
; entry 0x803a528  size 62 bytes

0803A528: 00b5         push {lr}
0803A52A: 011c         add r1,r0,#0x0
0803A52C: b430         add r0,#0xb4
0803A52E: c07c         ldrb r0,[r0,#0x13]
0803A530: 0228         cmp r0,#0x2
0803A532: 06d1         bne 0x0803a542
0803A534: 081c         add r0,r1,#0x0
0803A536: f330         add r0,#0xf3
0803A538: 0078         ldrb r0,[r0,#0x0]
0803A53A: 0022         mov r2,#0x0
0803A53C: 0228         cmp r0,#0x2
0803A53E: 07d9         bls 0x0803a550
0803A540: 05e0         b 0x0803a54e
0803A542: 081c         add r0,r1,#0x0
0803A544: f330         add r0,#0xf3
0803A546: 0078         ldrb r0,[r0,#0x0]
0803A548: 0022         mov r2,#0x0
0803A54A: 0328         cmp r0,#0x3
0803A54C: 00d1         bne 0x0803a550
0803A54E: 0122         mov r2,#0x1
0803A550: 081c         add r0,r1,#0x0
0803A552: b430         add r0,#0xb4
0803A554: c07c         ldrb r0,[r0,#0x13]
0803A556: 0328         cmp r0,#0x3
0803A558: 02d1         bne 0x0803a560
0803A55A: d01c         add r0,r2,#0x3
0803A55C: 0006         lsl r0,r0,#0x18
0803A55E: 020e         lsr r2,r0,#0x18
0803A560: 101c         add r0,r2,#0x0
0803A562: 02bc         pop {r1}
0803A564: 0847         bx r1
