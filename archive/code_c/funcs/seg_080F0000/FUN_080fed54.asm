; undefined FUN_080fed54(void)
; entry 0x80fed54  size 38 bytes

080FED54: 00b5         push {lr}
080FED56: c168         ldr r1,[r0,#0xc]
080FED58: ca6a         ldr r2,[r1,#0x2c]
080FED5A: 4069         ldr r0,[r0,#0x14]
080FED5C: 0421         mov r1,#0x4
080FED5E: 0840         and r0,r1
080FED60: 0028         cmp r0,#0x0
080FED62: 08d0         beq 0x080fed76
080FED64: 0820         mov r0,#0x8
080FED66: 1056         ldrsb r0,[r2,r0]
080FED68: 0028         cmp r0,#0x0
080FED6A: 04d1         bne 0x080fed76
080FED6C: de20         mov r0,#0xde
080FED6E: 4000         lsl r0,r0,#0x1
080FED70: 1118         add r1,r2,r0
080FED72: 0248         ldr r0,[0x080fed7c]
080FED74: 0860         str r0,[r1,#0x0]
080FED76: 01bc         pop {r0}
080FED78: 0047         bx r0
