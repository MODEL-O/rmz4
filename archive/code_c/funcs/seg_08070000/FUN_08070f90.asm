; undefined FUN_08070f90(void)
; entry 0x8070f90  size 30 bytes

08070F90: 10b5         push {r4,lr}
08070F92: 041c         add r4,r0,#0x0
08070F94: 02f01afe     bl 0x08073bcc
08070F98: 0549         ldr r1,[0x08070fb0]
08070F9A: 607b         ldrb r0,[r4,#0xd]
08070F9C: 8000         lsl r0,r0,#0x2
08070F9E: 4018         add r0,r0,r1
08070FA0: 0168         ldr r1,[r0,#0x0]
08070FA2: 201c         add r0,r4,#0x0
08070FA4: b7f0ecff     bl 0x08128f80
08070FA8: 10bc         pop {r4}
08070FAA: 01bc         pop {r0}
08070FAC: 0047         bx r0
