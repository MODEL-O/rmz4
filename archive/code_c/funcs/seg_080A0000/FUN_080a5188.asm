; undefined FUN_080a5188(void)
; entry 0x80a5188  size 20 bytes

080A5188: 00b5         push {lr}
080A518A: 044a         ldr r2,[0x080a519c]
080A518C: 017c         ldrb r1,[r0,#0x10]
080A518E: 8900         lsl r1,r1,#0x2
080A5190: 8918         add r1,r1,r2
080A5192: 0968         ldr r1,[r1,#0x0]
080A5194: 83f0f4fe     bl 0x08128f80
080A5198: 01bc         pop {r0}
080A519A: 0047         bx r0
