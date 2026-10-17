; undefined FUN_080fc2fc(void)
; entry 0x80fc2fc  size 44 bytes

080FC2FC: 00b5         push {lr}
080FC2FE: 021c         add r2,r0,#0x0
080FC300: 5069         ldr r0,[r2,#0x14]
080FC302: 0421         mov r1,#0x4
080FC304: 0840         and r0,r1
080FC306: 0028         cmp r0,#0x0
080FC308: 0cd0         beq 0x080fc324
080FC30A: d068         ldr r0,[r2,#0xc]
080FC30C: c16a         ldr r1,[r0,#0x2c]
080FC30E: d26a         ldr r2,[r2,#0x2c]
080FC310: 0820         mov r0,#0x8
080FC312: 0856         ldrsb r0,[r1,r0]
080FC314: 0028         cmp r0,#0x0
080FC316: 05d1         bne 0x080fc324
080FC318: 487a         ldrb r0,[r1,#0x9]
080FC31A: 0028         cmp r0,#0x0
080FC31C: 02d1         bne 0x080fc324
080FC31E: 101c         add r0,r2,#0x0
080FC320: c030         add r0,#0xc0
080FC322: 0160         str r1,[r0,#0x0]
080FC324: 01bc         pop {r0}
080FC326: 0047         bx r0
