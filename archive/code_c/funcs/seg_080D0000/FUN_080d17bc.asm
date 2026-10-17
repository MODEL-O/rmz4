; undefined FUN_080d17bc(void)
; entry 0x80d17bc  size 62 bytes

080D17BC: 10b5         push {r4,lr}
080D17BE: 0006         lsl r0,r0,#0x18
080D17C0: 040e         lsr r4,r0,#0x18
080D17C2: 0e48         ldr r0,[0x080d17fc]
080D17C4: 0068         ldr r0,[r0,#0x0]
080D17C6: 33f79bfe     bl 0x08005500
080D17CA: 031c         add r3,r0,#0x0
080D17CC: 002b         cmp r3,#0x0
080D17CE: 10d0         beq 0x080d17f2
080D17D0: 191c         add r1,r3,#0x0
080D17D2: 2531         add r1,#0x25
080D17D4: 0022         mov r2,#0x0
080D17D6: 0120         mov r0,#0x1
080D17D8: 0870         strb r0,[r1,#0x0]
080D17DA: 0949         ldr r1,[0x080d1800]
080D17DC: 0320         mov r0,#0x3
080D17DE: 5872         strb r0,[r3,#0x9]
080D17E0: c868         ldr r0,[r1,#0xc]
080D17E2: 0068         ldr r0,[r0,#0x0]
080D17E4: 5861         str r0,[r3,#0x14]
080D17E6: 0020         mov r0,#0x0
080D17E8: 1a84         strh r2,[r3,#0x20]
080D17EA: 191c         add r1,r3,#0x0
080D17EC: 2231         add r1,#0x22
080D17EE: 0870         strb r0,[r1,#0x0]
080D17F0: 1c74         strb r4,[r3,#0x10]
080D17F2: 181c         add r0,r3,#0x0
080D17F4: 10bc         pop {r4}
080D17F6: 02bc         pop {r1}
080D17F8: 0847         bx r1
