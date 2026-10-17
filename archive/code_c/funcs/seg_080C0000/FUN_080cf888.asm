; undefined FUN_080cf888(void)
; entry 0x80cf888  size 36 bytes

080CF888: 10b5         push {r4,lr}
080CF88A: 031c         add r3,r0,#0x0
080CF88C: 986a         ldr r0,[r3,#0x28]
080CF88E: 011c         add r1,r0,#0x0
080CF890: cc31         add r1,#0xcc
080CF892: 0a88         ldrh r2,[r1,#0x0]
080CF894: 0024         mov r4,#0x0
080CF896: 085f         ldrsh r0,[r1,r4]
080CF898: 0028         cmp r0,#0x0
080CF89A: 01d0         beq 0x080cf8a0
080CF89C: 501e         sub r0,r2,#0x1
080CF89E: 0880         strh r0,[r1,#0x0]
080CF8A0: 181c         add r0,r3,#0x0
080CF8A2: edf7a9fd     bl 0x080bd3f8
080CF8A6: 10bc         pop {r4}
080CF8A8: 01bc         pop {r0}
080CF8AA: 0047         bx r0
