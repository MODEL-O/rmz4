; undefined FUN_080b8d2c(void)
; entry 0x80b8d2c  size 52 bytes

080B8D2C: 10b5         push {r4,lr}
080B8D2E: 041c         add r4,r0,#0x0
080B8D30: a26a         ldr r2,[r4,#0x28]
080B8D32: 0b49         ldr r1,[0x080b8d60]
080B8D34: 0020         mov r0,#0x0
080B8D36: 0880         strh r0,[r1,#0x0]
080B8D38: 231c         add r3,r4,#0x0
080B8D3A: 4533         add r3,#0x45
080B8D3C: 1978         ldrb r1,[r3,#0x0]
080B8D3E: 0d38         sub r0,#0xd
080B8D40: 0840         and r0,r1
080B8D42: 1870         strb r0,[r3,#0x0]
080B8D44: cc32         add r2,#0xcc
080B8D46: 1188         ldrh r1,[r2,#0x0]
080B8D48: 0023         mov r3,#0x0
080B8D4A: d05e         ldrsh r0,[r2,r3]
080B8D4C: 0028         cmp r0,#0x0
080B8D4E: 01d0         beq 0x080b8d54
080B8D50: 481e         sub r0,r1,#0x1
080B8D52: 1080         strh r0,[r2,#0x0]
080B8D54: 201c         add r0,r4,#0x0
080B8D56: c6f7c9fd     bl 0x0807f8ec
080B8D5A: 10bc         pop {r4}
080B8D5C: 01bc         pop {r0}
080B8D5E: 0047         bx r0
