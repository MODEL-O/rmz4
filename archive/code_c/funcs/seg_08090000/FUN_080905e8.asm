; undefined FUN_080905e8(void)
; entry 0x80905e8  size 20 bytes

080905E8: 00b5         push {lr}
080905EA: 044a         ldr r2,[0x080905fc]
080905EC: 017c         ldrb r1,[r0,#0x10]
080905EE: 8900         lsl r1,r1,#0x2
080905F0: 8918         add r1,r1,r2
080905F2: 0968         ldr r1,[r1,#0x0]
080905F4: 98f0c4fc     bl 0x08128f80
080905F8: 01bc         pop {r0}
080905FA: 0047         bx r0
