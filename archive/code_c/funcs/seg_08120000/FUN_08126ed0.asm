; undefined FUN_08126ed0(void)
; entry 0x8126ed0  size 32 bytes

08126ED0: c36a         ldr r3,[r0,#0x2c]
08126ED2: 002b         cmp r3,#0x0
08126ED4: 0bd0         beq 0x08126eee
08126ED6: 416b         ldr r1,[r0,#0x34]
08126ED8: 026b         ldr r2,[r0,#0x30]
08126EDA: 002a         cmp r2,#0x0
08126EDC: 01d0         beq 0x08126ee2
08126EDE: 5163         str r1,[r2,#0x34]
08126EE0: 00e0         b 0x08126ee4
08126EE2: 1962         str r1,[r3,#0x20]
08126EE4: 0029         cmp r1,#0x0
08126EE6: 00d0         beq 0x08126eea
08126EE8: 0a63         str r2,[r1,#0x30]
08126EEA: 0021         mov r1,#0x0
08126EEC: c162         str r1,[r0,#0x2c]
08126EEE: 7047         bx lr
