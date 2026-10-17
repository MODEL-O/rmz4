; undefined FUN_080029dc(void)
; entry 0x80029dc  size 44 bytes

080029DC: 70b5         push {r4,r5,r6,lr}
080029DE: 034e         ldr r6,[0x080029ec]
080029E0: 3088         ldrh r0,[r6,#0x0]
080029E2: 051c         add r5,r0,#0x0
080029E4: 002d         cmp r5,#0x0
080029E6: 03d0         beq 0x080029f0
080029E8: 0138         sub r0,#0x1
080029EA: 09e0         b 0x08002a00
080029F0: 064c         ldr r4,[0x08002a0c]
080029F2: 2088         ldrh r0,[r4,#0x0]
080029F4: 0028         cmp r0,#0x0
080029F6: 04d0         beq 0x08002a02
080029F8: 24f1dcfe     bl 0x081277b4
080029FC: 2580         strh r5,[r4,#0x0]
080029FE: 0820         mov r0,#0x8
08002A00: 3080         strh r0,[r6,#0x0]
08002A02: 24f1d1fe     bl 0x081277a8
08002A06: 70bc         pop {r4,r5,r6}
08002A08: 01bc         pop {r0}
08002A0A: 0047         bx r0
