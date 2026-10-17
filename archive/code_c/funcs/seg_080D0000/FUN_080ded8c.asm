; undefined FUN_080ded8c(void)
; entry 0x80ded8c  size 66 bytes

080DED8C: 10b5         push {r4,lr}
080DED8E: 041c         add r4,r0,#0x0
080DED90: 3df784ff     bl 0x0801cc9c
080DED94: a17a         ldrb r1,[r4,#0xa]
080DED96: fe20         mov r0,#0xfe
080DED98: 0840         and r0,r1
080DED9A: 0221         mov r1,#0x2
080DED9C: 0843         orr r0,r1
080DED9E: a072         strb r0,[r4,#0xa]
080DEDA0: 201c         add r0,r4,#0x0
080DEDA2: 3ef7a3f8     bl 0x0801ceec
080DEDA6: c521         mov r1,#0xc5
080DEDA8: 0902         lsl r1,r1,#0x8
080DEDAA: 201c         add r0,r4,#0x0
080DEDAC: 3ef7a8f8     bl 0x0801cf00
080DEDB0: 0749         ldr r1,[0x080dedd0]
080DEDB2: 607a         ldrb r0,[r4,#0x9]
080DEDB4: 8000         lsl r0,r0,#0x2
080DEDB6: 4018         add r0,r0,r1
080DEDB8: 0121         mov r1,#0x1
080DEDBA: e160         str r1,[r4,#0xc]
080DEDBC: 0068         ldr r0,[r0,#0x0]
080DEDBE: 4068         ldr r0,[r0,#0x4]
080DEDC0: 6061         str r0,[r4,#0x14]
080DEDC2: 201c         add r0,r4,#0x0
080DEDC4: fff78cff     bl 0x080dece0
080DEDC8: 10bc         pop {r4}
080DEDCA: 01bc         pop {r0}
080DEDCC: 0047         bx r0
