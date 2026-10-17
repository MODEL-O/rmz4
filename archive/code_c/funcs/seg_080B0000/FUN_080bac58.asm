; undefined FUN_080bac58(void)
; entry 0x80bac58  size 52 bytes

080BAC58: 10b5         push {r4,lr}
080BAC5A: 041c         add r4,r0,#0x0
080BAC5C: a26a         ldr r2,[r4,#0x28]
080BAC5E: 0b49         ldr r1,[0x080bac8c]
080BAC60: 0020         mov r0,#0x0
080BAC62: 0880         strh r0,[r1,#0x0]
080BAC64: 231c         add r3,r4,#0x0
080BAC66: 4533         add r3,#0x45
080BAC68: 1978         ldrb r1,[r3,#0x0]
080BAC6A: 0d38         sub r0,#0xd
080BAC6C: 0840         and r0,r1
080BAC6E: 1870         strb r0,[r3,#0x0]
080BAC70: cc32         add r2,#0xcc
080BAC72: 1188         ldrh r1,[r2,#0x0]
080BAC74: 0023         mov r3,#0x0
080BAC76: d05e         ldrsh r0,[r2,r3]
080BAC78: 0028         cmp r0,#0x0
080BAC7A: 01d0         beq 0x080bac80
080BAC7C: 481e         sub r0,r1,#0x1
080BAC7E: 1080         strh r0,[r2,#0x0]
080BAC80: 201c         add r0,r4,#0x0
080BAC82: c4f733fe     bl 0x0807f8ec
080BAC86: 10bc         pop {r4}
080BAC88: 01bc         pop {r0}
080BAC8A: 0047         bx r0
