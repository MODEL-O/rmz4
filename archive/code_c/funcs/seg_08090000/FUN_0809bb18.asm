; undefined FUN_0809bb18(void)
; entry 0x809bb18  size 20 bytes

0809BB18: 00b5         push {lr}
0809BB1A: 044a         ldr r2,[0x0809bb2c]
0809BB1C: 017c         ldrb r1,[r0,#0x10]
0809BB1E: 8900         lsl r1,r1,#0x2
0809BB20: 8918         add r1,r1,r2
0809BB22: 0968         ldr r1,[r1,#0x0]
0809BB24: 8df02cfa     bl 0x08128f80
0809BB28: 01bc         pop {r0}
0809BB2A: 0047         bx r0
