; undefined FUN_080b64e0(void)
; entry 0x80b64e0  size 56 bytes

080B64E0: 10b5         push {r4,lr}
080B64E2: 031c         add r3,r0,#0x0
080B64E4: 986a         ldr r0,[r3,#0x28]
080B64E6: 011c         add r1,r0,#0x0
080B64E8: cc31         add r1,#0xcc
080B64EA: 0a88         ldrh r2,[r1,#0x0]
080B64EC: 0024         mov r4,#0x0
080B64EE: 085f         ldrsh r0,[r1,r4]
080B64F0: 0028         cmp r0,#0x0
080B64F2: 01d0         beq 0x080b64f8
080B64F4: 501e         sub r0,r2,#0x1
080B64F6: 0880         strh r0,[r1,#0x0]
080B64F8: 9a6a         ldr r2,[r3,#0x28]
080B64FA: ce32         add r2,#0xce
080B64FC: 181c         add r0,r3,#0x0
080B64FE: b530         add r0,#0xb5
080B6500: 0121         mov r1,#0x1
080B6502: 0078         ldrb r0,[r0,#0x0]
080B6504: 8140         lsl r1,r0
080B6506: 1078         ldrb r0,[r2,#0x0]
080B6508: 8843         bic r0,r1
080B650A: 1070         strb r0,[r2,#0x0]
080B650C: 181c         add r0,r3,#0x0
080B650E: c9f7edf9     bl 0x0807f8ec
080B6512: 10bc         pop {r4}
080B6514: 01bc         pop {r0}
080B6516: 0047         bx r0
