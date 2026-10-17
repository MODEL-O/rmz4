; undefined FUN_08128bf8(void)
; entry 0x8128bf8  size 46 bytes

08128BF8: 00b5         push {lr}
08128BFA: 0004         lsl r0,r0,#0x10
08128BFC: 000c         lsr r0,r0,#0x10
08128BFE: 0022         mov r2,#0x0
08128C00: 0428         cmp r0,#0x4
08128C02: 07d1         bne 0x08128c14
08128C04: 0149         ldr r1,[0x08128c0c]
08128C06: 0248         ldr r0,[0x08128c10]
08128C08: 0860         str r0,[r1,#0x0]
08128C0A: 11e0         b 0x08128c30
08128C14: 4028         cmp r0,#0x40
08128C16: 07d1         bne 0x08128c28
08128C18: 0149         ldr r1,[0x08128c20]
08128C1A: 0248         ldr r0,[0x08128c24]
08128C1C: 0860         str r0,[r1,#0x0]
08128C1E: 07e0         b 0x08128c30
08128C28: 0349         ldr r1,[0x08128c38]
08128C2A: 0448         ldr r0,[0x08128c3c]
08128C2C: 0860         str r0,[r1,#0x0]
08128C2E: 0122         mov r2,#0x1
08128C30: 101c         add r0,r2,#0x0
08128C32: 02bc         pop {r1}
08128C34: 0847         bx r1
