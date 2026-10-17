; undefined FUN_080ddb84(void)
; entry 0x80ddb84  size 56 bytes

080DDB84: 10b5         push {r4,lr}
080DDB86: 041c         add r4,r0,#0x0
080DDB88: 3ff732fa     bl 0x0801cff0
080DDB8C: 606d         ldr r0,[r4,#0x54]
080DDB8E: e16d         ldr r1,[r4,#0x5c]
080DDB90: 4018         add r0,r0,r1
080DDB92: 6065         str r0,[r4,#0x54]
080DDB94: 606e         ldr r0,[r4,#0x64]
080DDB96: 0918         add r1,r1,r0
080DDB98: e165         str r1,[r4,#0x5c]
080DDB9A: 0029         cmp r1,#0x0
080DDB9C: 0bd1         bne 0x080ddbb6
080DDB9E: 0749         ldr r1,[0x080ddbbc]
080DDBA0: 607a         ldrb r0,[r4,#0x9]
080DDBA2: 8000         lsl r0,r0,#0x2
080DDBA4: 4018         add r0,r0,r1
080DDBA6: 0221         mov r1,#0x2
080DDBA8: e160         str r1,[r4,#0xc]
080DDBAA: 0068         ldr r0,[r0,#0x0]
080DDBAC: 8068         ldr r0,[r0,#0x8]
080DDBAE: 6061         str r0,[r4,#0x14]
080DDBB0: 201c         add r0,r4,#0x0
080DDBB2: fff795fd     bl 0x080dd6e0
080DDBB6: 10bc         pop {r4}
080DDBB8: 01bc         pop {r0}
080DDBBA: 0047         bx r0
