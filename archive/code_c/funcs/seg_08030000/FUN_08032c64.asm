; undefined FUN_08032c64(void)
; entry 0x8032c64  size 62 bytes

08032C64: 10b5         push {r4,lr}
08032C66: 041c         add r4,r0,#0x0
08032C68: 0e49         ldr r1,[0x08032ca4]
08032C6A: 0122         mov r2,#0x1
08032C6C: 0323         mov r3,#0x3
08032C6E: eaf7abf9     bl 0x0801cfc8
08032C72: 221c         add r2,r4,#0x0
08032C74: b432         add r2,#0xb4
08032C76: 0c48         ldr r0,[0x08032ca8]
08032C78: 2118         add r1,r4,r0
08032C7A: 0023         mov r3,#0x0
08032C7C: 3c20         mov r0,#0x3c
08032C7E: 0870         strb r0,[r1,#0x0]
08032C80: 0a48         ldr r0,[0x08032cac]
08032C82: 2066         str r0,[r4,#0x60]
08032C84: 9366         str r3,[r2,#0x68]
08032C86: 516d         ldr r1,[r2,#0x54]
08032C88: 0029         cmp r1,#0x0
08032C8A: 02d0         beq 0x08032c92
08032C8C: 0120         mov r0,#0x1
08032C8E: 4874         strb r0,[r1,#0x11]
08032C90: 5365         str r3,[r2,#0x54]
08032C92: 0120         mov r0,#0x1
08032C94: a073         strb r0,[r4,#0xe]
08032C96: 201c         add r0,r4,#0x0
08032C98: 00f00af8     bl 0x08032cb0
08032C9C: 10bc         pop {r4}
08032C9E: 01bc         pop {r0}
08032CA0: 0047         bx r0
