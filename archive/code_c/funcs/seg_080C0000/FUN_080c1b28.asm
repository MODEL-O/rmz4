; undefined FUN_080c1b28(void)
; entry 0x80c1b28  size 70 bytes

080C1B28: 30b5         push {r4,r5,lr}
080C1B2A: 051c         add r5,r0,#0x0
080C1B2C: 1048         ldr r0,[0x080c1b70]
080C1B2E: 0068         ldr r0,[r0,#0x0]
080C1B30: 43f7e6fc     bl 0x08005500
080C1B34: 041c         add r4,r0,#0x0
080C1B36: 002c         cmp r4,#0x0
080C1B38: 16d0         beq 0x080c1b68
080C1B3A: 211c         add r1,r4,#0x0
080C1B3C: 2531         add r1,#0x25
080C1B3E: 0023         mov r3,#0x0
080C1B40: 0820         mov r0,#0x8
080C1B42: 0870         strb r0,[r1,#0x0]
080C1B44: 0b49         ldr r1,[0x080c1b74]
080C1B46: 0e20         mov r0,#0xe
080C1B48: 6072         strb r0,[r4,#0x9]
080C1B4A: 886b         ldr r0,[r1,#0x38]
080C1B4C: 0068         ldr r0,[r0,#0x0]
080C1B4E: 6061         str r0,[r4,#0x14]
080C1B50: 0022         mov r2,#0x0
080C1B52: 2384         strh r3,[r4,#0x20]
080C1B54: 201c         add r0,r4,#0x0
080C1B56: 2230         add r0,#0x22
080C1B58: 0270         strb r2,[r0,#0x0]
080C1B5A: 2868         ldr r0,[r5,#0x0]
080C1B5C: 6968         ldr r1,[r5,#0x4]
080C1B5E: 6065         str r0,[r4,#0x54]
080C1B60: a165         str r1,[r4,#0x58]
080C1B62: 0320         mov r0,#0x3
080C1B64: 2074         strb r0,[r4,#0x10]
080C1B66: 6274         strb r2,[r4,#0x11]
080C1B68: 30bc         pop {r4,r5}
080C1B6A: 01bc         pop {r0}
080C1B6C: 0047         bx r0
