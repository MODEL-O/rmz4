; undefined FUN_08077b5c(void)
; entry 0x8077b5c  size 64 bytes

08077B5C: 30b5         push {r4,r5,lr}
08077B5E: 847b         ldrb r4,[r0,#0xe]
08077B60: 021c         add r2,r0,#0x0
08077B62: c832         add r2,#0xc8
08077B64: 1168         ldr r1,[r2,#0x0]
08077B66: b531         add r1,#0xb5
08077B68: 0025         mov r5,#0x0
08077B6A: 0123         mov r3,#0x1
08077B6C: 0b70         strb r3,[r1,#0x0]
08077B6E: 1168         ldr r1,[r2,#0x0]
08077B70: b631         add r1,#0xb6
08077B72: 0b70         strb r3,[r1,#0x0]
08077B74: 0432         add r2,#0x4
08077B76: 1168         ldr r1,[r2,#0x0]
08077B78: b631         add r1,#0xb6
08077B7A: 0d70         strb r5,[r1,#0x0]
08077B7C: 1168         ldr r1,[r2,#0x0]
08077B7E: b931         add r1,#0xb9
08077B80: 0b70         strb r3,[r1,#0x0]
08077B82: 0134         add r4,#0x1
08077B84: 8473         strb r4,[r0,#0xe]
08077B86: c573         strb r5,[r0,#0xf]
08077B88: 044a         ldr r2,[0x08077b9c]
08077B8A: 417b         ldrb r1,[r0,#0xd]
08077B8C: 8900         lsl r1,r1,#0x2
08077B8E: 8918         add r1,r1,r2
08077B90: 0968         ldr r1,[r1,#0x0]
08077B92: b1f0f5f9     bl 0x08128f80
08077B96: 30bc         pop {r4,r5}
08077B98: 01bc         pop {r0}
08077B9A: 0047         bx r0
