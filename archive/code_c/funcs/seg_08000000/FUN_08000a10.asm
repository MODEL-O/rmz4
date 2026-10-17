; undefined FUN_08000a10(void)
; entry 0x8000a10  size 68 bytes

08000A10: 81b0         sub sp,#0x4
08000A12: 1049         ldr r1,[0x08000a54]
08000A14: 104a         ldr r2,[0x08000a58]
08000A16: 101c         add r0,r2,#0x0
08000A18: 0880         strh r0,[r1,#0x0]
08000A1A: 0022         mov r2,#0x0
08000A1C: 0092         str r2,[sp,#0x0]
08000A1E: 0f48         ldr r0,[0x08000a5c]
08000A20: 6b46         mov r3,sp
08000A22: 0360         str r3,[r0,#0x0]
08000A24: c021         mov r1,#0xc0
08000A26: 8904         lsl r1,r1,#0x12
08000A28: 4160         str r1,[r0,#0x4]
08000A2A: 0d49         ldr r1,[0x08000a60]
08000A2C: 8160         str r1,[r0,#0x8]
08000A2E: 8168         ldr r1,[r0,#0x8]
08000A30: 0092         str r2,[sp,#0x0]
08000A32: 0360         str r3,[r0,#0x0]
08000A34: 8021         mov r1,#0x80
08000A36: 8904         lsl r1,r1,#0x12
08000A38: 4160         str r1,[r0,#0x4]
08000A3A: 0a49         ldr r1,[0x08000a64]
08000A3C: 8160         str r1,[r0,#0x8]
08000A3E: 8068         ldr r0,[r0,#0x8]
08000A40: 0948         ldr r0,[0x08000a68]
08000A42: 0a4b         ldr r3,[0x08000a6c]
08000A44: c118         add r1,r0,r3
08000A46: 0a80         strh r2,[r1,#0x0]
08000A48: 9021         mov r1,#0x90
08000A4A: 4901         lsl r1,r1,#0x5
08000A4C: 4018         add r0,r0,r1
08000A4E: 0280         strh r2,[r0,#0x0]
08000A50: 01b0         add sp,#0x4
08000A52: 7047         bx lr
