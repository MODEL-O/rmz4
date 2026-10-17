; undefined FUN_080933a0(void)
; entry 0x80933a0  size 32 bytes

080933A0: 10b5         push {r4,lr}
080933A2: 041c         add r4,r0,#0x0
080933A4: 616d         ldr r1,[r4,#0x54]
080933A6: a26d         ldr r2,[r4,#0x58]
080933A8: 01f004fa     bl 0x080947b4
080933AC: 011c         add r1,r0,#0x0
080933AE: 0029         cmp r1,#0x0
080933B0: 03d1         bne 0x080933ba
080933B2: 0820         mov r0,#0x8
080933B4: 6073         strb r0,[r4,#0xd]
080933B6: a173         strb r1,[r4,#0xe]
080933B8: e173         strb r1,[r4,#0xf]
080933BA: 10bc         pop {r4}
080933BC: 01bc         pop {r0}
080933BE: 0047         bx r0
