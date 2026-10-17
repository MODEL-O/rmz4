; undefined FUN_080a08dc(void)
; entry 0x80a08dc  size 20 bytes

080A08DC: 00b5         push {lr}
080A08DE: 044a         ldr r2,[0x080a08f0]
080A08E0: 017c         ldrb r1,[r0,#0x10]
080A08E2: 8900         lsl r1,r1,#0x2
080A08E4: 8918         add r1,r1,r2
080A08E6: 0968         ldr r1,[r1,#0x0]
080A08E8: 88f04afb     bl 0x08128f80
080A08EC: 01bc         pop {r0}
080A08EE: 0047         bx r0
