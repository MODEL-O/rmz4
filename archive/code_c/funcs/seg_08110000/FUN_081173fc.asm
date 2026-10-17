; undefined FUN_081173fc(void)
; entry 0x81173fc  size 28 bytes

081173FC: f0b5         push {r4,r5,r6,r7,lr}
081173FE: 051c         add r5,r0,#0x0
08117400: e878         ldrb r0,[r5,#0x3]
08117402: 1528         cmp r0,#0x15
08117404: 00d9         bls 0x08117408
08117406: 19e1         b 0x0811763c
08117408: 8000         lsl r0,r0,#0x2
0811740A: 0249         ldr r1,[0x08117414]
0811740C: 4018         add r0,r0,r1
0811740E: 0068         ldr r0,[r0,#0x0]
08117410: 8746         mov pc,r0
0811763C: f0bc         pop {r4,r5,r6,r7}
0811763E: 01bc         pop {r0}
08117640: 0047         bx r0
