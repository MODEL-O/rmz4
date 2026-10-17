; undefined FUN_080d03b8(void)
; entry 0x80d03b8  size 36 bytes

080D03B8: 10b5         push {r4,lr}
080D03BA: 031c         add r3,r0,#0x0
080D03BC: 986a         ldr r0,[r3,#0x28]
080D03BE: 011c         add r1,r0,#0x0
080D03C0: cc31         add r1,#0xcc
080D03C2: 0a88         ldrh r2,[r1,#0x0]
080D03C4: 0024         mov r4,#0x0
080D03C6: 085f         ldrsh r0,[r1,r4]
080D03C8: 0028         cmp r0,#0x0
080D03CA: 01d0         beq 0x080d03d0
080D03CC: 501e         sub r0,r2,#0x1
080D03CE: 0880         strh r0,[r1,#0x0]
080D03D0: 181c         add r0,r3,#0x0
080D03D2: edf711f8     bl 0x080bd3f8
080D03D6: 10bc         pop {r4}
080D03D8: 01bc         pop {r0}
080D03DA: 0047         bx r0
