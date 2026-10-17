; undefined FUN_080c719c(void)
; entry 0x80c719c  size 44 bytes

080C719C: 10b5         push {r4,lr}
080C719E: 011c         add r1,r0,#0x0
080C71A0: c868         ldr r0,[r1,#0xc]
080C71A2: c46a         ldr r4,[r0,#0x2c]
080C71A4: cb6a         ldr r3,[r1,#0x2c]
080C71A6: 5a7b         ldrb r2,[r3,#0xd]
080C71A8: 002a         cmp r2,#0x0
080C71AA: 0ad1         bne 0x080c71c2
080C71AC: 4869         ldr r0,[r1,#0x14]
080C71AE: 0421         mov r1,#0x4
080C71B0: 0840         and r0,r1
080C71B2: 0028         cmp r0,#0x0
080C71B4: 05d0         beq 0x080c71c2
080C71B6: 0820         mov r0,#0x8
080C71B8: 2056         ldrsb r0,[r4,r0]
080C71BA: 0028         cmp r0,#0x0
080C71BC: 01d1         bne 0x080c71c2
080C71BE: 501c         add r0,r2,#0x1
080C71C0: 5873         strb r0,[r3,#0xd]
080C71C2: 10bc         pop {r4}
080C71C4: 01bc         pop {r0}
080C71C6: 0047         bx r0
