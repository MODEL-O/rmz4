; undefined FUN_0808738c(void)
; entry 0x808738c  size 28 bytes

0808738C: 10b5         push {r4,lr}
0808738E: 041c         add r4,r0,#0x0
08087390: e06a         ldr r0,[r4,#0x2c]
08087392: 0028         cmp r0,#0x0
08087394: 05d0         beq 0x080873a2
08087396: a4f725f8     bl 0x0802b3e4
0808739A: 0028         cmp r0,#0x0
0808739C: 01d0         beq 0x080873a2
0808739E: 0020         mov r0,#0x0
080873A0: e062         str r0,[r4,#0x2c]
080873A2: 10bc         pop {r4}
080873A4: 01bc         pop {r0}
080873A6: 0047         bx r0
