; undefined FUN_080470f0(void)
; entry 0x80470f0  size 20 bytes

080470F0: 00b5         push {lr}
080470F2: 044a         ldr r2,[0x08047104]
080470F4: 017c         ldrb r1,[r0,#0x10]
080470F6: 8900         lsl r1,r1,#0x2
080470F8: 8918         add r1,r1,r2
080470FA: 0968         ldr r1,[r1,#0x0]
080470FC: e1f040ff     bl 0x08128f80
08047100: 01bc         pop {r0}
08047102: 0047         bx r0
