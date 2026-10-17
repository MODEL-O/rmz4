; undefined FUN_08077b04(void)
; entry 0x8077b04  size 58 bytes

08077B04: 10b5         push {r4,lr}
08077B06: 041c         add r4,r0,#0x0
08077B08: 221c         add r2,r4,#0x0
08077B0A: c632         add r2,#0xc6
08077B0C: 1078         ldrb r0,[r2,#0x0]
08077B0E: 0130         add r0,#0x1
08077B10: 0121         mov r1,#0x1
08077B12: 0840         and r0,r1
08077B14: 1070         strb r0,[r2,#0x0]
08077B16: 0028         cmp r0,#0x0
08077B18: 03d0         beq 0x08077b22
08077B1A: 201c         add r0,r4,#0x0
08077B1C: 01f0c4fa     bl 0x080790a8
08077B20: 02e0         b 0x08077b28
08077B22: 201c         add r0,r4,#0x0
08077B24: 01f030fb     bl 0x08079188
08077B28: 0548         ldr r0,[0x08077b40]
08077B2A: 617b         ldrb r1,[r4,#0xd]
08077B2C: 8900         lsl r1,r1,#0x2
08077B2E: 0918         add r1,r1,r0
08077B30: 0968         ldr r1,[r1,#0x0]
08077B32: 201c         add r0,r4,#0x0
08077B34: b1f024fa     bl 0x08128f80
08077B38: 10bc         pop {r4}
08077B3A: 01bc         pop {r0}
08077B3C: 0047         bx r0
