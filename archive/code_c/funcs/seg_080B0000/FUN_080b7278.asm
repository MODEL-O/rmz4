; undefined FUN_080b7278(void)
; entry 0x80b7278  size 38 bytes

080B7278: 10b5         push {r4,lr}
080B727A: 031c         add r3,r0,#0x0
080B727C: 986a         ldr r0,[r3,#0x28]
080B727E: 806a         ldr r0,[r0,#0x28]
080B7280: 011c         add r1,r0,#0x0
080B7282: cc31         add r1,#0xcc
080B7284: 0a88         ldrh r2,[r1,#0x0]
080B7286: 0024         mov r4,#0x0
080B7288: 085f         ldrsh r0,[r1,r4]
080B728A: 0028         cmp r0,#0x0
080B728C: 01d0         beq 0x080b7292
080B728E: 501e         sub r0,r2,#0x1
080B7290: 0880         strh r0,[r1,#0x0]
080B7292: 181c         add r0,r3,#0x0
080B7294: c8f72afb     bl 0x0807f8ec
080B7298: 10bc         pop {r4}
080B729A: 01bc         pop {r0}
080B729C: 0047         bx r0
