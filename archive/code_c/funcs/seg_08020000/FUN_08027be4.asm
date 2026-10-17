; undefined FUN_08027be4(void)
; entry 0x8027be4  size 28 bytes

08027BE4: 00b5         push {lr}
08027BE6: aa22         mov r2,#0xaa
08027BE8: 5200         lsl r2,r2,#0x1
08027BEA: 8118         add r1,r0,r2
08027BEC: 0868         ldr r0,[r1,#0x0]
08027BEE: 0028         cmp r0,#0x0
08027BF0: 04d0         beq 0x08027bfc
08027BF2: 007b         ldrb r0,[r0,#0xc]
08027BF4: 0128         cmp r0,#0x1
08027BF6: 01d9         bls 0x08027bfc
08027BF8: 0020         mov r0,#0x0
08027BFA: 0860         str r0,[r1,#0x0]
08027BFC: 01bc         pop {r0}
08027BFE: 0047         bx r0
