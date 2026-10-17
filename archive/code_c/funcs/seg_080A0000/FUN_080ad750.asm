; undefined FUN_080ad750(void)
; entry 0x80ad750  size 20 bytes

080AD750: 00b5         push {lr}
080AD752: 044a         ldr r2,[0x080ad764]
080AD754: 017c         ldrb r1,[r0,#0x10]
080AD756: 8900         lsl r1,r1,#0x2
080AD758: 8918         add r1,r1,r2
080AD75A: 0968         ldr r1,[r1,#0x0]
080AD75C: 7bf010fc     bl 0x08128f80
080AD760: 01bc         pop {r0}
080AD762: 0047         bx r0
