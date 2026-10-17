; undefined FUN_080c5fa4(void)
; entry 0x80c5fa4  size 20 bytes

080C5FA4: 00b5         push {lr}
080C5FA6: 826a         ldr r2,[r0,#0x28]
080C5FA8: b432         add r2,#0xb4
080C5FAA: 1188         ldrh r1,[r2,#0x0]
080C5FAC: 0139         sub r1,#0x1
080C5FAE: 1180         strh r1,[r2,#0x0]
080C5FB0: f7f722fa     bl 0x080bd3f8
080C5FB4: 01bc         pop {r0}
080C5FB6: 0047         bx r0
