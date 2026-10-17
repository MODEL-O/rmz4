; undefined FUN_080e8c44(void)
; entry 0x80e8c44  size 70 bytes

080E8C44: 10b5         push {r4,lr}
080E8C46: 041c         add r4,r0,#0x0
080E8C48: 1048         ldr r0,[0x080e8c8c]
080E8C4A: 0068         ldr r0,[r0,#0x0]
080E8C4C: 1cf758fc     bl 0x08005500
080E8C50: 031c         add r3,r0,#0x0
080E8C52: 002b         cmp r3,#0x0
080E8C54: 15d0         beq 0x080e8c82
080E8C56: 191c         add r1,r3,#0x0
080E8C58: 2531         add r1,#0x25
080E8C5A: 0022         mov r2,#0x0
080E8C5C: 0120         mov r0,#0x1
080E8C5E: 0870         strb r0,[r1,#0x0]
080E8C60: 0b48         ldr r0,[0x080e8c90]
080E8C62: 5b21         mov r1,#0x5b
080E8C64: 5972         strb r1,[r3,#0x9]
080E8C66: b621         mov r1,#0xb6
080E8C68: 4900         lsl r1,r1,#0x1
080E8C6A: 4018         add r0,r0,r1
080E8C6C: 0068         ldr r0,[r0,#0x0]
080E8C6E: 0068         ldr r0,[r0,#0x0]
080E8C70: 5861         str r0,[r3,#0x14]
080E8C72: 0020         mov r0,#0x0
080E8C74: 1a84         strh r2,[r3,#0x20]
080E8C76: 191c         add r1,r3,#0x0
080E8C78: 2231         add r1,#0x22
080E8C7A: 0870         strb r0,[r1,#0x0]
080E8C7C: 1874         strb r0,[r3,#0x10]
080E8C7E: 5874         strb r0,[r3,#0x11]
080E8C80: 9c62         str r4,[r3,#0x28]
080E8C82: 181c         add r0,r3,#0x0
080E8C84: 10bc         pop {r4}
080E8C86: 02bc         pop {r1}
080E8C88: 0847         bx r1
