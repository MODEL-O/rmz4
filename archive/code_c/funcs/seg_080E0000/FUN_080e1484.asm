; undefined FUN_080e1484(void)
; entry 0x80e1484  size 58 bytes

080E1484: 70b5         push {r4,r5,r6,lr}
080E1486: 051c         add r5,r0,#0x0
080E1488: 0123         mov r3,#0x1
080E148A: 0024         mov r4,#0x0
080E148C: 2e1c         add r6,r5,#0x0
080E148E: 7836         add r6,#0x78
080E1490: 6a6f         ldr r2,[r5,#0x74]
080E1492: 1178         ldrb r1,[r2,#0x0]
080E1494: 181c         add r0,r3,#0x0
080E1496: 0840         and r0,r1
080E1498: 0028         cmp r0,#0x0
080E149A: 05d1         bne 0x080e14a8
080E149C: 181c         add r0,r3,#0x0
080E149E: 0843         orr r0,r1
080E14A0: 1070         strb r0,[r2,#0x0]
080E14A2: 3370         strb r3,[r6,#0x0]
080E14A4: 201c         add r0,r4,#0x0
080E14A6: 07e0         b 0x080e14b8
080E14A8: 5806         lsl r0,r3,#0x19
080E14AA: 030e         lsr r3,r0,#0x18
080E14AC: 601c         add r0,r4,#0x1
080E14AE: 0006         lsl r0,r0,#0x18
080E14B0: 040e         lsr r4,r0,#0x18
080E14B2: 072c         cmp r4,#0x7
080E14B4: ecd9         bls 0x080e1490
080E14B6: ff20         mov r0,#0xff
080E14B8: 70bc         pop {r4,r5,r6}
080E14BA: 02bc         pop {r1}
080E14BC: 0847         bx r1
