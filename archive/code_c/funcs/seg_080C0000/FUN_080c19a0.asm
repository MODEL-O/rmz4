; undefined FUN_080c19a0(void)
; entry 0x80c19a0  size 36 bytes

080C19A0: 10b5         push {r4,lr}
080C19A2: 031c         add r3,r0,#0x0
080C19A4: 986a         ldr r0,[r3,#0x28]
080C19A6: 011c         add r1,r0,#0x0
080C19A8: ca31         add r1,#0xca
080C19AA: 0a88         ldrh r2,[r1,#0x0]
080C19AC: 0024         mov r4,#0x0
080C19AE: 085f         ldrsh r0,[r1,r4]
080C19B0: 0028         cmp r0,#0x0
080C19B2: 01d0         beq 0x080c19b8
080C19B4: 501e         sub r0,r2,#0x1
080C19B6: 0880         strh r0,[r1,#0x0]
080C19B8: 181c         add r0,r3,#0x0
080C19BA: fbf71dfd     bl 0x080bd3f8
080C19BE: 10bc         pop {r4}
080C19C0: 01bc         pop {r0}
080C19C2: 0047         bx r0
