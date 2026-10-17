; undefined FUN_080da6ac(void)
; entry 0x80da6ac  size 20 bytes

080DA6AC: 00b5         push {lr}
080DA6AE: 044a         ldr r2,[0x080da6c0]
080DA6B0: 017c         ldrb r1,[r0,#0x10]
080DA6B2: 8900         lsl r1,r1,#0x2
080DA6B4: 8918         add r1,r1,r2
080DA6B6: 0968         ldr r1,[r1,#0x0]
080DA6B8: 4ef062fc     bl 0x08128f80
080DA6BC: 01bc         pop {r0}
080DA6BE: 0047         bx r0
