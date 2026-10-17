; undefined FUN_080ed2fc(void)
; entry 0x80ed2fc  size 44 bytes

080ED2FC: 00b5         push {lr}
080ED2FE: 021c         add r2,r0,#0x0
080ED300: 5069         ldr r0,[r2,#0x14]
080ED302: 0421         mov r1,#0x4
080ED304: 0840         and r0,r1
080ED306: 0028         cmp r0,#0x0
080ED308: 0cd0         beq 0x080ed324
080ED30A: d068         ldr r0,[r2,#0xc]
080ED30C: c16a         ldr r1,[r0,#0x2c]
080ED30E: d26a         ldr r2,[r2,#0x2c]
080ED310: 0820         mov r0,#0x8
080ED312: 0856         ldrsb r0,[r1,r0]
080ED314: 0028         cmp r0,#0x0
080ED316: 05d1         bne 0x080ed324
080ED318: 487a         ldrb r0,[r1,#0x9]
080ED31A: 0028         cmp r0,#0x0
080ED31C: 02d1         bne 0x080ed324
080ED31E: 101c         add r0,r2,#0x0
080ED320: bc30         add r0,#0xbc
080ED322: 0160         str r1,[r0,#0x0]
080ED324: 01bc         pop {r0}
080ED326: 0047         bx r0
