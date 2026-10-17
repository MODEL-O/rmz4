; undefined FUN_080da7cc(void)
; entry 0x80da7cc  size 20 bytes

080DA7CC: 00b5         push {lr}
080DA7CE: 044a         ldr r2,[0x080da7e0]
080DA7D0: 017c         ldrb r1,[r0,#0x10]
080DA7D2: 8900         lsl r1,r1,#0x2
080DA7D4: 8918         add r1,r1,r2
080DA7D6: 0968         ldr r1,[r1,#0x0]
080DA7D8: 4ef0d2fb     bl 0x08128f80
080DA7DC: 01bc         pop {r0}
080DA7DE: 0047         bx r0
