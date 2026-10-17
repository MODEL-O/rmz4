; undefined FUN_08086a14(void)
; entry 0x8086a14  size 46 bytes

08086A14: 10b5         push {r4,lr}
08086A16: 041c         add r4,r0,#0x0
08086A18: 0906         lsl r1,r1,#0x18
08086A1A: 090e         lsr r1,r1,#0x18
08086A1C: b630         add r0,#0xb6
08086A1E: 0170         strb r1,[r0,#0x0]
08086A20: 0138         sub r0,#0x1
08086A22: 0170         strb r1,[r0,#0x0]
08086A24: 0749         ldr r1,[0x08086a44]
08086A26: 0138         sub r0,#0x1
08086A28: 0078         ldrb r0,[r0,#0x0]
08086A2A: 8000         lsl r0,r0,#0x2
08086A2C: 4018         add r0,r0,r1
08086A2E: 0188         ldrh r1,[r0,#0x0]
08086A30: 201c         add r0,r4,#0x0
08086A32: 96f765fa     bl 0x0801cf00
08086A36: 201c         add r0,r4,#0x0
08086A38: 96f7dafa     bl 0x0801cff0
08086A3C: 10bc         pop {r4}
08086A3E: 01bc         pop {r0}
08086A40: 0047         bx r0
