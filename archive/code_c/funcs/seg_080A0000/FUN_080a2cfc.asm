; undefined FUN_080a2cfc(void)
; entry 0x80a2cfc  size 64 bytes

080A2CFC: 10b5         push {r4,lr}
080A2CFE: c46a         ldr r4,[r0,#0x2c]
080A2D00: 4169         ldr r1,[r0,#0x14]
080A2D02: 0120         mov r0,#0x1
080A2D04: 0840         and r0,r1
080A2D06: 0028         cmp r0,#0x0
080A2D08: 15d0         beq 0x080a2d36
080A2D0A: 0c48         ldr r0,[0x080a2d3c]
080A2D0C: 0268         ldr r2,[r0,#0x0]
080A2D0E: 8020         mov r0,#0x80
080A2D10: 8000         lsl r0,r0,#0x2
080A2D12: 0840         and r0,r1
080A2D14: 0028         cmp r0,#0x0
080A2D16: 0ed0         beq 0x080a2d36
080A2D18: 8020         mov r0,#0x80
080A2D1A: 8002         lsl r0,r0,#0xa
080A2D1C: 0140         and r1,r0
080A2D1E: 0029         cmp r1,#0x0
080A2D20: 09d0         beq 0x080a2d36
080A2D22: 002a         cmp r2,#0x0
080A2D24: 07d0         beq 0x080a2d36
080A2D26: 101c         add r0,r2,#0x0
080A2D28: 0421         mov r1,#0x4
080A2D2A: 0222         mov r2,#0x2
080A2D2C: 97f724fc     bl 0x0803a578
080A2D30: 211c         add r1,r4,#0x0
080A2D32: b831         add r1,#0xb8
080A2D34: 0870         strb r0,[r1,#0x0]
080A2D36: 10bc         pop {r4}
080A2D38: 01bc         pop {r0}
080A2D3A: 0047         bx r0
