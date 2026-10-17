; undefined FUN_080c839c(void)
; entry 0x80c839c  size 28 bytes

080C839C: 00b5         push {lr}
080C839E: 021c         add r2,r0,#0x0
080C83A0: 916a         ldr r1,[r2,#0x28]
080C83A2: 0029         cmp r1,#0x0
080C83A4: 03d0         beq 0x080c83ae
080C83A6: b431         add r1,#0xb4
080C83A8: 0878         ldrb r0,[r1,#0x0]
080C83AA: 0138         sub r0,#0x1
080C83AC: 0870         strb r0,[r1,#0x0]
080C83AE: 101c         add r0,r2,#0x0
080C83B0: f5f722f8     bl 0x080bd3f8
080C83B4: 01bc         pop {r0}
080C83B6: 0047         bx r0
