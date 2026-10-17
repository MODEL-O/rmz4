; undefined FUN_080503cc(void)
; entry 0x80503cc  size 56 bytes

080503CC: 70b5         push {r4,r5,r6,lr}
080503CE: 4646         mov r6,r8
080503D0: 40b4         push {r6}
080503D2: 051c         add r5,r0,#0x0
080503D4: ab7a         ldrb r3,[r5,#0xa]
080503D6: 0420         mov r0,#0x4
080503D8: 0024         mov r4,#0x0
080503DA: a046         mov r8,r4
080503DC: 1843         orr r0,r3
080503DE: a872         strb r0,[r5,#0xa]
080503E0: 2c1c         add r4,r5,#0x0
080503E2: 7434         add r4,#0x74
080503E4: 2e1c         add r6,r5,#0x0
080503E6: 5436         add r6,#0x54
080503E8: 1304         lsl r3,r2,#0x10
080503EA: 1b14         asr r3,r3,#0x10
080503EC: 201c         add r0,r4,#0x0
080503EE: 321c         add r2,r6,#0x0
080503F0: b5f7b6f9     bl 0x08005760
080503F4: e562         str r5,[r4,#0x2c]
080503F6: 4046         mov r0,r8
080503F8: 6062         str r0,[r4,#0x24]
080503FA: 08bc         pop {r3}
080503FC: 9846         mov r8,r3
080503FE: 70bc         pop {r4,r5,r6}
08050400: 01bc         pop {r0}
08050402: 0047         bx r0
