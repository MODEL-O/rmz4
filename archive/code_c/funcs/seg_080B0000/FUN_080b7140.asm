; undefined FUN_080b7140(void)
; entry 0x80b7140  size 20 bytes

080B7140: 00b5         push {lr}
080B7142: 044a         ldr r2,[0x080b7154]
080B7144: 017c         ldrb r1,[r0,#0x10]
080B7146: 8900         lsl r1,r1,#0x2
080B7148: 8918         add r1,r1,r2
080B714A: 0968         ldr r1,[r1,#0x0]
080B714C: 71f018ff     bl 0x08128f80
080B7150: 01bc         pop {r0}
080B7152: 0047         bx r0
