; undefined FUN_08046f90(void)
; entry 0x8046f90  size 40 bytes

08046F90: 00b5         push {lr}
08046F92: c0f773fe     bl 0x08007c7c
08046F96: 0004         lsl r0,r0,#0x10
08046F98: 000c         lsr r0,r0,#0x10
08046F9A: 011c         add r1,r0,#0x0
08046F9C: 0f20         mov r0,#0xf
08046F9E: 0840         and r0,r1
08046FA0: 0f28         cmp r0,#0xf
08046FA2: 06d0         beq 0x08046fb2
08046FA4: 8020         mov r0,#0x80
08046FA6: 0002         lsl r0,r0,#0x8
08046FA8: 0840         and r0,r1
08046FAA: 0028         cmp r0,#0x0
08046FAC: 01d1         bne 0x08046fb2
08046FAE: 081c         add r0,r1,#0x0
08046FB0: 00e0         b 0x08046fb4
08046FB2: 0020         mov r0,#0x0
08046FB4: 02bc         pop {r1}
08046FB6: 0847         bx r1
