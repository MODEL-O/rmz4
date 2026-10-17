; undefined FUN_0803a4e8(void)
; entry 0x803a4e8  size 62 bytes

0803A4E8: 00b5         push {lr}
0803A4EA: 011c         add r1,r0,#0x0
0803A4EC: b430         add r0,#0xb4
0803A4EE: c07c         ldrb r0,[r0,#0x13]
0803A4F0: 0228         cmp r0,#0x2
0803A4F2: 06d1         bne 0x0803a502
0803A4F4: 081c         add r0,r1,#0x0
0803A4F6: f330         add r0,#0xf3
0803A4F8: 0078         ldrb r0,[r0,#0x0]
0803A4FA: 0022         mov r2,#0x0
0803A4FC: 0228         cmp r0,#0x2
0803A4FE: 07d9         bls 0x0803a510
0803A500: 05e0         b 0x0803a50e
0803A502: 081c         add r0,r1,#0x0
0803A504: f330         add r0,#0xf3
0803A506: 0078         ldrb r0,[r0,#0x0]
0803A508: 0022         mov r2,#0x0
0803A50A: 0328         cmp r0,#0x3
0803A50C: 00d1         bne 0x0803a510
0803A50E: 0122         mov r2,#0x1
0803A510: 081c         add r0,r1,#0x0
0803A512: b430         add r0,#0xb4
0803A514: c07c         ldrb r0,[r0,#0x13]
0803A516: 0328         cmp r0,#0x3
0803A518: 02d1         bne 0x0803a520
0803A51A: d01c         add r0,r2,#0x3
0803A51C: 0006         lsl r0,r0,#0x18
0803A51E: 020e         lsr r2,r0,#0x18
0803A520: 101c         add r0,r2,#0x0
0803A522: 02bc         pop {r1}
0803A524: 0847         bx r1
