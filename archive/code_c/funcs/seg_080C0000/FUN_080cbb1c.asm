; undefined FUN_080cbb1c(void)
; entry 0x80cbb1c  size 46 bytes

080CBB1C: 10b5         push {r4,lr}
080CBB1E: 041c         add r4,r0,#0x0
080CBB20: a06a         ldr r0,[r4,#0x28]
080CBB22: c830         add r0,#0xc8
080CBB24: 0078         ldrb r0,[r0,#0x0]
080CBB26: 0028         cmp r0,#0x0
080CBB28: 04d0         beq 0x080cbb34
080CBB2A: 201c         add r0,r4,#0x0
080CBB2C: 7430         add r0,#0x74
080CBB2E: 0749         ldr r1,[0x080cbb4c]
080CBB30: 39f728fe     bl 0x08005784
080CBB34: 0648         ldr r0,[0x080cbb50]
080CBB36: 617b         ldrb r1,[r4,#0xd]
080CBB38: 8900         lsl r1,r1,#0x2
080CBB3A: 0918         add r1,r1,r0
080CBB3C: 0968         ldr r1,[r1,#0x0]
080CBB3E: 201c         add r0,r4,#0x0
080CBB40: 5df01efa     bl 0x08128f80
080CBB44: 10bc         pop {r4}
080CBB46: 01bc         pop {r0}
080CBB48: 0047         bx r0
