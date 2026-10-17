; undefined FUN_080fb6b4(void)
; entry 0x80fb6b4  size 46 bytes

080FB6B4: 30b5         push {r4,r5,lr}
080FB6B6: 041c         add r4,r0,#0x0
080FB6B8: 251c         add r5,r4,#0x0
080FB6BA: c035         add r5,#0xc0
080FB6BC: 2868         ldr r0,[r5,#0x0]
080FB6BE: 2ff791fe     bl 0x0802b3e4
080FB6C2: 0028         cmp r0,#0x0
080FB6C4: 0ad0         beq 0x080fb6dc
080FB6C6: 201c         add r0,r4,#0x0
080FB6C8: 7430         add r0,#0x74
080FB6CA: 0649         ldr r1,[0x080fb6e4]
080FB6CC: 0af75af8     bl 0x08005784
080FB6D0: 0021         mov r1,#0x0
080FB6D2: 2960         str r1,[r5,#0x0]
080FB6D4: 607b         ldrb r0,[r4,#0xd]
080FB6D6: 0128         cmp r0,#0x1
080FB6D8: 00d1         bne 0x080fb6dc
080FB6DA: a173         strb r1,[r4,#0xe]
080FB6DC: 30bc         pop {r4,r5}
080FB6DE: 01bc         pop {r0}
080FB6E0: 0047         bx r0
