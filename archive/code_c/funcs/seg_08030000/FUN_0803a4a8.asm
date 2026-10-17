; undefined FUN_0803a4a8(void)
; entry 0x803a4a8  size 62 bytes

0803A4A8: 00b5         push {lr}
0803A4AA: 011c         add r1,r0,#0x0
0803A4AC: b430         add r0,#0xb4
0803A4AE: c07c         ldrb r0,[r0,#0x13]
0803A4B0: 0228         cmp r0,#0x2
0803A4B2: 06d1         bne 0x0803a4c2
0803A4B4: 081c         add r0,r1,#0x0
0803A4B6: f330         add r0,#0xf3
0803A4B8: 0078         ldrb r0,[r0,#0x0]
0803A4BA: 0022         mov r2,#0x0
0803A4BC: 0228         cmp r0,#0x2
0803A4BE: 07d9         bls 0x0803a4d0
0803A4C0: 05e0         b 0x0803a4ce
0803A4C2: 081c         add r0,r1,#0x0
0803A4C4: f330         add r0,#0xf3
0803A4C6: 0078         ldrb r0,[r0,#0x0]
0803A4C8: 0022         mov r2,#0x0
0803A4CA: 0328         cmp r0,#0x3
0803A4CC: 00d1         bne 0x0803a4d0
0803A4CE: 0122         mov r2,#0x1
0803A4D0: 081c         add r0,r1,#0x0
0803A4D2: b430         add r0,#0xb4
0803A4D4: c07c         ldrb r0,[r0,#0x13]
0803A4D6: 0328         cmp r0,#0x3
0803A4D8: 02d1         bne 0x0803a4e0
0803A4DA: d01c         add r0,r2,#0x3
0803A4DC: 0006         lsl r0,r0,#0x18
0803A4DE: 020e         lsr r2,r0,#0x18
0803A4E0: 101c         add r0,r2,#0x0
0803A4E2: 02bc         pop {r1}
0803A4E4: 0847         bx r1
