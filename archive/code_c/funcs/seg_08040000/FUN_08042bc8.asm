; undefined FUN_08042bc8(void)
; entry 0x8042bc8  size 46 bytes

08042BC8: 10b5         push {r4,lr}
08042BCA: 041c         add r4,r0,#0x0
08042BCC: daf766f8     bl 0x0801cc9c
08042BD0: 201c         add r0,r4,#0x0
08042BD2: daf78bf9     bl 0x0801ceec
08042BD6: a17a         ldrb r1,[r4,#0xa]
08042BD8: 0120         mov r0,#0x1
08042BDA: 0843         orr r0,r1
08042BDC: 0221         mov r1,#0x2
08042BDE: 0843         orr r0,r1
08042BE0: a072         strb r0,[r4,#0xa]
08042BE2: 0549         ldr r1,[0x08042bf8]
08042BE4: 201c         add r0,r4,#0x0
08042BE6: daf78bf9     bl 0x0801cf00
08042BEA: 2534         add r4,#0x25
08042BEC: 1220         mov r0,#0x12
08042BEE: 2070         strb r0,[r4,#0x0]
08042BF0: 10bc         pop {r4}
08042BF2: 01bc         pop {r0}
08042BF4: 0047         bx r0
