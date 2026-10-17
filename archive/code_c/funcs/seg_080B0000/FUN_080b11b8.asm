; undefined FUN_080b11b8(void)
; entry 0x80b11b8  size 48 bytes

080B11B8: 70b5         push {r4,r5,r6,lr}
080B11BA: 041c         add r4,r0,#0x0
080B11BC: 251c         add r5,r4,#0x0
080B11BE: 7435         add r5,#0x74
080B11C0: 094e         ldr r6,[0x080b11e8]
080B11C2: 281c         add r0,r5,#0x0
080B11C4: 311c         add r1,r6,#0x0
080B11C6: 54f7ddfa     bl 0x08005784
080B11CA: a06a         ldr r0,[r4,#0x28]
080B11CC: 7af70af9     bl 0x0802b3e4
080B11D0: 0028         cmp r0,#0x0
080B11D2: 06d0         beq 0x080b11e2
080B11D4: 311c         add r1,r6,#0x0
080B11D6: 1839         sub r1,#0x18
080B11D8: 281c         add r0,r5,#0x0
080B11DA: 54f7d3fa     bl 0x08005784
080B11DE: 0020         mov r0,#0x0
080B11E0: a062         str r0,[r4,#0x28]
080B11E2: 70bc         pop {r4,r5,r6}
080B11E4: 01bc         pop {r0}
080B11E6: 0047         bx r0
