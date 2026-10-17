; undefined FUN_080c3464(void)
; entry 0x80c3464  size 30 bytes

080C3464: 00b5         push {lr}
080C3466: 021c         add r2,r0,#0x0
080C3468: 916a         ldr r1,[r2,#0x28]
080C346A: 087b         ldrb r0,[r1,#0xc]
080C346C: 0128         cmp r0,#0x1
080C346E: 03d8         bhi 0x080c3478
080C3470: b431         add r1,#0xb4
080C3472: 0878         ldrb r0,[r1,#0x0]
080C3474: 0138         sub r0,#0x1
080C3476: 0870         strb r0,[r1,#0x0]
080C3478: 101c         add r0,r2,#0x0
080C347A: f9f7bdff     bl 0x080bd3f8
080C347E: 01bc         pop {r0}
080C3480: 0047         bx r0
