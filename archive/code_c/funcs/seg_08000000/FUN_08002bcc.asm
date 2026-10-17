; undefined FUN_08002bcc(void)
; entry 0x8002bcc  size 52 bytes

08002BCC: 10b5         push {r4,lr}
08002BCE: 0004         lsl r0,r0,#0x10
08002BD0: 040c         lsr r4,r0,#0x10
08002BD2: 201c         add r0,r4,#0x0
08002BD4: fff77cff     bl 0x08002ad0
08002BD8: 0028         cmp r0,#0x0
08002BDA: 0ed0         beq 0x08002bfa
08002BDC: 084a         ldr r2,[0x08002c00]
08002BDE: 0949         ldr r1,[0x08002c04]
08002BE0: e000         lsl r0,r4,#0x3
08002BE2: 4018         add r0,r0,r1
08002BE4: 8188         ldrh r1,[r0,#0x4]
08002BE6: 4800         lsl r0,r1,#0x1
08002BE8: 4018         add r0,r0,r1
08002BEA: 8000         lsl r0,r0,#0x2
08002BEC: 8018         add r0,r0,r2
08002BEE: 0068         ldr r0,[r0,#0x0]
08002BF0: 0549         ldr r1,[0x08002c08]
08002BF2: 8022         mov r2,#0x80
08002BF4: 5200         lsl r2,r2,#0x1
08002BF6: 25f18dfd     bl 0x08128714
08002BFA: 10bc         pop {r4}
08002BFC: 01bc         pop {r0}
08002BFE: 0047         bx r0
