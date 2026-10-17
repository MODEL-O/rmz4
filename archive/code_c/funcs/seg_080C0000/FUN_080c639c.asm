; undefined FUN_080c639c(void)
; entry 0x80c639c  size 68 bytes

080C639C: 30b5         push {r4,r5,lr}
080C639E: 041c         add r4,r0,#0x0
080C63A0: 0906         lsl r1,r1,#0x18
080C63A2: 0d0e         lsr r5,r1,#0x18
080C63A4: 0e48         ldr r0,[0x080c63e0]
080C63A6: 0068         ldr r0,[r0,#0x0]
080C63A8: 3ff7aaf8     bl 0x08005500
080C63AC: 031c         add r3,r0,#0x0
080C63AE: 002b         cmp r3,#0x0
080C63B0: 13d0         beq 0x080c63da
080C63B2: 191c         add r1,r3,#0x0
080C63B4: 2531         add r1,#0x25
080C63B6: 0022         mov r2,#0x0
080C63B8: 0820         mov r0,#0x8
080C63BA: 0870         strb r0,[r1,#0x0]
080C63BC: 0949         ldr r1,[0x080c63e4]
080C63BE: 1a20         mov r0,#0x1a
080C63C0: 5872         strb r0,[r3,#0x9]
080C63C2: 886e         ldr r0,[r1,#0x68]
080C63C4: 0068         ldr r0,[r0,#0x0]
080C63C6: 5861         str r0,[r3,#0x14]
080C63C8: 0020         mov r0,#0x0
080C63CA: 1a84         strh r2,[r3,#0x20]
080C63CC: 191c         add r1,r3,#0x0
080C63CE: 2231         add r1,#0x22
080C63D0: 0870         strb r0,[r1,#0x0]
080C63D2: 9c62         str r4,[r3,#0x28]
080C63D4: 0320         mov r0,#0x3
080C63D6: 1874         strb r0,[r3,#0x10]
080C63D8: 5d74         strb r5,[r3,#0x11]
080C63DA: 30bc         pop {r4,r5}
080C63DC: 01bc         pop {r0}
080C63DE: 0047         bx r0
