; undefined FUN_080ecc6c(void)
; entry 0x80ecc6c  size 26 bytes

080ECC6C: 10b5         push {r4,lr}
080ECC6E: 041c         add r4,r0,#0x0
080ECC70: 607b         ldrb r0,[r4,#0xd]
080ECC72: 0728         cmp r0,#0x7
080ECC74: 68d8         bhi 0x080ecd48
080ECC76: 8000         lsl r0,r0,#0x2
080ECC78: 0149         ldr r1,[0x080ecc80]
080ECC7A: 4018         add r0,r0,r1
080ECC7C: 0068         ldr r0,[r0,#0x0]
080ECC7E: 8746         mov pc,r0
080ECD48: 10bc         pop {r4}
080ECD4A: 01bc         pop {r0}
080ECD4C: 0047         bx r0
