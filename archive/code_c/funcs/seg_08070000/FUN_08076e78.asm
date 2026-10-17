; undefined FUN_08076e78(void)
; entry 0x8076e78  size 62 bytes

08076E78: 10b5         push {r4,lr}
08076E7A: 041c         add r4,r0,#0x0
08076E7C: a07b         ldrb r0,[r4,#0xe]
08076E7E: 0028         cmp r0,#0x0
08076E80: 0bd1         bne 0x08076e9a
08076E82: 0d49         ldr r1,[0x08076eb8]
08076E84: 201c         add r0,r4,#0x0
08076E86: a6f73bf8     bl 0x0801cf00
08076E8A: 201c         add r0,r4,#0x0
08076E8C: 7430         add r0,#0x74
08076E8E: 0b49         ldr r1,[0x08076ebc]
08076E90: 8ef778fc     bl 0x08005784
08076E94: a07b         ldrb r0,[r4,#0xe]
08076E96: 0130         add r0,#0x1
08076E98: a073         strb r0,[r4,#0xe]
08076E9A: 201c         add r0,r4,#0x0
08076E9C: a6f7a8f8     bl 0x0801cff0
08076EA0: 201c         add r0,r4,#0x0
08076EA2: 7330         add r0,#0x73
08076EA4: 0178         ldrb r1,[r0,#0x0]
08076EA6: 0329         cmp r1,#0x3
08076EA8: 02d1         bne 0x08076eb0
08076EAA: 0020         mov r0,#0x0
08076EAC: 6173         strb r1,[r4,#0xd]
08076EAE: a073         strb r0,[r4,#0xe]
08076EB0: 10bc         pop {r4}
08076EB2: 01bc         pop {r0}
08076EB4: 0047         bx r0
