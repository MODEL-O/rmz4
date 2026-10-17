; undefined FUN_080bdfec(void)
; entry 0x80bdfec  size 62 bytes

080BDFEC: 30b5         push {r4,r5,lr}
080BDFEE: 041c         add r4,r0,#0x0
080BDFF0: 0d1c         add r5,r1,#0x0
080BDFF2: 0e48         ldr r0,[0x080be02c]
080BDFF4: 0068         ldr r0,[r0,#0x0]
080BDFF6: 47f783fa     bl 0x08005500
080BDFFA: 031c         add r3,r0,#0x0
080BDFFC: 002b         cmp r3,#0x0
080BDFFE: 11d0         beq 0x080be024
080BE000: 191c         add r1,r3,#0x0
080BE002: 2531         add r1,#0x25
080BE004: 0022         mov r2,#0x0
080BE006: 0820         mov r0,#0x8
080BE008: 0870         strb r0,[r1,#0x0]
080BE00A: 0949         ldr r1,[0x080be030]
080BE00C: 0220         mov r0,#0x2
080BE00E: 5872         strb r0,[r3,#0x9]
080BE010: 8868         ldr r0,[r1,#0x8]
080BE012: 0068         ldr r0,[r0,#0x0]
080BE014: 5861         str r0,[r3,#0x14]
080BE016: 0020         mov r0,#0x0
080BE018: 1a84         strh r2,[r3,#0x20]
080BE01A: 191c         add r1,r3,#0x0
080BE01C: 2231         add r1,#0x22
080BE01E: 0870         strb r0,[r1,#0x0]
080BE020: 5c65         str r4,[r3,#0x54]
080BE022: 9d65         str r5,[r3,#0x58]
080BE024: 30bc         pop {r4,r5}
080BE026: 01bc         pop {r0}
080BE028: 0047         bx r0
