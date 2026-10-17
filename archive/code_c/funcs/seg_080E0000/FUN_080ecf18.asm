; undefined FUN_080ecf18(void)
; entry 0x80ecf18  size 46 bytes

080ECF18: 00b5         push {lr}
080ECF1A: 011c         add r1,r0,#0x0
080ECF1C: 0548         ldr r0,[0x080ecf34]
080ECF1E: 064a         ldr r2,[0x080ecf38]
080ECF20: 8018         add r0,r0,r2
080ECF22: 0078         ldrb r0,[r0,#0x0]
080ECF24: 0028         cmp r0,#0x0
080ECF26: 0bd1         bne 0x080ecf40
080ECF28: 081c         add r0,r1,#0x0
080ECF2A: 7430         add r0,#0x74
080ECF2C: 0349         ldr r1,[0x080ecf3c]
080ECF2E: 18f729fc     bl 0x08005784
080ECF32: 0ce0         b 0x080ecf4e
080ECF40: 6028         cmp r0,#0x60
080ECF42: 04d1         bne 0x080ecf4e
080ECF44: 081c         add r0,r1,#0x0
080ECF46: 7430         add r0,#0x74
080ECF48: 0249         ldr r1,[0x080ecf54]
080ECF4A: 18f71bfc     bl 0x08005784
080ECF4E: 01bc         pop {r0}
080ECF50: 0047         bx r0
