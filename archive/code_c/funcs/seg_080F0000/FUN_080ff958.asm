; undefined FUN_080ff958(void)
; entry 0x80ff958  size 42 bytes

080FF958: 00b5         push {lr}
080FF95A: c168         ldr r1,[r0,#0xc]
080FF95C: ca6a         ldr r2,[r1,#0x2c]
080FF95E: c36a         ldr r3,[r0,#0x2c]
080FF960: 4069         ldr r0,[r0,#0x14]
080FF962: 0421         mov r1,#0x4
080FF964: 0840         and r0,r1
080FF966: 0028         cmp r0,#0x0
080FF968: 09d0         beq 0x080ff97e
080FF96A: 0820         mov r0,#0x8
080FF96C: 1056         ldrsb r0,[r2,r0]
080FF96E: 0028         cmp r0,#0x0
080FF970: 05d1         bne 0x080ff97e
080FF972: 0449         ldr r1,[0x080ff984]
080FF974: 5018         add r0,r2,r1
080FF976: 0078         ldrb r0,[r0,#0x0]
080FF978: 0028         cmp r0,#0x0
080FF97A: 00d0         beq 0x080ff97e
080FF97C: da62         str r2,[r3,#0x2c]
080FF97E: 01bc         pop {r0}
080FF980: 0047         bx r0
