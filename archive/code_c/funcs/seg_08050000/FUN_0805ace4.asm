; undefined FUN_0805ace4(void)
; entry 0x805ace4  size 20 bytes

0805ACE4: 00b5         push {lr}
0805ACE6: 044a         ldr r2,[0x0805acf8]
0805ACE8: 817b         ldrb r1,[r0,#0xe]
0805ACEA: 8900         lsl r1,r1,#0x2
0805ACEC: 8918         add r1,r1,r2
0805ACEE: 0968         ldr r1,[r1,#0x0]
0805ACF0: cef046f9     bl 0x08128f80
0805ACF4: 01bc         pop {r0}
0805ACF6: 0047         bx r0
