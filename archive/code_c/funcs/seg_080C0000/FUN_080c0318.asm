; undefined FUN_080c0318(void)
; entry 0x80c0318  size 66 bytes

080C0318: 10b5         push {r4,lr}
080C031A: 041c         add r4,r0,#0x0
080C031C: 0f48         ldr r0,[0x080c035c]
080C031E: 0068         ldr r0,[r0,#0x0]
080C0320: 45f7eef8     bl 0x08005500
080C0324: 031c         add r3,r0,#0x0
080C0326: 002b         cmp r3,#0x0
080C0328: 13d0         beq 0x080c0352
080C032A: 191c         add r1,r3,#0x0
080C032C: 2531         add r1,#0x25
080C032E: 0022         mov r2,#0x0
080C0330: 0820         mov r0,#0x8
080C0332: 0870         strb r0,[r1,#0x0]
080C0334: 0a49         ldr r1,[0x080c0360]
080C0336: 0b20         mov r0,#0xb
080C0338: 5872         strb r0,[r3,#0x9]
080C033A: c86a         ldr r0,[r1,#0x2c]
080C033C: 0068         ldr r0,[r0,#0x0]
080C033E: 5861         str r0,[r3,#0x14]
080C0340: 0021         mov r1,#0x0
080C0342: 1a84         strh r2,[r3,#0x20]
080C0344: 181c         add r0,r3,#0x0
080C0346: 2230         add r0,#0x22
080C0348: 0170         strb r1,[r0,#0x0]
080C034A: 9c62         str r4,[r3,#0x28]
080C034C: 1974         strb r1,[r3,#0x10]
080C034E: 9630         add r0,#0x96
080C0350: 0170         strb r1,[r0,#0x0]
080C0352: 181c         add r0,r3,#0x0
080C0354: 10bc         pop {r4}
080C0356: 02bc         pop {r1}
080C0358: 0847         bx r1
