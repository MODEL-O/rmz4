; undefined FUN_080dcd18(void)
; entry 0x80dcd18  size 72 bytes

080DCD18: 70b5         push {r4,r5,r6,lr}
080DCD1A: 061c         add r6,r0,#0x0
080DCD1C: 0906         lsl r1,r1,#0x18
080DCD1E: 0d0e         lsr r5,r1,#0x18
080DCD20: 1206         lsl r2,r2,#0x18
080DCD22: 140e         lsr r4,r2,#0x18
080DCD24: 0e48         ldr r0,[0x080dcd60]
080DCD26: 0068         ldr r0,[r0,#0x0]
080DCD28: 28f7eafb     bl 0x08005500
080DCD2C: 031c         add r3,r0,#0x0
080DCD2E: 002b         cmp r3,#0x0
080DCD30: 13d0         beq 0x080dcd5a
080DCD32: 191c         add r1,r3,#0x0
080DCD34: 2531         add r1,#0x25
080DCD36: 0022         mov r2,#0x0
080DCD38: 0120         mov r0,#0x1
080DCD3A: 0870         strb r0,[r1,#0x0]
080DCD3C: 0948         ldr r0,[0x080dcd64]
080DCD3E: 2c21         mov r1,#0x2c
080DCD40: 5972         strb r1,[r3,#0x9]
080DCD42: b030         add r0,#0xb0
080DCD44: 0068         ldr r0,[r0,#0x0]
080DCD46: 0068         ldr r0,[r0,#0x0]
080DCD48: 5861         str r0,[r3,#0x14]
080DCD4A: 0020         mov r0,#0x0
080DCD4C: 1a84         strh r2,[r3,#0x20]
080DCD4E: 191c         add r1,r3,#0x0
080DCD50: 2231         add r1,#0x22
080DCD52: 0870         strb r0,[r1,#0x0]
080DCD54: 9e62         str r6,[r3,#0x28]
080DCD56: 1d74         strb r5,[r3,#0x10]
080DCD58: 5c74         strb r4,[r3,#0x11]
080DCD5A: 70bc         pop {r4,r5,r6}
080DCD5C: 01bc         pop {r0}
080DCD5E: 0047         bx r0
