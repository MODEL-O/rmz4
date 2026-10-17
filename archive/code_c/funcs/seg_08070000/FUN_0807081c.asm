; undefined FUN_0807081c(void)
; entry 0x807081c  size 20 bytes

0807081C: 00b5         push {lr}
0807081E: 044a         ldr r2,[0x08070830]
08070820: 817b         ldrb r1,[r0,#0xe]
08070822: 8900         lsl r1,r1,#0x2
08070824: 8918         add r1,r1,r2
08070826: 0968         ldr r1,[r1,#0x0]
08070828: b8f0aafb     bl 0x08128f80
0807082C: 01bc         pop {r0}
0807082E: 0047         bx r0
