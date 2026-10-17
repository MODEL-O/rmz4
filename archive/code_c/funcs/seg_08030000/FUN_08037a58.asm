; undefined FUN_08037a58(void)
; entry 0x8037a58  size 24 bytes

08037A58: 00b5         push {lr}
08037A5A: 054a         ldr r2,[0x08037a70]
08037A5C: 054b         ldr r3,[0x08037a74]
08037A5E: c118         add r1,r0,r3
08037A60: 0978         ldrb r1,[r1,#0x0]
08037A62: 8900         lsl r1,r1,#0x2
08037A64: 8918         add r1,r1,r2
08037A66: 0968         ldr r1,[r1,#0x0]
08037A68: f1f08afa     bl 0x08128f80
08037A6C: 01bc         pop {r0}
08037A6E: 0047         bx r0
