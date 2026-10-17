; undefined FUN_08053484(void)
; entry 0x8053484  size 60 bytes

08053484: 10b5         push {r4,lr}
08053486: 041c         add r4,r0,#0x0
08053488: e17b         ldrb r1,[r4,#0xf]
0805348A: 0029         cmp r1,#0x0
0805348C: 08d1         bne 0x080534a0
0805348E: c430         add r0,#0xc4
08053490: 0068         ldr r0,[r0,#0x0]
08053492: b430         add r0,#0xb4
08053494: 0170         strb r1,[r0,#0x0]
08053496: 3020         mov r0,#0x30
08053498: a074         strb r0,[r4,#0x12]
0805349A: e07b         ldrb r0,[r4,#0xf]
0805349C: 0130         add r0,#0x1
0805349E: e073         strb r0,[r4,#0xf]
080534A0: 201c         add r0,r4,#0x0
080534A2: c9f7a5fd     bl 0x0801cff0
080534A6: a07c         ldrb r0,[r4,#0x12]
080534A8: 0138         sub r0,#0x1
080534AA: a074         strb r0,[r4,#0x12]
080534AC: 0006         lsl r0,r0,#0x18
080534AE: 010e         lsr r1,r0,#0x18
080534B0: 0029         cmp r1,#0x0
080534B2: 02d1         bne 0x080534ba
080534B4: 0420         mov r0,#0x4
080534B6: a073         strb r0,[r4,#0xe]
080534B8: e173         strb r1,[r4,#0xf]
080534BA: 10bc         pop {r4}
080534BC: 01bc         pop {r0}
080534BE: 0047         bx r0
