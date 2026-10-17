; undefined FUN_0810ca08(void)
; entry 0x810ca08  size 68 bytes

0810CA08: 30b5         push {r4,r5,lr}
0810CA0A: 051c         add r5,r0,#0x0
0810CA0C: 0906         lsl r1,r1,#0x18
0810CA0E: 0c0e         lsr r4,r1,#0x18
0810CA10: 0e48         ldr r0,[0x0810ca4c]
0810CA12: 0068         ldr r0,[r0,#0x0]
0810CA14: f8f674fd     bl 0x08005500
0810CA18: 031c         add r3,r0,#0x0
0810CA1A: 002b         cmp r3,#0x0
0810CA1C: 12d0         beq 0x0810ca44
0810CA1E: 191c         add r1,r3,#0x0
0810CA20: 2531         add r1,#0x25
0810CA22: 0022         mov r2,#0x0
0810CA24: 1020         mov r0,#0x10
0810CA26: 0870         strb r0,[r1,#0x0]
0810CA28: 0949         ldr r1,[0x0810ca50]
0810CA2A: 0c20         mov r0,#0xc
0810CA2C: 5872         strb r0,[r3,#0x9]
0810CA2E: 086b         ldr r0,[r1,#0x30]
0810CA30: 0068         ldr r0,[r0,#0x0]
0810CA32: 5861         str r0,[r3,#0x14]
0810CA34: 0020         mov r0,#0x0
0810CA36: 1a84         strh r2,[r3,#0x20]
0810CA38: 191c         add r1,r3,#0x0
0810CA3A: 2231         add r1,#0x22
0810CA3C: 0870         strb r0,[r1,#0x0]
0810CA3E: 9d62         str r5,[r3,#0x28]
0810CA40: 1c74         strb r4,[r3,#0x10]
0810CA42: 5874         strb r0,[r3,#0x11]
0810CA44: 181c         add r0,r3,#0x0
0810CA46: 30bc         pop {r4,r5}
0810CA48: 02bc         pop {r1}
0810CA4A: 0847         bx r1
