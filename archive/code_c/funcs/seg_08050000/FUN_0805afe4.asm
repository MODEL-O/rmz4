; undefined FUN_0805afe4(void)
; entry 0x805afe4  size 20 bytes

0805AFE4: 00b5         push {lr}
0805AFE6: 044a         ldr r2,[0x0805aff8]
0805AFE8: 817b         ldrb r1,[r0,#0xe]
0805AFEA: 8900         lsl r1,r1,#0x2
0805AFEC: 8918         add r1,r1,r2
0805AFEE: 0968         ldr r1,[r1,#0x0]
0805AFF0: cdf0c6ff     bl 0x08128f80
0805AFF4: 01bc         pop {r0}
0805AFF6: 0047         bx r0
