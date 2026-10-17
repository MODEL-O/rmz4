; undefined FUN_08036f1c(void)
; entry 0x8036f1c  size 24 bytes

08036F1C: 00b5         push {lr}
08036F1E: 054a         ldr r2,[0x08036f34]
08036F20: 054b         ldr r3,[0x08036f38]
08036F22: c118         add r1,r0,r3
08036F24: 0978         ldrb r1,[r1,#0x0]
08036F26: 8900         lsl r1,r1,#0x2
08036F28: 8918         add r1,r1,r2
08036F2A: 0968         ldr r1,[r1,#0x0]
08036F2C: f2f028f8     bl 0x08128f80
08036F30: 01bc         pop {r0}
08036F32: 0047         bx r0
