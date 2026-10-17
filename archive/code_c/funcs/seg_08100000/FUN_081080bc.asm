; undefined FUN_081080bc(void)
; entry 0x81080bc  size 60 bytes

081080BC: 00b5         push {lr}
081080BE: 011c         add r1,r0,#0x0
081080C0: 087c         ldrb r0,[r1,#0x10]
081080C2: 0028         cmp r0,#0x0
081080C4: 0ed1         bne 0x081080e4
081080C6: c86a         ldr r0,[r1,#0x2c]
081080C8: 054b         ldr r3,[0x081080e0]
081080CA: c218         add r2,r0,r3
081080CC: 081c         add r0,r1,#0x0
081080CE: b530         add r0,#0xb5
081080D0: 0078         ldrb r0,[r0,#0x0]
081080D2: d064         str r0,[r2,#0x4c]
081080D4: 0028         cmp r0,#0x0
081080D6: 10d1         bne 0x081080fa
081080D8: 0120         mov r0,#0x1
081080DA: d064         str r0,[r2,#0x4c]
081080DC: 0de0         b 0x081080fa
081080E4: c86a         ldr r0,[r1,#0x2c]
081080E6: 064b         ldr r3,[0x08108100]
081080E8: c218         add r2,r0,r3
081080EA: 081c         add r0,r1,#0x0
081080EC: b530         add r0,#0xb5
081080EE: 0078         ldrb r0,[r0,#0x0]
081080F0: 1065         str r0,[r2,#0x50]
081080F2: 0028         cmp r0,#0x0
081080F4: 01d1         bne 0x081080fa
081080F6: 0120         mov r0,#0x1
081080F8: 1065         str r0,[r2,#0x50]
081080FA: 01bc         pop {r0}
081080FC: 0047         bx r0
