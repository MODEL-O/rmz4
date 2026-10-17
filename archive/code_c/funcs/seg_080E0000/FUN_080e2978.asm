; undefined FUN_080e2978(void)
; entry 0x80e2978  size 72 bytes

080E2978: 10b5         push {r4,lr}
080E297A: 041c         add r4,r0,#0x0
080E297C: 3af78ef9     bl 0x0801cc9c
080E2980: a17a         ldrb r1,[r4,#0xa]
080E2982: 0120         mov r0,#0x1
080E2984: 0843         orr r0,r1
080E2986: 0221         mov r1,#0x2
080E2988: 0843         orr r0,r1
080E298A: a072         strb r0,[r4,#0xa]
080E298C: 0c49         ldr r1,[0x080e29c0]
080E298E: 607a         ldrb r0,[r4,#0x9]
080E2990: 8000         lsl r0,r0,#0x2
080E2992: 4018         add r0,r0,r1
080E2994: 0121         mov r1,#0x1
080E2996: e160         str r1,[r4,#0xc]
080E2998: 0068         ldr r0,[r0,#0x0]
080E299A: 4068         ldr r0,[r0,#0x4]
080E299C: 6061         str r0,[r4,#0x14]
080E299E: 201c         add r0,r4,#0x0
080E29A0: 7430         add r0,#0x74
080E29A2: 0170         strb r1,[r0,#0x0]
080E29A4: 0749         ldr r1,[0x080e29c4]
080E29A6: 207c         ldrb r0,[r4,#0x10]
080E29A8: 8000         lsl r0,r0,#0x2
080E29AA: 4018         add r0,r0,r1
080E29AC: 0168         ldr r1,[r0,#0x0]
080E29AE: 201c         add r0,r4,#0x0
080E29B0: 46f0e6fa     bl 0x08128f80
080E29B4: 201c         add r0,r4,#0x0
080E29B6: 00f007f8     bl 0x080e29c8
080E29BA: 10bc         pop {r4}
080E29BC: 01bc         pop {r0}
080E29BE: 0047         bx r0
