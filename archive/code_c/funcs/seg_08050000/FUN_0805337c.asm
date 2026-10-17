; undefined FUN_0805337c(void)
; entry 0x805337c  size 74 bytes

0805337C: 10b5         push {r4,lr}
0805337E: 041c         add r4,r0,#0x0
08053380: e07b         ldrb r0,[r4,#0xf]
08053382: 0028         cmp r0,#0x0
08053384: 0fd1         bne 0x080533a6
08053386: 201c         add r0,r4,#0x0
08053388: c430         add r0,#0xc4
0805338A: 0068         ldr r0,[r0,#0x0]
0805338C: b430         add r0,#0xb4
0805338E: 0121         mov r1,#0x1
08053390: 0170         strb r1,[r0,#0x0]
08053392: b621         mov r1,#0xb6
08053394: 0902         lsl r1,r1,#0x8
08053396: 201c         add r0,r4,#0x0
08053398: c9f7b2fd     bl 0x0801cf00
0805339C: 2020         mov r0,#0x20
0805339E: a074         strb r0,[r4,#0x12]
080533A0: e07b         ldrb r0,[r4,#0xf]
080533A2: 0130         add r0,#0x1
080533A4: e073         strb r0,[r4,#0xf]
080533A6: 201c         add r0,r4,#0x0
080533A8: c9f722fe     bl 0x0801cff0
080533AC: a07c         ldrb r0,[r4,#0x12]
080533AE: 0138         sub r0,#0x1
080533B0: a074         strb r0,[r4,#0x12]
080533B2: 0006         lsl r0,r0,#0x18
080533B4: 010e         lsr r1,r0,#0x18
080533B6: 0029         cmp r1,#0x0
080533B8: 02d1         bne 0x080533c0
080533BA: 0120         mov r0,#0x1
080533BC: a073         strb r0,[r4,#0xe]
080533BE: e173         strb r1,[r4,#0xf]
080533C0: 10bc         pop {r4}
080533C2: 01bc         pop {r0}
080533C4: 0047         bx r0
