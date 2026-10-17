; undefined FUN_080d6edc(void)
; entry 0x80d6edc  size 20 bytes

080D6EDC: 00b5         push {lr}
080D6EDE: 044a         ldr r2,[0x080d6ef0]
080D6EE0: 017c         ldrb r1,[r0,#0x10]
080D6EE2: 8900         lsl r1,r1,#0x2
080D6EE4: 8918         add r1,r1,r2
080D6EE6: 0968         ldr r1,[r1,#0x0]
080D6EE8: 52f04af8     bl 0x08128f80
080D6EEC: 01bc         pop {r0}
080D6EEE: 0047         bx r0
