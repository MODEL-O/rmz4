; undefined FUN_080fac64(void)
; entry 0x80fac64  size 56 bytes

080FAC64: 00b5         push {lr}
080FAC66: 021c         add r2,r0,#0x0
080FAC68: 5069         ldr r0,[r2,#0x14]
080FAC6A: 0121         mov r1,#0x1
080FAC6C: 0840         and r0,r1
080FAC6E: 0028         cmp r0,#0x0
080FAC70: 12d0         beq 0x080fac98
080FAC72: d068         ldr r0,[r2,#0xc]
080FAC74: c16a         ldr r1,[r0,#0x2c]
080FAC76: d26a         ldr r2,[r2,#0x2c]
080FAC78: 0820         mov r0,#0x8
080FAC7A: 0856         ldrsb r0,[r1,r0]
080FAC7C: 0328         cmp r0,#0x3
080FAC7E: 0bd1         bne 0x080fac98
080FAC80: 487a         ldrb r0,[r1,#0x9]
080FAC82: 4228         cmp r0,#0x42
080FAC84: 08d1         bne 0x080fac98
080FAC86: 0549         ldr r1,[0x080fac9c]
080FAC88: 507a         ldrb r0,[r2,#0x9]
080FAC8A: 8000         lsl r0,r0,#0x2
080FAC8C: 4018         add r0,r0,r1
080FAC8E: 0221         mov r1,#0x2
080FAC90: d160         str r1,[r2,#0xc]
080FAC92: 0068         ldr r0,[r0,#0x0]
080FAC94: 8068         ldr r0,[r0,#0x8]
080FAC96: 5061         str r0,[r2,#0x14]
080FAC98: 01bc         pop {r0}
080FAC9A: 0047         bx r0
