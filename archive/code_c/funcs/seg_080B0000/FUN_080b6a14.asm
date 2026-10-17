; undefined FUN_080b6a14(void)
; entry 0x80b6a14  size 36 bytes

080B6A14: 10b5         push {r4,lr}
080B6A16: 031c         add r3,r0,#0x0
080B6A18: 986a         ldr r0,[r3,#0x28]
080B6A1A: 011c         add r1,r0,#0x0
080B6A1C: cc31         add r1,#0xcc
080B6A1E: 0a88         ldrh r2,[r1,#0x0]
080B6A20: 0024         mov r4,#0x0
080B6A22: 085f         ldrsh r0,[r1,r4]
080B6A24: 0028         cmp r0,#0x0
080B6A26: 01d0         beq 0x080b6a2c
080B6A28: 501e         sub r0,r2,#0x1
080B6A2A: 0880         strh r0,[r1,#0x0]
080B6A2C: 181c         add r0,r3,#0x0
080B6A2E: c8f75dff     bl 0x0807f8ec
080B6A32: 10bc         pop {r4}
080B6A34: 01bc         pop {r0}
080B6A36: 0047         bx r0
