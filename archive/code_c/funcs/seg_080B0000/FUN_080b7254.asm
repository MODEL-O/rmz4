; undefined FUN_080b7254(void)
; entry 0x80b7254  size 36 bytes

080B7254: 10b5         push {r4,lr}
080B7256: 031c         add r3,r0,#0x0
080B7258: 986a         ldr r0,[r3,#0x28]
080B725A: 011c         add r1,r0,#0x0
080B725C: cc31         add r1,#0xcc
080B725E: 0a88         ldrh r2,[r1,#0x0]
080B7260: 0024         mov r4,#0x0
080B7262: 085f         ldrsh r0,[r1,r4]
080B7264: 0028         cmp r0,#0x0
080B7266: 01d0         beq 0x080b726c
080B7268: 501e         sub r0,r2,#0x1
080B726A: 0880         strh r0,[r1,#0x0]
080B726C: 181c         add r0,r3,#0x0
080B726E: c8f73dfb     bl 0x0807f8ec
080B7272: 10bc         pop {r4}
080B7274: 01bc         pop {r0}
080B7276: 0047         bx r0
