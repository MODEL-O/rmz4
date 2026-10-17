; undefined FUN_080a32cc(void)
; entry 0x80a32cc  size 20 bytes

080A32CC: 00b5         push {lr}
080A32CE: 044a         ldr r2,[0x080a32e0]
080A32D0: 017c         ldrb r1,[r0,#0x10]
080A32D2: 8900         lsl r1,r1,#0x2
080A32D4: 8918         add r1,r1,r2
080A32D6: 0968         ldr r1,[r1,#0x0]
080A32D8: 85f052fe     bl 0x08128f80
080A32DC: 01bc         pop {r0}
080A32DE: 0047         bx r0
