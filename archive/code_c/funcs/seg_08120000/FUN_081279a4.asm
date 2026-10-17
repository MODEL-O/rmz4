; undefined FUN_081279a4(void)
; entry 0x81279a4  size 72 bytes

081279A4: f0b5         push {r4,r5,r6,r7,lr}
081279A6: 057a         ldrb r5,[r0,#0x8]
081279A8: c46a         ldr r4,[r0,#0x2c]
081279AA: 002d         cmp r5,#0x0
081279AC: 1bdd         ble 0x081279e6
081279AE: 8027         mov r7,#0x80
081279B0: 2178         ldrb r1,[r4,#0x0]
081279B2: 381c         add r0,r7,#0x0
081279B4: 0840         and r0,r1
081279B6: 0028         cmp r0,#0x0
081279B8: 11d0         beq 0x081279de
081279BA: 4026         mov r6,#0x40
081279BC: 301c         add r0,r6,#0x0
081279BE: 0840         and r0,r1
081279C0: 0028         cmp r0,#0x0
081279C2: 0cd0         beq 0x081279de
081279C4: 201c         add r0,r4,#0x0
081279C6: 00f0a9f8     bl 0x08127b1c
081279CA: 2770         strb r7,[r4,#0x0]
081279CC: 0220         mov r0,#0x2
081279CE: e073         strb r0,[r4,#0xf]
081279D0: e674         strb r6,[r4,#0x13]
081279D2: 1620         mov r0,#0x16
081279D4: 6076         strb r0,[r4,#0x19]
081279D6: 211c         add r1,r4,#0x0
081279D8: 2431         add r1,#0x24
081279DA: 0120         mov r0,#0x1
081279DC: 0870         strb r0,[r1,#0x0]
081279DE: 013d         sub r5,#0x1
081279E0: 5034         add r4,#0x50
081279E2: 002d         cmp r5,#0x0
081279E4: e4dc         bgt 0x081279b0
081279E6: f0bc         pop {r4,r5,r6,r7}
081279E8: 01bc         pop {r0}
081279EA: 0047         bx r0
