; undefined FUN_08042ad8(void)
; entry 0x8042ad8  size 58 bytes

08042AD8: 30b5         push {r4,r5,lr}
08042ADA: 041c         add r4,r0,#0x0
08042ADC: a56a         ldr r5,[r4,#0x28]
08042ADE: daf723f9     bl 0x0801cd28
08042AE2: 201c         add r0,r4,#0x0
08042AE4: daf702fa     bl 0x0801ceec
08042AE8: a17a         ldrb r1,[r4,#0xa]
08042AEA: 0120         mov r0,#0x1
08042AEC: 0843         orr r0,r1
08042AEE: 0221         mov r1,#0x2
08042AF0: 0843         orr r0,r1
08042AF2: a072         strb r0,[r4,#0xa]
08042AF4: 0749         ldr r1,[0x08042b14]
08042AF6: 201c         add r0,r4,#0x0
08042AF8: daf702fa     bl 0x0801cf00
08042AFC: 7320         mov r0,#0x73
08042AFE: c0f707f8     bl 0x08002b10
08042B02: 281c         add r0,r5,#0x0
08042B04: 211c         add r1,r4,#0x0
08042B06: fff7dbfe     bl 0x080428c0
08042B0A: e062         str r0,[r4,#0x2c]
08042B0C: 30bc         pop {r4,r5}
08042B0E: 01bc         pop {r0}
08042B10: 0047         bx r0
