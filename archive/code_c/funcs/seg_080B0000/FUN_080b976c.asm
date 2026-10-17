; undefined FUN_080b976c(void)
; entry 0x80b976c  size 36 bytes

080B976C: 10b5         push {r4,lr}
080B976E: 031c         add r3,r0,#0x0
080B9770: 986a         ldr r0,[r3,#0x28]
080B9772: 011c         add r1,r0,#0x0
080B9774: cc31         add r1,#0xcc
080B9776: 0a88         ldrh r2,[r1,#0x0]
080B9778: 0024         mov r4,#0x0
080B977A: 085f         ldrsh r0,[r1,r4]
080B977C: 0028         cmp r0,#0x0
080B977E: 01d0         beq 0x080b9784
080B9780: 501e         sub r0,r2,#0x1
080B9782: 0880         strh r0,[r1,#0x0]
080B9784: 181c         add r0,r3,#0x0
080B9786: c6f7b1f8     bl 0x0807f8ec
080B978A: 10bc         pop {r4}
080B978C: 01bc         pop {r0}
080B978E: 0047         bx r0
