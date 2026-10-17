; undefined FUN_080bf5e8(void)
; entry 0x80bf5e8  size 20 bytes

080BF5E8: 00b5         push {lr}
080BF5EA: 044a         ldr r2,[0x080bf5fc]
080BF5EC: 017c         ldrb r1,[r0,#0x10]
080BF5EE: 8900         lsl r1,r1,#0x2
080BF5F0: 8918         add r1,r1,r2
080BF5F2: 0968         ldr r1,[r1,#0x0]
080BF5F4: 69f0c4fc     bl 0x08128f80
080BF5F8: 01bc         pop {r0}
080BF5FA: 0047         bx r0
