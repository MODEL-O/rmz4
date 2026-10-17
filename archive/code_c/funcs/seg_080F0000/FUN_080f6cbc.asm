; undefined FUN_080f6cbc(void)
; entry 0x80f6cbc  size 74 bytes

080F6CBC: 10b5         push {r4,lr}
080F6CBE: 041c         add r4,r0,#0x0
080F6CC0: 207c         ldrb r0,[r4,#0x10]
080F6CC2: 0028         cmp r0,#0x0
080F6CC4: 03d1         bne 0x080f6cce
080F6CC6: 606d         ldr r0,[r4,#0x54]
080F6CC8: 8021         mov r1,#0x80
080F6CCA: 0901         lsl r1,r1,#0x4
080F6CCC: 01e0         b 0x080f6cd2
080F6CCE: 606d         ldr r0,[r4,#0x54]
080F6CD0: 0d49         ldr r1,[0x080f6d08]
080F6CD2: 4018         add r0,r0,r1
080F6CD4: 6065         str r0,[r4,#0x54]
080F6CD6: 0d48         ldr r0,[0x080f6d0c]
080F6CD8: 211c         add r1,r4,#0x0
080F6CDA: 5431         add r1,#0x54
080F6CDC: 28f71aff     bl 0x0801fb14
080F6CE0: 8021         mov r1,#0x80
080F6CE2: 8901         lsl r1,r1,#0x6
080F6CE4: 8842         cmp r0,r1
080F6CE6: 08d9         bls 0x080f6cfa
080F6CE8: 0949         ldr r1,[0x080f6d10]
080F6CEA: 607a         ldrb r0,[r4,#0x9]
080F6CEC: 8000         lsl r0,r0,#0x2
080F6CEE: 4018         add r0,r0,r1
080F6CF0: 0421         mov r1,#0x4
080F6CF2: e160         str r1,[r4,#0xc]
080F6CF4: 0068         ldr r0,[r0,#0x0]
080F6CF6: 0069         ldr r0,[r0,#0x10]
080F6CF8: 6061         str r0,[r4,#0x14]
080F6CFA: 201c         add r0,r4,#0x0
080F6CFC: 26f778f9     bl 0x0801cff0
080F6D00: 10bc         pop {r4}
080F6D02: 01bc         pop {r0}
080F6D04: 0047         bx r0
