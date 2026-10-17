; undefined FUN_080d6898(void)
; entry 0x80d6898  size 68 bytes

080D6898: 30b5         push {r4,r5,lr}
080D689A: 041c         add r4,r0,#0x0
080D689C: 0d1c         add r5,r1,#0x0
080D689E: 0f48         ldr r0,[0x080d68dc]
080D68A0: 0068         ldr r0,[r0,#0x0]
080D68A2: 2ef72dfe     bl 0x08005500
080D68A6: 031c         add r3,r0,#0x0
080D68A8: 002b         cmp r3,#0x0
080D68AA: 14d0         beq 0x080d68d6
080D68AC: 191c         add r1,r3,#0x0
080D68AE: 2531         add r1,#0x25
080D68B0: 0022         mov r2,#0x0
080D68B2: 0120         mov r0,#0x1
080D68B4: 0870         strb r0,[r1,#0x0]
080D68B6: 0a49         ldr r1,[0x080d68e0]
080D68B8: 1520         mov r0,#0x15
080D68BA: 5872         strb r0,[r3,#0x9]
080D68BC: 486d         ldr r0,[r1,#0x54]
080D68BE: 0068         ldr r0,[r0,#0x0]
080D68C0: 5861         str r0,[r3,#0x14]
080D68C2: 0021         mov r1,#0x0
080D68C4: 1a84         strh r2,[r3,#0x20]
080D68C6: 181c         add r0,r3,#0x0
080D68C8: 2230         add r0,#0x22
080D68CA: 0170         strb r1,[r0,#0x0]
080D68CC: 0320         mov r0,#0x3
080D68CE: 1874         strb r0,[r3,#0x10]
080D68D0: 5974         strb r1,[r3,#0x11]
080D68D2: 5c65         str r4,[r3,#0x54]
080D68D4: 9d65         str r5,[r3,#0x58]
080D68D6: 30bc         pop {r4,r5}
080D68D8: 01bc         pop {r0}
080D68DA: 0047         bx r0
