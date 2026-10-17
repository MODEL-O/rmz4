; undefined FUN_080cff30(void)
; entry 0x80cff30  size 36 bytes

080CFF30: 10b5         push {r4,lr}
080CFF32: 031c         add r3,r0,#0x0
080CFF34: 986a         ldr r0,[r3,#0x28]
080CFF36: 011c         add r1,r0,#0x0
080CFF38: cc31         add r1,#0xcc
080CFF3A: 0a88         ldrh r2,[r1,#0x0]
080CFF3C: 0024         mov r4,#0x0
080CFF3E: 085f         ldrsh r0,[r1,r4]
080CFF40: 0028         cmp r0,#0x0
080CFF42: 01d0         beq 0x080cff48
080CFF44: 501e         sub r0,r2,#0x1
080CFF46: 0880         strh r0,[r1,#0x0]
080CFF48: 181c         add r0,r3,#0x0
080CFF4A: edf755fa     bl 0x080bd3f8
080CFF4E: 10bc         pop {r4}
080CFF50: 01bc         pop {r0}
080CFF52: 0047         bx r0
