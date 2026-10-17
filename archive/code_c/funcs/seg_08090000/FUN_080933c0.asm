; undefined FUN_080933c0(void)
; entry 0x80933c0  size 32 bytes

080933C0: 10b5         push {r4,lr}
080933C2: 041c         add r4,r0,#0x0
080933C4: 616d         ldr r1,[r4,#0x54]
080933C6: a26d         ldr r2,[r4,#0x58]
080933C8: 01f0f4f9     bl 0x080947b4
080933CC: 011c         add r1,r0,#0x0
080933CE: 0029         cmp r1,#0x0
080933D0: 03d1         bne 0x080933da
080933D2: 0820         mov r0,#0x8
080933D4: 6073         strb r0,[r4,#0xd]
080933D6: a173         strb r1,[r4,#0xe]
080933D8: e173         strb r1,[r4,#0xf]
080933DA: 10bc         pop {r4}
080933DC: 01bc         pop {r0}
080933DE: 0047         bx r0
