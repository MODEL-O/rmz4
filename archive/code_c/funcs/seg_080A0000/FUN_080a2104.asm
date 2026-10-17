; undefined FUN_080a2104(void)
; entry 0x80a2104  size 70 bytes

080A2104: 70b5         push {r4,r5,r6,lr}
080A2106: 041c         add r4,r0,#0x0
080A2108: 251c         add r5,r4,#0x0
080A210A: c035         add r5,#0xc0
080A210C: 2e68         ldr r6,[r5,#0x0]
080A210E: 002e         cmp r6,#0x0
080A2110: 18d1         bne 0x080a2144
080A2112: 8c30         add r0,#0x8c
080A2114: 0068         ldr r0,[r0,#0x0]
080A2116: 0121         mov r1,#0x1
080A2118: 0840         and r0,r1
080A211A: 0028         cmp r0,#0x0
080A211C: 12d0         beq 0x080a2144
080A211E: 0b4a         ldr r2,[0x080a214c]
080A2120: 0020         mov r0,#0x0
080A2122: 211c         add r1,r4,#0x0
080A2124: 88f742fe     bl 0x0802adac
080A2128: 2860         str r0,[r5,#0x0]
080A212A: 0028         cmp r0,#0x0
080A212C: 0ad0         beq 0x080a2144
080A212E: 201c         add r0,r4,#0x0
080A2130: 7430         add r0,#0x74
080A2132: 0749         ldr r1,[0x080a2150]
080A2134: 63f726fb     bl 0x08005784
080A2138: be21         mov r1,#0xbe
080A213A: c901         lsl r1,r1,#0x7
080A213C: 201c         add r0,r4,#0x0
080A213E: 7af7dffe     bl 0x0801cf00
080A2142: 2666         str r6,[r4,#0x60]
080A2144: 70bc         pop {r4,r5,r6}
080A2146: 01bc         pop {r0}
080A2148: 0047         bx r0
