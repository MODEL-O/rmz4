; undefined FUN_080352b8(void)
; entry 0x80352b8  size 26 bytes

080352B8: 00b5         push {lr}
080352BA: 064a         ldr r2,[0x080352d4]
080352BC: 8023         mov r3,#0x80
080352BE: 5b00         lsl r3,r3,#0x1
080352C0: c118         add r1,r0,r3
080352C2: 0978         ldrb r1,[r1,#0x0]
080352C4: 8900         lsl r1,r1,#0x2
080352C6: 8918         add r1,r1,r2
080352C8: 0968         ldr r1,[r1,#0x0]
080352CA: f3f059fe     bl 0x08128f80
080352CE: 01bc         pop {r0}
080352D0: 0047         bx r0
