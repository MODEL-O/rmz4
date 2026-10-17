; undefined FUN_080eae0c(void)
; entry 0x80eae0c  size 28 bytes

080EAE0C: 70b5         push {r4,r5,r6,lr}
080EAE0E: 051c         add r5,r0,#0x0
080EAE10: a87b         ldrb r0,[r5,#0xe]
080EAE12: 0428         cmp r0,#0x4
080EAE14: 00d9         bls 0x080eae18
080EAE16: efe0         b 0x080eaff8
080EAE18: 8000         lsl r0,r0,#0x2
080EAE1A: 0249         ldr r1,[0x080eae24]
080EAE1C: 4018         add r0,r0,r1
080EAE1E: 0068         ldr r0,[r0,#0x0]
080EAE20: 8746         mov pc,r0
080EAFF8: 70bc         pop {r4,r5,r6}
080EAFFA: 01bc         pop {r0}
080EAFFC: 0047         bx r0
