; undefined FUN_080ffadc(void)
; entry 0x80ffadc  size 40 bytes

080FFADC: f8b5         push {r3,r4,r5,r6,r7,lr}
080FFADE: 8608         lsr r6,r0,#0x2
080FFAE0: a07c         ldrb r0,[r4,#0x12]
080FFAE2: 411c         add r1,r0,#0x1
080FFAE4: a174         strb r1,[r4,#0x12]
080FFAE6: 0006         lsl r0,r0,#0x18
080FFAE8: 000e         lsr r0,r0,#0x18
080FFAEA: 7828         cmp r0,#0x78
080FFAEC: 04d9         bls 0x080ffaf8
080FFAEE: 0548         ldr r0,[0x080ffb04]
080FFAF0: 03f70ef8     bl 0x08002b10
080FFAF4: 0020         mov r0,#0x0
080FFAF6: a074         strb r0,[r4,#0x12]
080FFAF8: 201c         add r0,r4,#0x0
080FFAFA: 1df779fa     bl 0x0801cff0
080FFAFE: 30bc         pop {r4,r5}
080FFB00: 01bc         pop {r0}
080FFB02: 0047         bx r0
