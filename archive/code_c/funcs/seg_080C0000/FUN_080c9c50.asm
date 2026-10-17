; undefined FUN_080c9c50(void)
; entry 0x80c9c50  size 62 bytes

080C9C50: 10b5         push {r4,lr}
080C9C52: 041c         add r4,r0,#0x0
080C9C54: 53f722f8     bl 0x0801cc9c
080C9C58: a17a         ldrb r1,[r4,#0xa]
080C9C5A: 0220         mov r0,#0x2
080C9C5C: 0843         orr r0,r1
080C9C5E: a072         strb r0,[r4,#0xa]
080C9C60: 0b49         ldr r1,[0x080c9c90]
080C9C62: 607a         ldrb r0,[r4,#0x9]
080C9C64: 8000         lsl r0,r0,#0x2
080C9C66: 4018         add r0,r0,r1
080C9C68: 0121         mov r1,#0x1
080C9C6A: e160         str r1,[r4,#0xc]
080C9C6C: 0068         ldr r0,[r0,#0x0]
080C9C6E: 4068         ldr r0,[r0,#0x4]
080C9C70: 6061         str r0,[r4,#0x14]
080C9C72: 0849         ldr r1,[0x080c9c94]
080C9C74: 207c         ldrb r0,[r4,#0x10]
080C9C76: 8000         lsl r0,r0,#0x2
080C9C78: 4018         add r0,r0,r1
080C9C7A: 0168         ldr r1,[r0,#0x0]
080C9C7C: 201c         add r0,r4,#0x0
080C9C7E: 5ff07ff9     bl 0x08128f80
080C9C82: 201c         add r0,r4,#0x0
080C9C84: 00f008f8     bl 0x080c9c98
080C9C88: 10bc         pop {r4}
080C9C8A: 01bc         pop {r0}
080C9C8C: 0047         bx r0
