; undefined FUN_08128aec(void)
; entry 0x8128aec  size 54 bytes

08128AEC: 10b5         push {r4,lr}
08128AEE: 0a6c         ldr r2,[r1,#0x40]
08128AF0: 0c48         ldr r0,[0x08128b24]
08128AF2: 0440         and r4,r0
08128AF4: 1078         ldrb r0,[r2,#0x0]
08128AF6: 0443         orr r4,r0
08128AF8: 5078         ldrb r0,[r2,#0x1]
08128AFA: 0302         lsl r3,r0,#0x8
08128AFC: 0a48         ldr r0,[0x08128b28]
08128AFE: 0440         and r4,r0
08128B00: 1c43         orr r4,r3
08128B02: 9078         ldrb r0,[r2,#0x2]
08128B04: 0304         lsl r3,r0,#0x10
08128B06: 0948         ldr r0,[0x08128b2c]
08128B08: 0440         and r4,r0
08128B0A: 1c43         orr r4,r3
08128B0C: d078         ldrb r0,[r2,#0x3]
08128B0E: 0306         lsl r3,r0,#0x18
08128B10: 0748         ldr r0,[0x08128b30]
08128B12: 0440         and r4,r0
08128B14: 1c43         orr r4,r3
08128B16: 8c62         str r4,[r1,#0x28]
08128B18: 0432         add r2,#0x4
08128B1A: 0a64         str r2,[r1,#0x40]
08128B1C: 10bc         pop {r4}
08128B1E: 01bc         pop {r0}
08128B20: 0047         bx r0
