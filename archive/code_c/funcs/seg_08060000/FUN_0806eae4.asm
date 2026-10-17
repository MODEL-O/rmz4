; undefined FUN_0806eae4(void)
; entry 0x806eae4  size 72 bytes

0806EAE4: 10b5         push {r4,lr}
0806EAE6: 041c         add r4,r0,#0x0
0806EAE8: e07b         ldrb r0,[r4,#0xf]
0806EAEA: 0028         cmp r0,#0x0
0806EAEC: 0ed1         bne 0x0806eb0c
0806EAEE: 201c         add r0,r4,#0x0
0806EAF0: 7430         add r0,#0x74
0806EAF2: 0e49         ldr r1,[0x0806eb2c]
0806EAF4: 96f746fe     bl 0x08005784
0806EAF8: ad21         mov r1,#0xad
0806EAFA: 0902         lsl r1,r1,#0x8
0806EAFC: 201c         add r0,r4,#0x0
0806EAFE: aef7fff9     bl 0x0801cf00
0806EB02: 1020         mov r0,#0x10
0806EB04: a074         strb r0,[r4,#0x12]
0806EB06: e07b         ldrb r0,[r4,#0xf]
0806EB08: 0130         add r0,#0x1
0806EB0A: e073         strb r0,[r4,#0xf]
0806EB0C: 201c         add r0,r4,#0x0
0806EB0E: aef76ffa     bl 0x0801cff0
0806EB12: a07c         ldrb r0,[r4,#0x12]
0806EB14: 0138         sub r0,#0x1
0806EB16: a074         strb r0,[r4,#0x12]
0806EB18: 0006         lsl r0,r0,#0x18
0806EB1A: 010e         lsr r1,r0,#0x18
0806EB1C: 0029         cmp r1,#0x0
0806EB1E: 02d1         bne 0x0806eb26
0806EB20: 0120         mov r0,#0x1
0806EB22: a073         strb r0,[r4,#0xe]
0806EB24: e173         strb r1,[r4,#0xf]
0806EB26: 10bc         pop {r4}
0806EB28: 01bc         pop {r0}
0806EB2A: 0047         bx r0
