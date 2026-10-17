; undefined FUN_08027c00(void)
; entry 0x8027c00  size 26 bytes

08027C00: 00b5         push {lr}
08027C02: 0169         ldr r1,[r0,#0x10]
08027C04: 0029         cmp r1,#0x0
08027C06: 06d0         beq 0x08027c16
08027C08: b022         mov r2,#0xb0
08027C0A: 5200         lsl r2,r2,#0x1
08027C0C: 8018         add r0,r0,r2
08027C0E: 0068         ldr r0,[r0,#0x0]
08027C10: 0028         cmp r0,#0x0
08027C12: 00dd         ble 0x08027c16
08027C14: 4865         str r0,[r1,#0x54]
08027C16: 01bc         pop {r0}
08027C18: 0047         bx r0
