; undefined FUN_080922b0(void)
; entry 0x80922b0  size 70 bytes

080922B0: 10b5         push {r4,lr}
080922B2: 041c         add r4,r0,#0x0
080922B4: fff77aff     bl 0x080921ac
080922B8: 0006         lsl r0,r0,#0x18
080922BA: 0028         cmp r0,#0x0
080922BC: 18d1         bne 0x080922f0
080922BE: 201c         add r0,r4,#0x0
080922C0: fff79eff     bl 0x08092200
080922C4: 201c         add r0,r4,#0x0
080922C6: fff799ff     bl 0x080921fc
080922CA: 0006         lsl r0,r0,#0x18
080922CC: 0028         cmp r0,#0x0
080922CE: 0fd1         bne 0x080922f0
080922D0: 0949         ldr r1,[0x080922f8]
080922D2: 607b         ldrb r0,[r4,#0xd]
080922D4: 8000         lsl r0,r0,#0x2
080922D6: 4018         add r0,r0,r1
080922D8: 0168         ldr r1,[r0,#0x0]
080922DA: 201c         add r0,r4,#0x0
080922DC: 96f050fe     bl 0x08128f80
080922E0: 0649         ldr r1,[0x080922fc]
080922E2: 607b         ldrb r0,[r4,#0xd]
080922E4: 8000         lsl r0,r0,#0x2
080922E6: 4018         add r0,r0,r1
080922E8: 0168         ldr r1,[r0,#0x0]
080922EA: 201c         add r0,r4,#0x0
080922EC: 96f048fe     bl 0x08128f80
080922F0: 10bc         pop {r4}
080922F2: 01bc         pop {r0}
080922F4: 0047         bx r0
