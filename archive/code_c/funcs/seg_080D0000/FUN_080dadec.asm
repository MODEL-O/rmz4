; undefined FUN_080dadec(void)
; entry 0x80dadec  size 20 bytes

080DADEC: 00b5         push {lr}
080DADEE: 044a         ldr r2,[0x080dae00]
080DADF0: 017c         ldrb r1,[r0,#0x10]
080DADF2: 8900         lsl r1,r1,#0x2
080DADF4: 8918         add r1,r1,r2
080DADF6: 0968         ldr r1,[r1,#0x0]
080DADF8: 4ef0c2f8     bl 0x08128f80
080DADFC: 01bc         pop {r0}
080DADFE: 0047         bx r0
