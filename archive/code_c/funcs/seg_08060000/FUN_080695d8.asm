; undefined FUN_080695d8(void)
; entry 0x80695d8  size 20 bytes

080695D8: 00b5         push {lr}
080695DA: 044a         ldr r2,[0x080695ec]
080695DC: 817b         ldrb r1,[r0,#0xe]
080695DE: 8900         lsl r1,r1,#0x2
080695E0: 8918         add r1,r1,r2
080695E2: 0968         ldr r1,[r1,#0x0]
080695E4: bff0ccfc     bl 0x08128f80
080695E8: 01bc         pop {r0}
080695EA: 0047         bx r0
