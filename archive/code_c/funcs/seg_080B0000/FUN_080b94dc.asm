; undefined FUN_080b94dc(void)
; entry 0x80b94dc  size 52 bytes

080B94DC: 10b5         push {r4,lr}
080B94DE: 041c         add r4,r0,#0x0
080B94E0: a26a         ldr r2,[r4,#0x28]
080B94E2: 0b49         ldr r1,[0x080b9510]
080B94E4: 0020         mov r0,#0x0
080B94E6: 0880         strh r0,[r1,#0x0]
080B94E8: 231c         add r3,r4,#0x0
080B94EA: 4533         add r3,#0x45
080B94EC: 1978         ldrb r1,[r3,#0x0]
080B94EE: 0d38         sub r0,#0xd
080B94F0: 0840         and r0,r1
080B94F2: 1870         strb r0,[r3,#0x0]
080B94F4: cc32         add r2,#0xcc
080B94F6: 1188         ldrh r1,[r2,#0x0]
080B94F8: 0023         mov r3,#0x0
080B94FA: d05e         ldrsh r0,[r2,r3]
080B94FC: 0028         cmp r0,#0x0
080B94FE: 01d0         beq 0x080b9504
080B9500: 481e         sub r0,r1,#0x1
080B9502: 1080         strh r0,[r2,#0x0]
080B9504: 201c         add r0,r4,#0x0
080B9506: c6f7f1f9     bl 0x0807f8ec
080B950A: 10bc         pop {r4}
080B950C: 01bc         pop {r0}
080B950E: 0047         bx r0
