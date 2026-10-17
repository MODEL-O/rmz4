; undefined FUN_080b5c88(void)
; entry 0x80b5c88  size 36 bytes

080B5C88: 10b5         push {r4,lr}
080B5C8A: 031c         add r3,r0,#0x0
080B5C8C: 986a         ldr r0,[r3,#0x28]
080B5C8E: 011c         add r1,r0,#0x0
080B5C90: cc31         add r1,#0xcc
080B5C92: 0a88         ldrh r2,[r1,#0x0]
080B5C94: 0024         mov r4,#0x0
080B5C96: 085f         ldrsh r0,[r1,r4]
080B5C98: 0028         cmp r0,#0x0
080B5C9A: 01d0         beq 0x080b5ca0
080B5C9C: 501e         sub r0,r2,#0x1
080B5C9E: 0880         strh r0,[r1,#0x0]
080B5CA0: 181c         add r0,r3,#0x0
080B5CA2: c9f723fe     bl 0x0807f8ec
080B5CA6: 10bc         pop {r4}
080B5CA8: 01bc         pop {r0}
080B5CAA: 0047         bx r0
