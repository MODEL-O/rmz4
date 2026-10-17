; undefined FUN_080c24a4(void)
; entry 0x80c24a4  size 64 bytes

080C24A4: 10b5         push {r4,lr}
080C24A6: 041c         add r4,r0,#0x0
080C24A8: 0e48         ldr r0,[0x080c24e4]
080C24AA: 0068         ldr r0,[r0,#0x0]
080C24AC: 43f728f8     bl 0x08005500
080C24B0: 031c         add r3,r0,#0x0
080C24B2: 002b         cmp r3,#0x0
080C24B4: 12d0         beq 0x080c24dc
080C24B6: 191c         add r1,r3,#0x0
080C24B8: 2531         add r1,#0x25
080C24BA: 0022         mov r2,#0x0
080C24BC: 0820         mov r0,#0x8
080C24BE: 0870         strb r0,[r1,#0x0]
080C24C0: 0949         ldr r1,[0x080c24e8]
080C24C2: 0f20         mov r0,#0xf
080C24C4: 5872         strb r0,[r3,#0x9]
080C24C6: c86b         ldr r0,[r1,#0x3c]
080C24C8: 0068         ldr r0,[r0,#0x0]
080C24CA: 5861         str r0,[r3,#0x14]
080C24CC: 0020         mov r0,#0x0
080C24CE: 1a84         strh r2,[r3,#0x20]
080C24D0: 191c         add r1,r3,#0x0
080C24D2: 2231         add r1,#0x22
080C24D4: 0870         strb r0,[r1,#0x0]
080C24D6: 9c62         str r4,[r3,#0x28]
080C24D8: 0120         mov r0,#0x1
080C24DA: 1874         strb r0,[r3,#0x10]
080C24DC: 181c         add r0,r3,#0x0
080C24DE: 10bc         pop {r4}
080C24E0: 02bc         pop {r1}
080C24E2: 0847         bx r1
