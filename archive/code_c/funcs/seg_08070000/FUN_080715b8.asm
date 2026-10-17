; undefined FUN_080715b8(void)
; entry 0x80715b8  size 58 bytes

080715B8: 30b5         push {r4,r5,lr}
080715BA: 041c         add r4,r0,#0x0
080715BC: b430         add r0,#0xb4
080715BE: 0068         ldr r0,[r0,#0x0]
080715C0: b430         add r0,#0xb4
080715C2: 0025         mov r5,#0x0
080715C4: 0121         mov r1,#0x1
080715C6: 0170         strb r1,[r0,#0x0]
080715C8: 201c         add r0,r4,#0x0
080715CA: 02f019fc     bl 0x08073e00
080715CE: 211c         add r1,r4,#0x0
080715D0: c331         add r1,#0xc3
080715D2: 0870         strb r0,[r1,#0x0]
080715D4: a07b         ldrb r0,[r4,#0xe]
080715D6: 0130         add r0,#0x1
080715D8: a073         strb r0,[r4,#0xe]
080715DA: e573         strb r5,[r4,#0xf]
080715DC: 0549         ldr r1,[0x080715f4]
080715DE: 607b         ldrb r0,[r4,#0xd]
080715E0: 8000         lsl r0,r0,#0x2
080715E2: 4018         add r0,r0,r1
080715E4: 0168         ldr r1,[r0,#0x0]
080715E6: 201c         add r0,r4,#0x0
080715E8: b7f0cafc     bl 0x08128f80
080715EC: 30bc         pop {r4,r5}
080715EE: 01bc         pop {r0}
080715F0: 0047         bx r0
