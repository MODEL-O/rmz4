; undefined FUN_080ad468(void)
; entry 0x80ad468  size 20 bytes

080AD468: 00b5         push {lr}
080AD46A: 044a         ldr r2,[0x080ad47c]
080AD46C: 017c         ldrb r1,[r0,#0x10]
080AD46E: 8900         lsl r1,r1,#0x2
080AD470: 8918         add r1,r1,r2
080AD472: 0968         ldr r1,[r1,#0x0]
080AD474: 7bf084fd     bl 0x08128f80
080AD478: 01bc         pop {r0}
080AD47A: 0047         bx r0
