; undefined FUN_080a23b8(void)
; entry 0x80a23b8  size 58 bytes

080A23B8: 10b5         push {r4,lr}
080A23BA: 041c         add r4,r0,#0x0
080A23BC: 606d         ldr r0,[r4,#0x54]
080A23BE: e16d         ldr r1,[r4,#0x5c]
080A23C0: 4018         add r0,r0,r1
080A23C2: 6065         str r0,[r4,#0x54]
080A23C4: a16d         ldr r1,[r4,#0x58]
080A23C6: 226e         ldr r2,[r4,#0x60]
080A23C8: 8918         add r1,r1,r2
080A23CA: a165         str r1,[r4,#0x58]
080A23CC: 4032         add r2,#0x40
080A23CE: 2266         str r2,[r4,#0x60]
080A23D0: 65f754fc     bl 0x08007c7c
080A23D4: 0004         lsl r0,r0,#0x10
080A23D6: 0028         cmp r0,#0x0
080A23D8: 08d0         beq 0x080a23ec
080A23DA: 0649         ldr r1,[0x080a23f4]
080A23DC: 607a         ldrb r0,[r4,#0x9]
080A23DE: 8000         lsl r0,r0,#0x2
080A23E0: 4018         add r0,r0,r1
080A23E2: 0221         mov r1,#0x2
080A23E4: e160         str r1,[r4,#0xc]
080A23E6: 0068         ldr r0,[r0,#0x0]
080A23E8: 8068         ldr r0,[r0,#0x8]
080A23EA: 6061         str r0,[r4,#0x14]
080A23EC: 10bc         pop {r4}
080A23EE: 01bc         pop {r0}
080A23F0: 0047         bx r0
