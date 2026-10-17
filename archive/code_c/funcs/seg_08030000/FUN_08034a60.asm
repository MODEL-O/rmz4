; undefined FUN_08034a60(void)
; entry 0x8034a60  size 26 bytes

08034A60: 00b5         push {lr}
08034A62: 064a         ldr r2,[0x08034a7c]
08034A64: 8023         mov r3,#0x80
08034A66: 5b00         lsl r3,r3,#0x1
08034A68: c118         add r1,r0,r3
08034A6A: 0978         ldrb r1,[r1,#0x0]
08034A6C: 8900         lsl r1,r1,#0x2
08034A6E: 8918         add r1,r1,r2
08034A70: 0968         ldr r1,[r1,#0x0]
08034A72: f4f085fa     bl 0x08128f80
08034A76: 01bc         pop {r0}
08034A78: 0047         bx r0
