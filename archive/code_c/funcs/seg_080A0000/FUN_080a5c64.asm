; undefined FUN_080a5c64(void)
; entry 0x80a5c64  size 74 bytes

080A5C64: 10b5         push {r4,lr}
080A5C66: 041c         add r4,r0,#0x0
080A5C68: e07b         ldrb r0,[r4,#0xf]
080A5C6A: 0028         cmp r0,#0x0
080A5C6C: 0fd1         bne 0x080a5c8e
080A5C6E: 201c         add r0,r4,#0x0
080A5C70: 7430         add r0,#0x74
080A5C72: 0f49         ldr r1,[0x080a5cb0]
080A5C74: 5ff786fd     bl 0x08005784
080A5C78: 0e49         ldr r1,[0x080a5cb4]
080A5C7A: 201c         add r0,r4,#0x0
080A5C7C: 77f740f9     bl 0x0801cf00
080A5C80: 201c         add r0,r4,#0x0
080A5C82: 0521         mov r1,#0x5
080A5C84: 77f7a4fb     bl 0x0801d3d0
080A5C88: e07b         ldrb r0,[r4,#0xf]
080A5C8A: 0130         add r0,#0x1
080A5C8C: e073         strb r0,[r4,#0xf]
080A5C8E: 201c         add r0,r4,#0x0
080A5C90: 77f7aef9     bl 0x0801cff0
080A5C94: 201c         add r0,r4,#0x0
080A5C96: 7330         add r0,#0x73
080A5C98: 0078         ldrb r0,[r0,#0x0]
080A5C9A: 0328         cmp r0,#0x3
080A5C9C: 04d1         bne 0x080a5ca8
080A5C9E: 0021         mov r1,#0x0
080A5CA0: 0420         mov r0,#0x4
080A5CA2: 6073         strb r0,[r4,#0xd]
080A5CA4: a173         strb r1,[r4,#0xe]
080A5CA6: e173         strb r1,[r4,#0xf]
080A5CA8: 10bc         pop {r4}
080A5CAA: 01bc         pop {r0}
080A5CAC: 0047         bx r0
