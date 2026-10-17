; undefined FUN_080156b4(void)
; entry 0x80156b4  size 60 bytes

080156B4: 10b5         push {r4,lr}
080156B6: 031c         add r3,r0,#0x0
080156B8: 9c7b         ldrb r4,[r3,#0xe]
080156BA: 002c         cmp r4,#0x0
080156BC: 15d1         bne 0x080156ea
080156BE: d96d         ldr r1,[r3,#0x5c]
080156C0: 0909         lsr r1,r1,#0x4
080156C2: 4900         lsl r1,r1,#0x1
080156C4: 0a48         ldr r0,[0x080156f0]
080156C6: 0918         add r1,r1,r0
080156C8: 0a88         ldrh r2,[r1,#0x0]
080156CA: 0a48         ldr r0,[0x080156f4]
080156CC: 1040         and r0,r2
080156CE: 0322         mov r2,#0x3
080156D0: 1043         orr r0,r2
080156D2: 0880         strh r0,[r1,#0x0]
080156D4: c320         mov r0,#0xc3
080156D6: 0001         lsl r0,r0,#0x4
080156D8: d864         str r0,[r3,#0x4c]
080156DA: 1c65         str r4,[r3,#0x50]
080156DC: 8020         mov r0,#0x80
080156DE: 5864         str r0,[r3,#0x44]
080156E0: 8030         add r0,#0x80
080156E2: 9864         str r0,[r3,#0x48]
080156E4: 987b         ldrb r0,[r3,#0xe]
080156E6: 0130         add r0,#0x1
080156E8: 9873         strb r0,[r3,#0xe]
080156EA: 10bc         pop {r4}
080156EC: 01bc         pop {r0}
080156EE: 0047         bx r0
