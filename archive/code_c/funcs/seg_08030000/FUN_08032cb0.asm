; undefined FUN_08032cb0(void)
; entry 0x8032cb0  size 64 bytes

08032CB0: 10b5         push {r4,lr}
08032CB2: 041c         add r4,r0,#0x0
08032CB4: a06d         ldr r0,[r4,#0x58]
08032CB6: 216e         ldr r1,[r4,#0x60]
08032CB8: 4018         add r0,r0,r1
08032CBA: a065         str r0,[r4,#0x58]
08032CBC: 0020         mov r0,#0x0
08032CBE: e065         str r0,[r4,#0x5c]
08032CC0: 1031         add r1,#0x10
08032CC2: 2166         str r1,[r4,#0x60]
08032CC4: ba21         mov r1,#0xba
08032CC6: 4900         lsl r1,r1,#0x1
08032CC8: 6018         add r0,r4,r1
08032CCA: 0178         ldrb r1,[r0,#0x0]
08032CCC: c900         lsl r1,r1,#0x3
08032CCE: 0848         ldr r0,[0x08032cf0]
08032CD0: 0918         add r1,r1,r0
08032CD2: 201c         add r0,r4,#0x0
08032CD4: 0022         mov r2,#0x0
08032CD6: f9f787f9     bl 0x0802bfe8
08032CDA: 206e         ldr r0,[r4,#0x60]
08032CDC: 0028         cmp r0,#0x0
08032CDE: 04dd         ble 0x08032cea
08032CE0: 0220         mov r0,#0x2
08032CE2: a073         strb r0,[r4,#0xe]
08032CE4: 201c         add r0,r4,#0x0
08032CE6: 00f005f8     bl 0x08032cf4
08032CEA: 10bc         pop {r4}
08032CEC: 01bc         pop {r0}
08032CEE: 0047         bx r0
