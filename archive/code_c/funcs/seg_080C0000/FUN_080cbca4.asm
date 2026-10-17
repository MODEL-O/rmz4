; undefined FUN_080cbca4(void)
; entry 0x80cbca4  size 52 bytes

080CBCA4: 00b5         push {lr}
080CBCA6: 021c         add r2,r0,#0x0
080CBCA8: 906a         ldr r0,[r2,#0x28]
080CBCAA: c830         add r0,#0xc8
080CBCAC: 0078         ldrb r0,[r0,#0x0]
080CBCAE: 0028         cmp r0,#0x0
080CBCB0: 0ad0         beq 0x080cbcc8
080CBCB2: 507b         ldrb r0,[r2,#0xd]
080CBCB4: 0028         cmp r0,#0x0
080CBCB6: 07d0         beq 0x080cbcc8
080CBCB8: 101c         add r0,r2,#0x0
080CBCBA: 7430         add r0,#0x74
080CBCBC: 0149         ldr r1,[0x080cbcc4]
080CBCBE: 39f761fd     bl 0x08005784
080CBCC2: 09e0         b 0x080cbcd8
080CBCC8: 0448         ldr r0,[0x080cbcdc]
080CBCCA: 517b         ldrb r1,[r2,#0xd]
080CBCCC: 8900         lsl r1,r1,#0x2
080CBCCE: 0918         add r1,r1,r0
080CBCD0: 0968         ldr r1,[r1,#0x0]
080CBCD2: 101c         add r0,r2,#0x0
080CBCD4: 5df054f9     bl 0x08128f80
080CBCD8: 01bc         pop {r0}
080CBCDA: 0047         bx r0
