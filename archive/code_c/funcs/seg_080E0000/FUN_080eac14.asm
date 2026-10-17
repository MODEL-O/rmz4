; undefined FUN_080eac14(void)
; entry 0x80eac14  size 28 bytes

080EAC14: 70b5         push {r4,r5,r6,lr}
080EAC16: 051c         add r5,r0,#0x0
080EAC18: a87b         ldrb r0,[r5,#0xe]
080EAC1A: 0428         cmp r0,#0x4
080EAC1C: 00d9         bls 0x080eac20
080EAC1E: ebe0         b 0x080eadf8
080EAC20: 8000         lsl r0,r0,#0x2
080EAC22: 0249         ldr r1,[0x080eac2c]
080EAC24: 4018         add r0,r0,r1
080EAC26: 0068         ldr r0,[r0,#0x0]
080EAC28: 8746         mov pc,r0
080EADF8: 70bc         pop {r4,r5,r6}
080EADFA: 01bc         pop {r0}
080EADFC: 0047         bx r0
