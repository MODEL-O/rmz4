; undefined FUN_080fe730(void)
; entry 0x80fe730  size 28 bytes

080FE730: 00b5         push {lr}
080FE732: 011c         add r1,r0,#0x0
080FE734: 087c         ldrb r0,[r1,#0x10]
080FE736: 0028         cmp r0,#0x0
080FE738: 03d1         bne 0x080fe742
080FE73A: 081c         add r0,r1,#0x0
080FE73C: 00f042f8     bl 0x080fe7c4
080FE740: 02e0         b 0x080fe748
080FE742: 081c         add r0,r1,#0x0
080FE744: 00f04cf8     bl 0x080fe7e0
080FE748: 01bc         pop {r0}
080FE74A: 0047         bx r0
