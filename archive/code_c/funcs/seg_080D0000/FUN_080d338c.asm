; undefined FUN_080d338c(void)
; entry 0x80d338c  size 60 bytes

080D338C: 70b5         push {r4,r5,r6,lr}
080D338E: 041c         add r4,r0,#0x0
080D3390: 2230         add r0,#0x22
080D3392: 0125         mov r5,#0x1
080D3394: 0126         mov r6,#0x1
080D3396: 0670         strb r6,[r0,#0x0]
080D3398: 201c         add r0,r4,#0x0
080D339A: 49f77ffc     bl 0x0801cc9c
080D339E: 0a49         ldr r1,[0x080d33c8]
080D33A0: 201c         add r0,r4,#0x0
080D33A2: 49f7adfd     bl 0x0801cf00
080D33A6: a07a         ldrb r0,[r4,#0xa]
080D33A8: 0543         orr r5,r0
080D33AA: a572         strb r5,[r4,#0xa]
080D33AC: 0749         ldr r1,[0x080d33cc]
080D33AE: 607a         ldrb r0,[r4,#0x9]
080D33B0: 8000         lsl r0,r0,#0x2
080D33B2: 4018         add r0,r0,r1
080D33B4: e660         str r6,[r4,#0xc]
080D33B6: 0068         ldr r0,[r0,#0x0]
080D33B8: 4068         ldr r0,[r0,#0x4]
080D33BA: 6061         str r0,[r4,#0x14]
080D33BC: 201c         add r0,r4,#0x0
080D33BE: 00f007f8     bl 0x080d33d0
080D33C2: 70bc         pop {r4,r5,r6}
080D33C4: 01bc         pop {r0}
080D33C6: 0047         bx r0
