; undefined FUN_081019b0(void)
; entry 0x81019b0  size 28 bytes

081019B0: 00b5         push {lr}
081019B2: 064a         ldr r2,[0x081019cc]
081019B4: 417a         ldrb r1,[r0,#0x9]
081019B6: 8900         lsl r1,r1,#0x2
081019B8: 8918         add r1,r1,r2
081019BA: 0122         mov r2,#0x1
081019BC: c260         str r2,[r0,#0xc]
081019BE: 0968         ldr r1,[r1,#0x0]
081019C0: 4968         ldr r1,[r1,#0x4]
081019C2: 4161         str r1,[r0,#0x14]
081019C4: fff7e0fe     bl 0x08101788
081019C8: 01bc         pop {r0}
081019CA: 0047         bx r0
