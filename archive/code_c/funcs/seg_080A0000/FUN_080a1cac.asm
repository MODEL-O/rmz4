; undefined FUN_080a1cac(void)
; entry 0x80a1cac  size 60 bytes

080A1CAC: f0b5         push {r4,r5,r6,r7,lr}
080A1CAE: 82b0         sub sp,#0x8
080A1CB0: 817a         ldrb r1,[r0,#0xa]
080A1CB2: 0909         lsr r1,r1,#0x4
080A1CB4: 0122         mov r2,#0x1
080A1CB6: 1140         and r1,r2
080A1CB8: 426d         ldr r2,[r0,#0x54]
080A1CBA: 0092         str r2,[sp,#0x0]
080A1CBC: 806d         ldr r0,[r0,#0x58]
080A1CBE: 0190         str r0,[sp,#0x4]
080A1CC0: 0801         lsl r0,r1,#0x4
080A1CC2: 0143         orr r1,r0
080A1CC4: 0e06         lsl r6,r1,#0x18
080A1CC6: 0025         mov r5,#0x0
080A1CC8: 074f         ldr r7,[0x080a1ce8]
080A1CCA: 0124         mov r4,#0x1
080A1CCC: e919         add r1,r5,r7
080A1CCE: 6846         mov r0,sp
080A1CD0: 0022         mov r2,#0x0
080A1CD2: 330e         lsr r3,r6,#0x18
080A1CD4: 32f0daff     bl 0x080d4c8c
080A1CD8: 1c35         add r5,#0x1c
080A1CDA: 013c         sub r4,#0x1
080A1CDC: 002c         cmp r4,#0x0
080A1CDE: f5da         bge 0x080a1ccc
080A1CE0: 02b0         add sp,#0x8
080A1CE2: f0bc         pop {r4,r5,r6,r7}
080A1CE4: 01bc         pop {r0}
080A1CE6: 0047         bx r0
