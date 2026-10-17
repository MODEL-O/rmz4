; undefined FUN_080d0148(void)
; entry 0x80d0148  size 36 bytes

080D0148: 10b5         push {r4,lr}
080D014A: 031c         add r3,r0,#0x0
080D014C: 986a         ldr r0,[r3,#0x28]
080D014E: 011c         add r1,r0,#0x0
080D0150: cc31         add r1,#0xcc
080D0152: 0a88         ldrh r2,[r1,#0x0]
080D0154: 0024         mov r4,#0x0
080D0156: 085f         ldrsh r0,[r1,r4]
080D0158: 0028         cmp r0,#0x0
080D015A: 01d0         beq 0x080d0160
080D015C: 501e         sub r0,r2,#0x1
080D015E: 0880         strh r0,[r1,#0x0]
080D0160: 181c         add r0,r3,#0x0
080D0162: edf749f9     bl 0x080bd3f8
080D0166: 10bc         pop {r4}
080D0168: 01bc         pop {r0}
080D016A: 0047         bx r0
