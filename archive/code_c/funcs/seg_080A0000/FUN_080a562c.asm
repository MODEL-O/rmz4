; undefined FUN_080a562c(void)
; entry 0x80a562c  size 20 bytes

080A562C: 00b5         push {lr}
080A562E: 044a         ldr r2,[0x080a5640]
080A5630: 417b         ldrb r1,[r0,#0xd]
080A5632: 8900         lsl r1,r1,#0x2
080A5634: 8918         add r1,r1,r2
080A5636: 0968         ldr r1,[r1,#0x0]
080A5638: 83f0a2fc     bl 0x08128f80
080A563C: 01bc         pop {r0}
080A563E: 0047         bx r0
