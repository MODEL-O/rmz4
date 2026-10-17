; undefined FUN_080603a8(void)
; entry 0x80603a8  size 52 bytes

080603A8: 10b5         push {r4,lr}
080603AA: 041c         add r4,r0,#0x0
080603AC: a07b         ldrb r0,[r4,#0xe]
080603AE: 0028         cmp r0,#0x0
080603B0: 06d1         bne 0x080603c0
080603B2: 0a49         ldr r1,[0x080603dc]
080603B4: 201c         add r0,r4,#0x0
080603B6: bcf7a3fd     bl 0x0801cf00
080603BA: a07b         ldrb r0,[r4,#0xe]
080603BC: 0130         add r0,#0x1
080603BE: a073         strb r0,[r4,#0xe]
080603C0: 201c         add r0,r4,#0x0
080603C2: bcf715fe     bl 0x0801cff0
080603C6: 201c         add r0,r4,#0x0
080603C8: 7330         add r0,#0x73
080603CA: 0178         ldrb r1,[r0,#0x0]
080603CC: 0329         cmp r1,#0x3
080603CE: 02d1         bne 0x080603d6
080603D0: 0020         mov r0,#0x0
080603D2: 6173         strb r1,[r4,#0xd]
080603D4: a073         strb r0,[r4,#0xe]
080603D6: 10bc         pop {r4}
080603D8: 01bc         pop {r0}
080603DA: 0047         bx r0
