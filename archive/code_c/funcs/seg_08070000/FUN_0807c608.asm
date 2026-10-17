; undefined FUN_0807c608(void)
; entry 0x807c608  size 20 bytes

0807C608: 00b5         push {lr}
0807C60A: 044a         ldr r2,[0x0807c61c]
0807C60C: 817b         ldrb r1,[r0,#0xe]
0807C60E: 8900         lsl r1,r1,#0x2
0807C610: 8918         add r1,r1,r2
0807C612: 0968         ldr r1,[r1,#0x0]
0807C614: acf0b4fc     bl 0x08128f80
0807C618: 01bc         pop {r0}
0807C61A: 0047         bx r0
