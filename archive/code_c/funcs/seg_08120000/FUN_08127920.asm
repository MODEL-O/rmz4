; undefined FUN_08127920(void)
; entry 0x8127920  size 36 bytes

08127920: 30b5         push {r4,r5,lr}
08127922: 0848         ldr r0,[0x08127944]
08127924: 0004         lsl r0,r0,#0x10
08127926: 000c         lsr r0,r0,#0x10
08127928: 0028         cmp r0,#0x0
0812792A: 08d0         beq 0x0812793e
0812792C: 064d         ldr r5,[0x08127948]
0812792E: 041c         add r4,r0,#0x0
08127930: 2868         ldr r0,[r5,#0x0]
08127932: fff7dffe     bl 0x081276f4
08127936: 0c35         add r5,#0xc
08127938: 013c         sub r4,#0x1
0812793A: 002c         cmp r4,#0x0
0812793C: f8d1         bne 0x08127930
0812793E: 30bc         pop {r4,r5}
08127940: 01bc         pop {r0}
08127942: 0047         bx r0
