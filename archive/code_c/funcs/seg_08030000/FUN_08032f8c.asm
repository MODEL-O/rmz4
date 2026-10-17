; undefined FUN_08032f8c(void)
; entry 0x8032f8c  size 72 bytes

08032F8C: 30b5         push {r4,r5,lr}
08032F8E: 041c         add r4,r0,#0x0
08032F90: e07b         ldrb r0,[r4,#0xf]
08032F92: 0028         cmp r0,#0x0
08032F94: 07d1         bne 0x08032fa6
08032F96: 9e21         mov r1,#0x9e
08032F98: c901         lsl r1,r1,#0x7
08032F9A: 201c         add r0,r4,#0x0
08032F9C: e9f7b0ff     bl 0x0801cf00
08032FA0: e07b         ldrb r0,[r4,#0xf]
08032FA2: 0130         add r0,#0x1
08032FA4: e073         strb r0,[r4,#0xf]
08032FA6: 0b48         ldr r0,[0x08032fd4]
08032FA8: 0578         ldrb r5,[r0,#0x0]
08032FAA: 002d         cmp r5,#0x0
08032FAC: 0fd1         bne 0x08032fce
08032FAE: 0a48         ldr r0,[0x08032fd8]
08032FB0: e821         mov r1,#0xe8
08032FB2: 4900         lsl r1,r1,#0x1
08032FB4: 4018         add r0,r0,r1
08032FB6: 0088         ldrh r0,[r0,#0x0]
08032FB8: 0628         cmp r0,#0x6
08032FBA: 04d0         beq 0x08032fc6
08032FBC: 606d         ldr r0,[r4,#0x54]
08032FBE: a16d         ldr r1,[r4,#0x58]
08032FC0: d5f744fb     bl 0x0800864c
08032FC4: a065         str r0,[r4,#0x58]
08032FC6: 6573         strb r5,[r4,#0xd]
08032FC8: a573         strb r5,[r4,#0xe]
08032FCA: e573         strb r5,[r4,#0xf]
08032FCC: e565         str r5,[r4,#0x5c]
08032FCE: 30bc         pop {r4,r5}
08032FD0: 01bc         pop {r0}
08032FD2: 0047         bx r0
