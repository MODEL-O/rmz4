; undefined FUN_080db8d8(void)
; entry 0x80db8d8  size 20 bytes

080DB8D8: 00b5         push {lr}
080DB8DA: 044a         ldr r2,[0x080db8ec]
080DB8DC: 017c         ldrb r1,[r0,#0x10]
080DB8DE: 8900         lsl r1,r1,#0x2
080DB8E0: 8918         add r1,r1,r2
080DB8E2: 0968         ldr r1,[r1,#0x0]
080DB8E4: 4df04cfb     bl 0x08128f80
080DB8E8: 01bc         pop {r0}
080DB8EA: 0047         bx r0
