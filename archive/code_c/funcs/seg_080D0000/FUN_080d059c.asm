; undefined FUN_080d059c(void)
; entry 0x80d059c  size 36 bytes

080D059C: 10b5         push {r4,lr}
080D059E: 031c         add r3,r0,#0x0
080D05A0: 986a         ldr r0,[r3,#0x28]
080D05A2: 011c         add r1,r0,#0x0
080D05A4: cc31         add r1,#0xcc
080D05A6: 0a88         ldrh r2,[r1,#0x0]
080D05A8: 0024         mov r4,#0x0
080D05AA: 085f         ldrsh r0,[r1,r4]
080D05AC: 0028         cmp r0,#0x0
080D05AE: 01d0         beq 0x080d05b4
080D05B0: 501e         sub r0,r2,#0x1
080D05B2: 0880         strh r0,[r1,#0x0]
080D05B4: 181c         add r0,r3,#0x0
080D05B6: ecf71fff     bl 0x080bd3f8
080D05BA: 10bc         pop {r4}
080D05BC: 01bc         pop {r0}
080D05BE: 0047         bx r0
