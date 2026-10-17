; undefined FUN_08081c4c(void)
; entry 0x8081c4c  size 66 bytes

08081C4C: 10b5         push {r4,lr}
08081C4E: 011c         add r1,r0,#0x0
08081C50: 4a69         ldr r2,[r1,#0x14]
08081C52: 0120         mov r0,#0x1
08081C54: 1040         and r0,r2
08081C56: 0028         cmp r0,#0x0
08081C58: 16d0         beq 0x08081c88
08081C5A: cc6a         ldr r4,[r1,#0x2c]
08081C5C: 0c48         ldr r0,[0x08081c90]
08081C5E: 0168         ldr r1,[r0,#0x0]
08081C60: 8020         mov r0,#0x80
08081C62: 8000         lsl r0,r0,#0x2
08081C64: 1040         and r0,r2
08081C66: 0028         cmp r0,#0x0
08081C68: 0ed0         beq 0x08081c88
08081C6A: 8020         mov r0,#0x80
08081C6C: 8002         lsl r0,r0,#0xa
08081C6E: 0240         and r2,r0
08081C70: 002a         cmp r2,#0x0
08081C72: 09d0         beq 0x08081c88
08081C74: 0029         cmp r1,#0x0
08081C76: 07d0         beq 0x08081c88
08081C78: 081c         add r0,r1,#0x0
08081C7A: 0321         mov r1,#0x3
08081C7C: 0222         mov r2,#0x2
08081C7E: b8f77bfc     bl 0x0803a578
08081C82: 211c         add r1,r4,#0x0
08081C84: b631         add r1,#0xb6
08081C86: 0870         strb r0,[r1,#0x0]
08081C88: 10bc         pop {r4}
08081C8A: 01bc         pop {r0}
08081C8C: 0047         bx r0
