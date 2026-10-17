; undefined FUN_080cc0a4(void)
; entry 0x80cc0a4  size 20 bytes

080CC0A4: 00b5         push {lr}
080CC0A6: 044a         ldr r2,[0x080cc0b8]
080CC0A8: 017c         ldrb r1,[r0,#0x10]
080CC0AA: 8900         lsl r1,r1,#0x2
080CC0AC: 8918         add r1,r1,r2
080CC0AE: 0968         ldr r1,[r1,#0x0]
080CC0B0: 5cf066ff     bl 0x08128f80
080CC0B4: 01bc         pop {r0}
080CC0B6: 0047         bx r0
