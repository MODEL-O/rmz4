; undefined FUN_080962d0(void)
; entry 0x80962d0  size 30 bytes

080962D0: 00b5         push {lr}
080962D2: 021c         add r2,r0,#0x0
080962D4: 916a         ldr r1,[r2,#0x28]
080962D6: 087b         ldrb r0,[r1,#0xc]
080962D8: 0128         cmp r0,#0x1
080962DA: 03d8         bhi 0x080962e4
080962DC: b431         add r1,#0xb4
080962DE: 0878         ldrb r0,[r1,#0x0]
080962E0: 0138         sub r0,#0x1
080962E2: 0870         strb r0,[r1,#0x0]
080962E4: 101c         add r0,r2,#0x0
080962E6: e9f701fb     bl 0x0807f8ec
080962EA: 01bc         pop {r0}
080962EC: 0047         bx r0
