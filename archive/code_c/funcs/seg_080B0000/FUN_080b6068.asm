; undefined FUN_080b6068(void)
; entry 0x80b6068  size 44 bytes

080B6068: 02b5         push {r1,lr}
080B606A: 0000         mov r0,r0
080B606C: 40db         blt 0x080b60f0
080B606E: 8508         lsr r5,r0,#0x2
080B6070: 10b5         push {r4,lr}
080B6072: 031c         add r3,r0,#0x0
080B6074: 986a         ldr r0,[r3,#0x28]
080B6076: 011c         add r1,r0,#0x0
080B6078: cc31         add r1,#0xcc
080B607A: 0a88         ldrh r2,[r1,#0x0]
080B607C: 0024         mov r4,#0x0
080B607E: 085f         ldrsh r0,[r1,r4]
080B6080: 0028         cmp r0,#0x0
080B6082: 01d0         beq 0x080b6088
080B6084: 501e         sub r0,r2,#0x1
080B6086: 0880         strh r0,[r1,#0x0]
080B6088: 181c         add r0,r3,#0x0
080B608A: c9f72ffc     bl 0x0807f8ec
080B608E: 10bc         pop {r4}
080B6090: 01bc         pop {r0}
080B6092: 0047         bx r0
