; undefined FUN_080c0a5c(void)
; entry 0x80c0a5c  size 40 bytes

080C0A5C: 10b5         push {r4,lr}
080C0A5E: 041c         add r4,r0,#0x0
080C0A60: e07b         ldrb r0,[r4,#0xf]
080C0A62: 0028         cmp r0,#0x0
080C0A64: 0bd1         bne 0x080c0a7e
080C0A66: 201c         add r0,r4,#0x0
080C0A68: 7430         add r0,#0x74
080C0A6A: 0649         ldr r1,[0x080c0a84]
080C0A6C: 44f78afe     bl 0x08005784
080C0A70: a17a         ldrb r1,[r4,#0xa]
080C0A72: fe20         mov r0,#0xfe
080C0A74: 0840         and r0,r1
080C0A76: a072         strb r0,[r4,#0xa]
080C0A78: e07b         ldrb r0,[r4,#0xf]
080C0A7A: 0130         add r0,#0x1
080C0A7C: e073         strb r0,[r4,#0xf]
080C0A7E: 10bc         pop {r4}
080C0A80: 01bc         pop {r0}
080C0A82: 0047         bx r0
