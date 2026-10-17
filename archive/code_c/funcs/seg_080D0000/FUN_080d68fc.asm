; undefined FUN_080d68fc(void)
; entry 0x80d68fc  size 20 bytes

080D68FC: 00b5         push {lr}
080D68FE: 044a         ldr r2,[0x080d6910]
080D6900: 017c         ldrb r1,[r0,#0x10]
080D6902: 8900         lsl r1,r1,#0x2
080D6904: 8918         add r1,r1,r2
080D6906: 0968         ldr r1,[r1,#0x0]
080D6908: 52f03afb     bl 0x08128f80
080D690C: 01bc         pop {r0}
080D690E: 0047         bx r0
