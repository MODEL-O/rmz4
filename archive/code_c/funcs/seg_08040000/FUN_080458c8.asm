; undefined FUN_080458c8(void)
; entry 0x80458c8  size 20 bytes

080458C8: 00b5         push {lr}
080458CA: 044a         ldr r2,[0x080458dc]
080458CC: 017c         ldrb r1,[r0,#0x10]
080458CE: 8900         lsl r1,r1,#0x2
080458D0: 8918         add r1,r1,r2
080458D2: 0968         ldr r1,[r1,#0x0]
080458D4: e3f054fb     bl 0x08128f80
080458D8: 01bc         pop {r0}
080458DA: 0047         bx r0
