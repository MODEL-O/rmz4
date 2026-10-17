; undefined FUN_080decc8(void)
; entry 0x80decc8  size 20 bytes

080DECC8: 00b5         push {lr}
080DECCA: 044a         ldr r2,[0x080decdc]
080DECCC: 017c         ldrb r1,[r0,#0x10]
080DECCE: 8900         lsl r1,r1,#0x2
080DECD0: 8918         add r1,r1,r2
080DECD2: 0968         ldr r1,[r1,#0x0]
080DECD4: 4af054f9     bl 0x08128f80
080DECD8: 01bc         pop {r0}
080DECDA: 0047         bx r0
