; undefined FUN_08006a6c(void)
; entry 0x8006a6c  size 36 bytes

08006A6C: 00b5         push {lr}
08006A6E: 0a1c         add r2,r1,#0x0
08006A70: 0006         lsl r0,r0,#0x18
08006A72: 074b         ldr r3,[0x08006a90]
08006A74: 800d         lsr r0,r0,#0x16
08006A76: 191c         add r1,r3,#0x0
08006A78: 1c31         add r1,#0x1c
08006A7A: 4118         add r1,r0,r1
08006A7C: 0868         ldr r0,[r1,#0x0]
08006A7E: 9042         cmp r0,r2
08006A80: 04d0         beq 0x08006a8c
08006A82: 0a60         str r2,[r1,#0x0]
08006A84: 191c         add r1,r3,#0x0
08006A86: 3831         add r1,#0x38
08006A88: 0120         mov r0,#0x1
08006A8A: 0870         strb r0,[r1,#0x0]
08006A8C: 01bc         pop {r0}
08006A8E: 0047         bx r0
