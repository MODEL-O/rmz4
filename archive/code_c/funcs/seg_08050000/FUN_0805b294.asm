; undefined FUN_0805b294(void)
; entry 0x805b294  size 20 bytes

0805B294: 00b5         push {lr}
0805B296: 044a         ldr r2,[0x0805b2a8]
0805B298: 817b         ldrb r1,[r0,#0xe]
0805B29A: 8900         lsl r1,r1,#0x2
0805B29C: 8918         add r1,r1,r2
0805B29E: 0968         ldr r1,[r1,#0x0]
0805B2A0: cdf06efe     bl 0x08128f80
0805B2A4: 01bc         pop {r0}
0805B2A6: 0047         bx r0
