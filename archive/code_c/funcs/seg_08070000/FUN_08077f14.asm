; undefined FUN_08077f14(void)
; entry 0x8077f14  size 64 bytes

08077F14: 30b5         push {r4,r5,lr}
08077F16: 847b         ldrb r4,[r0,#0xe]
08077F18: 021c         add r2,r0,#0x0
08077F1A: c832         add r2,#0xc8
08077F1C: 1168         ldr r1,[r2,#0x0]
08077F1E: b531         add r1,#0xb5
08077F20: 0025         mov r5,#0x0
08077F22: 0123         mov r3,#0x1
08077F24: 0b70         strb r3,[r1,#0x0]
08077F26: 1168         ldr r1,[r2,#0x0]
08077F28: b631         add r1,#0xb6
08077F2A: 0b70         strb r3,[r1,#0x0]
08077F2C: 0432         add r2,#0x4
08077F2E: 1168         ldr r1,[r2,#0x0]
08077F30: b631         add r1,#0xb6
08077F32: 0d70         strb r5,[r1,#0x0]
08077F34: 1168         ldr r1,[r2,#0x0]
08077F36: b931         add r1,#0xb9
08077F38: 0b70         strb r3,[r1,#0x0]
08077F3A: 0134         add r4,#0x1
08077F3C: 8473         strb r4,[r0,#0xe]
08077F3E: c573         strb r5,[r0,#0xf]
08077F40: 044a         ldr r2,[0x08077f54]
08077F42: 417b         ldrb r1,[r0,#0xd]
08077F44: 8900         lsl r1,r1,#0x2
08077F46: 8918         add r1,r1,r2
08077F48: 0968         ldr r1,[r1,#0x0]
08077F4A: b1f019f8     bl 0x08128f80
08077F4E: 30bc         pop {r4,r5}
08077F50: 01bc         pop {r0}
08077F52: 0047         bx r0
