; undefined FUN_0805ca10(void)
; entry 0x805ca10  size 20 bytes

0805CA10: 00b5         push {lr}
0805CA12: 044a         ldr r2,[0x0805ca24]
0805CA14: 817b         ldrb r1,[r0,#0xe]
0805CA16: 8900         lsl r1,r1,#0x2
0805CA18: 8918         add r1,r1,r2
0805CA1A: 0968         ldr r1,[r1,#0x0]
0805CA1C: ccf0b0fa     bl 0x08128f80
0805CA20: 01bc         pop {r0}
0805CA22: 0047         bx r0
