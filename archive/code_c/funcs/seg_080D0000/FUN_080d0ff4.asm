; undefined FUN_080d0ff4(void)
; entry 0x80d0ff4  size 66 bytes

080D0FF4: 70b5         push {r4,r5,r6,lr}
080D0FF6: 051c         add r5,r0,#0x0
080D0FF8: 0e1c         add r6,r1,#0x0
080D0FFA: 1206         lsl r2,r2,#0x18
080D0FFC: 140e         lsr r4,r2,#0x18
080D0FFE: 0e48         ldr r0,[0x080d1038]
080D1000: 0068         ldr r0,[r0,#0x0]
080D1002: 34f77dfa     bl 0x08005500
080D1006: 031c         add r3,r0,#0x0
080D1008: 002b         cmp r3,#0x0
080D100A: 11d0         beq 0x080d1030
080D100C: 191c         add r1,r3,#0x0
080D100E: 2531         add r1,#0x25
080D1010: 0022         mov r2,#0x0
080D1012: 0120         mov r0,#0x1
080D1014: 0870         strb r0,[r1,#0x0]
080D1016: 0949         ldr r1,[0x080d103c]
080D1018: 5872         strb r0,[r3,#0x9]
080D101A: 4868         ldr r0,[r1,#0x4]
080D101C: 0068         ldr r0,[r0,#0x0]
080D101E: 5861         str r0,[r3,#0x14]
080D1020: 0020         mov r0,#0x0
080D1022: 1a84         strh r2,[r3,#0x20]
080D1024: 191c         add r1,r3,#0x0
080D1026: 2231         add r1,#0x22
080D1028: 0870         strb r0,[r1,#0x0]
080D102A: 1c74         strb r4,[r3,#0x10]
080D102C: 5d65         str r5,[r3,#0x54]
080D102E: 9e65         str r6,[r3,#0x58]
080D1030: 70bc         pop {r4,r5,r6}
080D1032: 01bc         pop {r0}
080D1034: 0047         bx r0
