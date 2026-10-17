; undefined FUN_0804c770(void)
; entry 0x804c770  size 20 bytes

0804C770: 00b5         push {lr}
0804C772: 044a         ldr r2,[0x0804c784]
0804C774: 017c         ldrb r1,[r0,#0x10]
0804C776: 8900         lsl r1,r1,#0x2
0804C778: 8918         add r1,r1,r2
0804C77A: 0968         ldr r1,[r1,#0x0]
0804C77C: dcf000fc     bl 0x08128f80
0804C780: 01bc         pop {r0}
0804C782: 0047         bx r0
