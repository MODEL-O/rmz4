; undefined FUN_08035a94(void)
; entry 0x8035a94  size 26 bytes

08035A94: 00b5         push {lr}
08035A96: 064a         ldr r2,[0x08035ab0]
08035A98: 8023         mov r3,#0x80
08035A9A: 5b00         lsl r3,r3,#0x1
08035A9C: c118         add r1,r0,r3
08035A9E: 0978         ldrb r1,[r1,#0x0]
08035AA0: 8900         lsl r1,r1,#0x2
08035AA2: 8918         add r1,r1,r2
08035AA4: 0968         ldr r1,[r1,#0x0]
08035AA6: f3f06bfa     bl 0x08128f80
08035AAA: 01bc         pop {r0}
08035AAC: 0047         bx r0
