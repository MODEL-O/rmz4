; undefined FUN_080c56d4(void)
; entry 0x80c56d4  size 20 bytes

080C56D4: 00b5         push {lr}
080C56D6: 044a         ldr r2,[0x080c56e8]
080C56D8: 017c         ldrb r1,[r0,#0x10]
080C56DA: 8900         lsl r1,r1,#0x2
080C56DC: 8918         add r1,r1,r2
080C56DE: 0968         ldr r1,[r1,#0x0]
080C56E0: 63f04efc     bl 0x08128f80
080C56E4: 01bc         pop {r0}
080C56E6: 0047         bx r0
