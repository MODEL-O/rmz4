; undefined FUN_08051b90(void)
; entry 0x8051b90  size 54 bytes

08051B90: 10b5         push {r4,lr}
08051B92: 041c         add r4,r0,#0x0
08051B94: a07b         ldrb r0,[r4,#0xe]
08051B96: 0028         cmp r0,#0x0
08051B98: 06d1         bne 0x08051ba8
08051B9A: 0b49         ldr r1,[0x08051bc8]
08051B9C: 201c         add r0,r4,#0x0
08051B9E: cbf7aff9     bl 0x0801cf00
08051BA2: a07b         ldrb r0,[r4,#0xe]
08051BA4: 0130         add r0,#0x1
08051BA6: a073         strb r0,[r4,#0xe]
08051BA8: 201c         add r0,r4,#0x0
08051BAA: cbf721fa     bl 0x0801cff0
08051BAE: 201c         add r0,r4,#0x0
08051BB0: 7330         add r0,#0x73
08051BB2: 0078         ldrb r0,[r0,#0x0]
08051BB4: 0328         cmp r0,#0x3
08051BB6: 03d1         bne 0x08051bc0
08051BB8: 0021         mov r1,#0x0
08051BBA: 0420         mov r0,#0x4
08051BBC: 6073         strb r0,[r4,#0xd]
08051BBE: a173         strb r1,[r4,#0xe]
08051BC0: 10bc         pop {r4}
08051BC2: 01bc         pop {r0}
08051BC4: 0047         bx r0
