; undefined FUN_080c3004(void)
; entry 0x80c3004  size 30 bytes

080C3004: 00b5         push {lr}
080C3006: 021c         add r2,r0,#0x0
080C3008: 916a         ldr r1,[r2,#0x28]
080C300A: 087b         ldrb r0,[r1,#0xc]
080C300C: 0128         cmp r0,#0x1
080C300E: 03d8         bhi 0x080c3018
080C3010: b531         add r1,#0xb5
080C3012: 0878         ldrb r0,[r1,#0x0]
080C3014: 0138         sub r0,#0x1
080C3016: 0870         strb r0,[r1,#0x0]
080C3018: 101c         add r0,r2,#0x0
080C301A: faf7edf9     bl 0x080bd3f8
080C301E: 01bc         pop {r0}
080C3020: 0047         bx r0
