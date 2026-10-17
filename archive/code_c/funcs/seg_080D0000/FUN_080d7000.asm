; undefined FUN_080d7000(void)
; entry 0x80d7000  size 62 bytes

080D7000: 30b5         push {r4,r5,lr}
080D7002: 041c         add r4,r0,#0x0
080D7004: 45f74afe     bl 0x0801cc9c
080D7008: a17a         ldrb r1,[r4,#0xa]
080D700A: 0120         mov r0,#0x1
080D700C: 0025         mov r5,#0x0
080D700E: 0843         orr r0,r1
080D7010: 0221         mov r1,#0x2
080D7012: 0843         orr r0,r1
080D7014: a072         strb r0,[r4,#0xa]
080D7016: 0a49         ldr r1,[0x080d7040]
080D7018: 201c         add r0,r4,#0x0
080D701A: 45f771ff     bl 0x0801cf00
080D701E: 2566         str r5,[r4,#0x60]
080D7020: 0849         ldr r1,[0x080d7044]
080D7022: 607a         ldrb r0,[r4,#0x9]
080D7024: 8000         lsl r0,r0,#0x2
080D7026: 4018         add r0,r0,r1
080D7028: 0121         mov r1,#0x1
080D702A: e160         str r1,[r4,#0xc]
080D702C: 0068         ldr r0,[r0,#0x0]
080D702E: 4068         ldr r0,[r0,#0x4]
080D7030: 6061         str r0,[r4,#0x14]
080D7032: 201c         add r0,r4,#0x0
080D7034: fff75eff     bl 0x080d6ef4
080D7038: 30bc         pop {r4,r5}
080D703A: 01bc         pop {r0}
080D703C: 0047         bx r0
