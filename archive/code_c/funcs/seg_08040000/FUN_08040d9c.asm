; undefined FUN_08040d9c(void)
; entry 0x8040d9c  size 20 bytes

08040D9C: 00b5         push {lr}
08040D9E: 044a         ldr r2,[0x08040db0]
08040DA0: 017c         ldrb r1,[r0,#0x10]
08040DA2: 8900         lsl r1,r1,#0x2
08040DA4: 8918         add r1,r1,r2
08040DA6: 0968         ldr r1,[r1,#0x0]
08040DA8: e8f0eaf8     bl 0x08128f80
08040DAC: 01bc         pop {r0}
08040DAE: 0047         bx r0
