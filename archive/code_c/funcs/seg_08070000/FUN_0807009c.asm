; undefined FUN_0807009c(void)
; entry 0x807009c  size 50 bytes

0807009C: 10b5         push {r4,lr}
0807009E: 041c         add r4,r0,#0x0
080700A0: 6069         ldr r0,[r4,#0x14]
080700A2: 0121         mov r1,#0x1
080700A4: 0840         and r0,r1
080700A6: 0028         cmp r0,#0x0
080700A8: 0ed0         beq 0x080700c8
080700AA: 4920         mov r0,#0x49
080700AC: 96f76afc     bl 0x08006984
080700B0: e068         ldr r0,[r4,#0xc]
080700B2: c16a         ldr r1,[r0,#0x2c]
080700B4: e06a         ldr r0,[r4,#0x2c]
080700B6: 021c         add r2,r0,#0x0
080700B8: b432         add r2,#0xb4
080700BA: 0023         mov r3,#0x0
080700BC: 496d         ldr r1,[r1,#0x54]
080700BE: 406d         ldr r0,[r0,#0x54]
080700C0: 8142         cmp r1,r0
080700C2: 00dd         ble 0x080700c6
080700C4: 0123         mov r3,#0x1
080700C6: 1376         strb r3,[r2,#0x18]
080700C8: 10bc         pop {r4}
080700CA: 01bc         pop {r0}
080700CC: 0047         bx r0
