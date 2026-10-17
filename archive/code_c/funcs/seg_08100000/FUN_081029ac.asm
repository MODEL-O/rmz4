; undefined FUN_081029ac(void)
; entry 0x81029ac  size 46 bytes

081029AC: 00b5         push {lr}
081029AE: 011c         add r1,r0,#0x0
081029B0: 0023         mov r3,#0x0
081029B2: bc31         add r1,#0xbc
081029B4: 0a88         ldrh r2,[r1,#0x0]
081029B6: 0949         ldr r1,[0x081029dc]
081029B8: 8a42         cmp r2,r1
081029BA: 07d1         bne 0x081029cc
081029BC: 0849         ldr r1,[0x081029e0]
081029BE: 0968         ldr r1,[r1,#0x0]
081029C0: 4a78         ldrb r2,[r1,#0x1]
081029C2: 0121         mov r1,#0x1
081029C4: 1140         and r1,r2
081029C6: 0029         cmp r1,#0x0
081029C8: 00d1         bne 0x081029cc
081029CA: 0423         mov r3,#0x4
081029CC: 002b         cmp r3,#0x0
081029CE: 02d0         beq 0x081029d6
081029D0: 181c         add r0,r3,#0x0
081029D2: 06f023fb     bl 0x0810901c
081029D6: 02bc         pop {r1}
081029D8: 0847         bx r1
