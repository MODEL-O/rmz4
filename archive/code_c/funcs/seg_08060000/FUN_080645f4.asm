; undefined FUN_080645f4(void)
; entry 0x80645f4  size 20 bytes

080645F4: 00b5         push {lr}
080645F6: 044a         ldr r2,[0x08064608]
080645F8: 817b         ldrb r1,[r0,#0xe]
080645FA: 8900         lsl r1,r1,#0x2
080645FC: 8918         add r1,r1,r2
080645FE: 0968         ldr r1,[r1,#0x0]
08064600: c4f0befc     bl 0x08128f80
08064604: 01bc         pop {r0}
08064606: 0047         bx r0
