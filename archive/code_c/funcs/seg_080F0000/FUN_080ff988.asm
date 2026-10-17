; undefined FUN_080ff988(void)
; entry 0x80ff988  size 32 bytes

080FF988: 00b5         push {lr}
080FF98A: c168         ldr r1,[r0,#0xc]
080FF98C: ca6a         ldr r2,[r1,#0x2c]
080FF98E: c36a         ldr r3,[r0,#0x2c]
080FF990: 4069         ldr r0,[r0,#0x14]
080FF992: 0421         mov r1,#0x4
080FF994: 0840         and r0,r1
080FF996: 0028         cmp r0,#0x0
080FF998: 04d0         beq 0x080ff9a4
080FF99A: 0820         mov r0,#0x8
080FF99C: 1056         ldrsb r0,[r2,r0]
080FF99E: 0028         cmp r0,#0x0
080FF9A0: 00d1         bne 0x080ff9a4
080FF9A2: da62         str r2,[r3,#0x2c]
080FF9A4: 01bc         pop {r0}
080FF9A6: 0047         bx r0
