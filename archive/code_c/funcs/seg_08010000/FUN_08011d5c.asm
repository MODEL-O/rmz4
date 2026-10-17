; undefined FUN_08011d5c(void)
; entry 0x8011d5c  size 54 bytes

08011D5C: 10b5         push {r4,lr}
08011D5E: 021c         add r2,r0,#0x0
08011D60: 0c48         ldr r0,[0x08011d94]
08011D62: 0d49         ldr r1,[0x08011d98]
08011D64: 4018         add r0,r0,r1
08011D66: 0178         ldrb r1,[r0,#0x0]
08011D68: 0f20         mov r0,#0xf
08011D6A: 0840         and r0,r1
08011D6C: 0328         cmp r0,#0x3
08011D6E: 0dd1         bne 0x08011d8c
08011D70: 101c         add r0,r2,#0x0
08011D72: 7830         add r0,#0x78
08011D74: 0024         mov r4,#0x0
08011D76: 0480         strh r4,[r0,#0x0]
08011D78: 7a20         mov r0,#0x7a
08011D7A: f0f7effe     bl 0x08002b5c
08011D7E: 0748         ldr r0,[0x08011d9c]
08011D80: 0480         strh r4,[r0,#0x0]
08011D82: 074a         ldr r2,[0x08011da0]
08011D84: 1188         ldrh r1,[r2,#0x0]
08011D86: 0748         ldr r0,[0x08011da4]
08011D88: 0840         and r0,r1
08011D8A: 1080         strh r0,[r2,#0x0]
08011D8C: 10bc         pop {r4}
08011D8E: 01bc         pop {r0}
08011D90: 0047         bx r0
