; undefined FUN_080cc0bc(void)
; entry 0x80cc0bc  size 20 bytes

080CC0BC: 00b5         push {lr}
080CC0BE: 044a         ldr r2,[0x080cc0d0]
080CC0C0: 017c         ldrb r1,[r0,#0x10]
080CC0C2: 8900         lsl r1,r1,#0x2
080CC0C4: 8918         add r1,r1,r2
080CC0C6: 0968         ldr r1,[r1,#0x0]
080CC0C8: 5cf05aff     bl 0x08128f80
080CC0CC: 01bc         pop {r0}
080CC0CE: 0047         bx r0
