; undefined FUN_080962ac(void)
; entry 0x80962ac  size 20 bytes

080962AC: 00b5         push {lr}
080962AE: 044a         ldr r2,[0x080962c0]
080962B0: 017c         ldrb r1,[r0,#0x10]
080962B2: 8900         lsl r1,r1,#0x2
080962B4: 8918         add r1,r1,r2
080962B6: 0968         ldr r1,[r1,#0x0]
080962B8: 92f062fe     bl 0x08128f80
080962BC: 01bc         pop {r0}
080962BE: 0047         bx r0
