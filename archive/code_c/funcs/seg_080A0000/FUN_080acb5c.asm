; undefined FUN_080acb5c(void)
; entry 0x80acb5c  size 50 bytes

080ACB5C: 00b5         push {lr}
080ACB5E: 021c         add r2,r0,#0x0
080ACB60: b830         add r0,#0xb8
080ACB62: 0078         ldrb r0,[r0,#0x0]
080ACB64: 0028         cmp r0,#0x0
080ACB66: 10d0         beq 0x080acb8a
080ACB68: 111c         add r1,r2,#0x0
080ACB6A: b731         add r1,#0xb7
080ACB6C: 0878         ldrb r0,[r1,#0x0]
080ACB6E: 0130         add r0,#0x1
080ACB70: 0870         strb r0,[r1,#0x0]
080ACB72: 0321         mov r1,#0x3
080ACB74: 0840         and r0,r1
080ACB76: 0028         cmp r0,#0x0
080ACB78: 03d0         beq 0x080acb82
080ACB7A: 907a         ldrb r0,[r2,#0xa]
080ACB7C: 0121         mov r1,#0x1
080ACB7E: 0843         orr r0,r1
080ACB80: 02e0         b 0x080acb88
080ACB82: 917a         ldrb r1,[r2,#0xa]
080ACB84: fe20         mov r0,#0xfe
080ACB86: 0840         and r0,r1
080ACB88: 9072         strb r0,[r2,#0xa]
080ACB8A: 01bc         pop {r0}
080ACB8C: 0047         bx r0
