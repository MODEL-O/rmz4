; undefined FUN_080bbd38(void)
; entry 0x80bbd38  size 52 bytes

080BBD38: 10b5         push {r4,lr}
080BBD3A: 041c         add r4,r0,#0x0
080BBD3C: a26a         ldr r2,[r4,#0x28]
080BBD3E: 0b49         ldr r1,[0x080bbd6c]
080BBD40: 0020         mov r0,#0x0
080BBD42: 0880         strh r0,[r1,#0x0]
080BBD44: 231c         add r3,r4,#0x0
080BBD46: 4533         add r3,#0x45
080BBD48: 1978         ldrb r1,[r3,#0x0]
080BBD4A: 0d38         sub r0,#0xd
080BBD4C: 0840         and r0,r1
080BBD4E: 1870         strb r0,[r3,#0x0]
080BBD50: cc32         add r2,#0xcc
080BBD52: 1188         ldrh r1,[r2,#0x0]
080BBD54: 0023         mov r3,#0x0
080BBD56: d05e         ldrsh r0,[r2,r3]
080BBD58: 0028         cmp r0,#0x0
080BBD5A: 01d0         beq 0x080bbd60
080BBD5C: 481e         sub r0,r1,#0x1
080BBD5E: 1080         strh r0,[r2,#0x0]
080BBD60: 201c         add r0,r4,#0x0
080BBD62: c3f7c3fd     bl 0x0807f8ec
080BBD66: 10bc         pop {r4}
080BBD68: 01bc         pop {r0}
080BBD6A: 0047         bx r0
