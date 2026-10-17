; undefined FUN_080acc90(void)
; entry 0x80acc90  size 20 bytes

080ACC90: 00b5         push {lr}
080ACC92: 044a         ldr r2,[0x080acca4]
080ACC94: 017c         ldrb r1,[r0,#0x10]
080ACC96: 8900         lsl r1,r1,#0x2
080ACC98: 8918         add r1,r1,r2
080ACC9A: 0968         ldr r1,[r1,#0x0]
080ACC9C: 7cf070f9     bl 0x08128f80
080ACCA0: 01bc         pop {r0}
080ACCA2: 0047         bx r0
