; undefined FUN_080fa140(void)
; entry 0x80fa140  size 20 bytes

080FA140: 00b5         push {lr}
080FA142: 044a         ldr r2,[0x080fa154]
080FA144: 017c         ldrb r1,[r0,#0x10]
080FA146: 8900         lsl r1,r1,#0x2
080FA148: 8918         add r1,r1,r2
080FA14A: 0968         ldr r1,[r1,#0x0]
080FA14C: 2ef018ff     bl 0x08128f80
080FA150: 01bc         pop {r0}
080FA152: 0047         bx r0
