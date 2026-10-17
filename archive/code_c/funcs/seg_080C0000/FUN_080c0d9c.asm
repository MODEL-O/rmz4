; undefined FUN_080c0d9c(void)
; entry 0x80c0d9c  size 70 bytes

080C0D9C: 30b5         push {r4,r5,lr}
080C0D9E: 041c         add r4,r0,#0x0
080C0DA0: 0906         lsl r1,r1,#0x18
080C0DA2: 0d0e         lsr r5,r1,#0x18
080C0DA4: 0f48         ldr r0,[0x080c0de4]
080C0DA6: 0068         ldr r0,[r0,#0x0]
080C0DA8: 44f7aafb     bl 0x08005500
080C0DAC: 031c         add r3,r0,#0x0
080C0DAE: 002b         cmp r3,#0x0
080C0DB0: 13d0         beq 0x080c0dda
080C0DB2: 191c         add r1,r3,#0x0
080C0DB4: 2531         add r1,#0x25
080C0DB6: 0022         mov r2,#0x0
080C0DB8: 0820         mov r0,#0x8
080C0DBA: 0870         strb r0,[r1,#0x0]
080C0DBC: 0a49         ldr r1,[0x080c0de8]
080C0DBE: 0c20         mov r0,#0xc
080C0DC0: 5872         strb r0,[r3,#0x9]
080C0DC2: 086b         ldr r0,[r1,#0x30]
080C0DC4: 0068         ldr r0,[r0,#0x0]
080C0DC6: 5861         str r0,[r3,#0x14]
080C0DC8: 0020         mov r0,#0x0
080C0DCA: 1a84         strh r2,[r3,#0x20]
080C0DCC: 191c         add r1,r3,#0x0
080C0DCE: 2231         add r1,#0x22
080C0DD0: 0870         strb r0,[r1,#0x0]
080C0DD2: 9c62         str r4,[r3,#0x28]
080C0DD4: 0120         mov r0,#0x1
080C0DD6: 1874         strb r0,[r3,#0x10]
080C0DD8: 5d74         strb r5,[r3,#0x11]
080C0DDA: 181c         add r0,r3,#0x0
080C0DDC: 30bc         pop {r4,r5}
080C0DDE: 02bc         pop {r1}
080C0DE0: 0847         bx r1
