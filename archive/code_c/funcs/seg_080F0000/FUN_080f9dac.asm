; undefined FUN_080f9dac(void)
; entry 0x80f9dac  size 64 bytes

080F9DAC: 00b5         push {lr}
080F9DAE: c26a         ldr r2,[r0,#0x2c]
080F9DB0: c168         ldr r1,[r0,#0xc]
080F9DB2: c96a         ldr r1,[r1,#0x2c]
080F9DB4: 4069         ldr r0,[r0,#0x14]
080F9DB6: 0123         mov r3,#0x1
080F9DB8: 1840         and r0,r3
080F9DBA: 0028         cmp r0,#0x0
080F9DBC: 14d0         beq 0x080f9de8
080F9DBE: 486d         ldr r0,[r1,#0x54]
080F9DC0: 516d         ldr r1,[r2,#0x54]
080F9DC2: 8842         cmp r0,r1
080F9DC4: 04da         bge 0x080f9dd0
080F9DC6: 111c         add r1,r2,#0x0
080F9DC8: b631         add r1,#0xb6
080F9DCA: 0020         mov r0,#0x0
080F9DCC: 0870         strb r0,[r1,#0x0]
080F9DCE: 0be0         b 0x080f9de8
080F9DD0: 8142         cmp r1,r0
080F9DD2: 06db         blt 0x080f9de2
080F9DD4: 0023         mov r3,#0x0
080F9DD6: 0548         ldr r0,[0x080f9dec]
080F9DD8: 0068         ldr r0,[r0,#0x0]
080F9DDA: 406d         ldr r0,[r0,#0x54]
080F9DDC: 8142         cmp r1,r0
080F9DDE: 00da         bge 0x080f9de2
080F9DE0: 0123         mov r3,#0x1
080F9DE2: 101c         add r0,r2,#0x0
080F9DE4: b630         add r0,#0xb6
080F9DE6: 0370         strb r3,[r0,#0x0]
080F9DE8: 01bc         pop {r0}
080F9DEA: 0047         bx r0
