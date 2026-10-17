; undefined FUN_080c4530(void)
; entry 0x80c4530  size 20 bytes

080C4530: 00b5         push {lr}
080C4532: 044a         ldr r2,[0x080c4544]
080C4534: 017c         ldrb r1,[r0,#0x10]
080C4536: 8900         lsl r1,r1,#0x2
080C4538: 8918         add r1,r1,r2
080C453A: 0968         ldr r1,[r1,#0x0]
080C453C: 64f020fd     bl 0x08128f80
080C4540: 01bc         pop {r0}
080C4542: 0047         bx r0
