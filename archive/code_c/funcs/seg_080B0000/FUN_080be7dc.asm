; undefined FUN_080be7dc(void)
; entry 0x80be7dc  size 20 bytes

080BE7DC: 00b5         push {lr}
080BE7DE: 044a         ldr r2,[0x080be7f0]
080BE7E0: 017c         ldrb r1,[r0,#0x10]
080BE7E2: 8900         lsl r1,r1,#0x2
080BE7E4: 8918         add r1,r1,r2
080BE7E6: 0968         ldr r1,[r1,#0x0]
080BE7E8: 6af0cafb     bl 0x08128f80
080BE7EC: 01bc         pop {r0}
080BE7EE: 0047         bx r0
