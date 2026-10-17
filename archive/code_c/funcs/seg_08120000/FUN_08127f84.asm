; undefined FUN_08127f84(void)
; entry 0x8127f84  size 60 bytes

08127F84: 70b5         push {r4,r5,r6,lr}
08127F86: 061c         add r6,r0,#0x0
08127F88: 716b         ldr r1,[r6,#0x34]
08127F8A: 0d48         ldr r0,[0x08127fc0]
08127F8C: 8142         cmp r1,r0
08127F8E: 14d1         bne 0x08127fba
08127F90: 481c         add r0,r1,#0x1
08127F92: 7063         str r0,[r6,#0x34]
08127F94: 7068         ldr r0,[r6,#0x4]
08127F96: 8021         mov r1,#0x80
08127F98: 0906         lsl r1,r1,#0x18
08127F9A: 0843         orr r0,r1
08127F9C: 7060         str r0,[r6,#0x4]
08127F9E: 347a         ldrb r4,[r6,#0x8]
08127FA0: f56a         ldr r5,[r6,#0x2c]
08127FA2: 002c         cmp r4,#0x0
08127FA4: 07dd         ble 0x08127fb6
08127FA6: 301c         add r0,r6,#0x0
08127FA8: 291c         add r1,r5,#0x0
08127FAA: fff7edf9     bl 0x08127388
08127FAE: 013c         sub r4,#0x1
08127FB0: 5035         add r5,#0x50
08127FB2: 002c         cmp r4,#0x0
08127FB4: f7dc         bgt 0x08127fa6
08127FB6: 0248         ldr r0,[0x08127fc0]
08127FB8: 7063         str r0,[r6,#0x34]
08127FBA: 70bc         pop {r4,r5,r6}
08127FBC: 01bc         pop {r0}
08127FBE: 0047         bx r0
