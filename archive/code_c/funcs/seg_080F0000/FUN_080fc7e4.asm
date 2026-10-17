; undefined FUN_080fc7e4(void)
; entry 0x80fc7e4  size 44 bytes

080FC7E4: 00b5         push {lr}
080FC7E6: 021c         add r2,r0,#0x0
080FC7E8: 5069         ldr r0,[r2,#0x14]
080FC7EA: 0421         mov r1,#0x4
080FC7EC: 0840         and r0,r1
080FC7EE: 0028         cmp r0,#0x0
080FC7F0: 0cd0         beq 0x080fc80c
080FC7F2: d068         ldr r0,[r2,#0xc]
080FC7F4: c16a         ldr r1,[r0,#0x2c]
080FC7F6: d26a         ldr r2,[r2,#0x2c]
080FC7F8: 0820         mov r0,#0x8
080FC7FA: 0856         ldrsb r0,[r1,r0]
080FC7FC: 0028         cmp r0,#0x0
080FC7FE: 05d1         bne 0x080fc80c
080FC800: 487a         ldrb r0,[r1,#0x9]
080FC802: 0028         cmp r0,#0x0
080FC804: 02d1         bne 0x080fc80c
080FC806: 101c         add r0,r2,#0x0
080FC808: c030         add r0,#0xc0
080FC80A: 0160         str r1,[r0,#0x0]
080FC80C: 01bc         pop {r0}
080FC80E: 0047         bx r0
