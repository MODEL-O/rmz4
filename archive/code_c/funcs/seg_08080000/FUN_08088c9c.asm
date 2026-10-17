; undefined FUN_08088c9c(void)
; entry 0x8088c9c  size 60 bytes

08088C9C: 10b5         push {r4,lr}
08088C9E: 041c         add r4,r0,#0x0
08088CA0: e16d         ldr r1,[r4,#0x5c]
08088CA2: 00f087f8     bl 0x08088db4
08088CA6: 216e         ldr r1,[r4,#0x60]
08088CA8: 201c         add r0,r4,#0x0
08088CAA: 00f019f9     bl 0x08088ee0
08088CAE: 0028         cmp r0,#0x0
08088CB0: 06d0         beq 0x08088cc0
08088CB2: 206e         ldr r0,[r4,#0x60]
08088CB4: 0028         cmp r0,#0x0
08088CB6: 01db         blt 0x08088cbc
08088CB8: 0120         mov r0,#0x1
08088CBA: 0ae0         b 0x08088cd2
08088CBC: 0020         mov r0,#0x0
08088CBE: 2066         str r0,[r4,#0x60]
08088CC0: 206e         ldr r0,[r4,#0x60]
08088CC2: 4030         add r0,#0x40
08088CC4: 2066         str r0,[r4,#0x60]
08088CC6: e021         mov r1,#0xe0
08088CC8: c900         lsl r1,r1,#0x3
08088CCA: 8842         cmp r0,r1
08088CCC: 00dd         ble 0x08088cd0
08088CCE: 2166         str r1,[r4,#0x60]
08088CD0: 0020         mov r0,#0x0
08088CD2: 10bc         pop {r4}
08088CD4: 02bc         pop {r1}
08088CD6: 0847         bx r1
