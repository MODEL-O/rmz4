; undefined FUN_08126ef0(void)
; entry 0x8126ef0  size 46 bytes

08126EF0: 30b5         push {r4,r5,lr}
08126EF2: 0d1c         add r5,r1,#0x0
08126EF4: 2c6a         ldr r4,[r5,#0x20]
08126EF6: 002c         cmp r4,#0x0
08126EF8: 0cd0         beq 0x08126f14
08126EFA: 2178         ldrb r1,[r4,#0x0]
08126EFC: c720         mov r0,#0xc7
08126EFE: 0842         tst r0,r1
08126F00: 02d0         beq 0x08126f08
08126F02: 4020         mov r0,#0x40
08126F04: 0143         orr r1,r0
08126F06: 2170         strb r1,[r4,#0x0]
08126F08: 201c         add r0,r4,#0x0
08126F0A: fff7e1ff     bl 0x08126ed0
08126F0E: 646b         ldr r4,[r4,#0x34]
08126F10: 002c         cmp r4,#0x0
08126F12: f2d1         bne 0x08126efa
08126F14: 0020         mov r0,#0x0
08126F16: 2870         strb r0,[r5,#0x0]
08126F18: 30bc         pop {r4,r5}
08126F1A: 01bc         pop {r0}
08126F1C: 0047         bx r0
