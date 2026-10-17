; undefined FUN_080e04e0(void)
; entry 0x80e04e0  size 56 bytes

080E04E0: 10b5         push {r4,lr}
080E04E2: 041c         add r4,r0,#0x0
080E04E4: 3cf784fd     bl 0x0801cff0
080E04E8: a06d         ldr r0,[r4,#0x58]
080E04EA: 216e         ldr r1,[r4,#0x60]
080E04EC: 4018         add r0,r0,r1
080E04EE: a065         str r0,[r4,#0x58]
080E04F0: 201c         add r0,r4,#0x0
080E04F2: 7330         add r0,#0x73
080E04F4: 0078         ldrb r0,[r0,#0x0]
080E04F6: 0328         cmp r0,#0x3
080E04F8: 0bd1         bne 0x080e0512
080E04FA: 0749         ldr r1,[0x080e0518]
080E04FC: 607a         ldrb r0,[r4,#0x9]
080E04FE: 8000         lsl r0,r0,#0x2
080E0500: 4018         add r0,r0,r1
080E0502: 0221         mov r1,#0x2
080E0504: e160         str r1,[r4,#0xc]
080E0506: 0068         ldr r0,[r0,#0x0]
080E0508: 8068         ldr r0,[r0,#0x8]
080E050A: 6061         str r0,[r4,#0x14]
080E050C: 201c         add r0,r4,#0x0
080E050E: 00f025f8     bl 0x080e055c
080E0512: 10bc         pop {r4}
080E0514: 01bc         pop {r0}
080E0516: 0047         bx r0
