; undefined FUN_0806b79c(void)
; entry 0x806b79c  size 68 bytes

0806B79C: 30b5         push {r4,r5,lr}
0806B79E: 041c         add r4,r0,#0x0
0806B7A0: a57b         ldrb r5,[r4,#0xe]
0806B7A2: 002d         cmp r5,#0x0
0806B7A4: 0ed1         bne 0x0806b7c4
0806B7A6: 0e49         ldr r1,[0x0806b7e0]
0806B7A8: b1f7aafb     bl 0x0801cf00
0806B7AC: d320         mov r0,#0xd3
0806B7AE: 97f7aff9     bl 0x08002b10
0806B7B2: 201c         add r0,r4,#0x0
0806B7B4: 7430         add r0,#0x74
0806B7B6: 0b49         ldr r1,[0x0806b7e4]
0806B7B8: 99f7e4ff     bl 0x08005784
0806B7BC: e573         strb r5,[r4,#0xf]
0806B7BE: a07b         ldrb r0,[r4,#0xe]
0806B7C0: 0130         add r0,#0x1
0806B7C2: a073         strb r0,[r4,#0xe]
0806B7C4: 201c         add r0,r4,#0x0
0806B7C6: b1f713fc     bl 0x0801cff0
0806B7CA: 201c         add r0,r4,#0x0
0806B7CC: 7330         add r0,#0x73
0806B7CE: 0178         ldrb r1,[r0,#0x0]
0806B7D0: 0329         cmp r1,#0x3
0806B7D2: 02d1         bne 0x0806b7da
0806B7D4: 0020         mov r0,#0x0
0806B7D6: 6173         strb r1,[r4,#0xd]
0806B7D8: a073         strb r0,[r4,#0xe]
0806B7DA: 30bc         pop {r4,r5}
0806B7DC: 01bc         pop {r0}
0806B7DE: 0047         bx r0
