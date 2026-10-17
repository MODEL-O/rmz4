; undefined FUN_08001fd4(void)
; entry 0x8001fd4  size 64 bytes

08001FD4: 10b5         push {r4,lr}
08001FD6: 81b0         sub sp,#0x4
08001FD8: 1b04         lsl r3,r3,#0x10
08001FDA: 0e4c         ldr r4,[0x08002014]
08001FDC: a446         mov r12,r4
08001FDE: c834         add r4,#0xc8
08001FE0: 2060         str r0,[r4,#0x0]
08001FE2: 6446         mov r4,r12
08001FE4: cc34         add r4,#0xcc
08001FE6: 2160         str r1,[r4,#0x0]
08001FE8: 6146         mov r1,r12
08001FEA: c431         add r1,#0xc4
08001FEC: 0a60         str r2,[r1,#0x0]
08001FEE: 0434         add r4,#0x4
08001FF0: 190c         lsr r1,r3,#0x10
08001FF2: 1943         orr r1,r3
08001FF4: 2160         str r1,[r4,#0x0]
08001FF6: 0091         str r1,[sp,#0x0]
08001FF8: 0749         ldr r1,[0x08002018]
08001FFA: 6b46         mov r3,sp
08001FFC: 0b60         str r3,[r1,#0x0]
08001FFE: 4860         str r0,[r1,#0x4]
08002000: 9208         lsr r2,r2,#0x2
08002002: 8520         mov r0,#0x85
08002004: 0006         lsl r0,r0,#0x18
08002006: 0243         orr r2,r0
08002008: 8a60         str r2,[r1,#0x8]
0800200A: 8868         ldr r0,[r1,#0x8]
0800200C: 01b0         add sp,#0x4
0800200E: 10bc         pop {r4}
08002010: 01bc         pop {r0}
08002012: 0047         bx r0
