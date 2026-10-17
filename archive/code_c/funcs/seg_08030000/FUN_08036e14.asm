; undefined FUN_08036e14(void)
; entry 0x8036e14  size 26 bytes

08036E14: 00b5         push {lr}
08036E16: 064a         ldr r2,[0x08036e30]
08036E18: 8023         mov r3,#0x80
08036E1A: 5b00         lsl r3,r3,#0x1
08036E1C: c118         add r1,r0,r3
08036E1E: 0978         ldrb r1,[r1,#0x0]
08036E20: 8900         lsl r1,r1,#0x2
08036E22: 8918         add r1,r1,r2
08036E24: 0968         ldr r1,[r1,#0x0]
08036E26: f2f0abf8     bl 0x08128f80
08036E2A: 01bc         pop {r0}
08036E2C: 0047         bx r0
