; undefined FUN_080b5dc0(void)
; entry 0x80b5dc0  size 74 bytes

080B5DC0: 00b5         push {lr}
080B5DC2: 021c         add r2,r0,#0x0
080B5DC4: 906a         ldr r0,[r2,#0x28]
080B5DC6: 007b         ldrb r0,[r0,#0xc]
080B5DC8: 0128         cmp r0,#0x1
080B5DCA: 07d8         bhi 0x080b5ddc
080B5DCC: 101c         add r0,r2,#0x0
080B5DCE: 8c30         add r0,#0x8c
080B5DD0: 0068         ldr r0,[r0,#0x0]
080B5DD2: 8021         mov r1,#0x80
080B5DD4: 8900         lsl r1,r1,#0x2
080B5DD6: 0840         and r0,r1
080B5DD8: 0028         cmp r0,#0x0
080B5DDA: 0fd0         beq 0x080b5dfc
080B5DDC: 0649         ldr r1,[0x080b5df8]
080B5DDE: 507a         ldrb r0,[r2,#0x9]
080B5DE0: 8000         lsl r0,r0,#0x2
080B5DE2: 4018         add r0,r0,r1
080B5DE4: 0221         mov r1,#0x2
080B5DE6: d160         str r1,[r2,#0xc]
080B5DE8: 0068         ldr r0,[r0,#0x0]
080B5DEA: 8068         ldr r0,[r0,#0x8]
080B5DEC: 5061         str r0,[r2,#0x14]
080B5DEE: 101c         add r0,r2,#0x0
080B5DF0: 00f002f9     bl 0x080b5ff8
080B5DF4: 0ae0         b 0x080b5e0c
080B5DFC: 0448         ldr r0,[0x080b5e10]
080B5DFE: 517b         ldrb r1,[r2,#0xd]
080B5E00: 8900         lsl r1,r1,#0x2
080B5E02: 0918         add r1,r1,r0
080B5E04: 0968         ldr r1,[r1,#0x0]
080B5E06: 101c         add r0,r2,#0x0
080B5E08: 73f0baf8     bl 0x08128f80
080B5E0C: 01bc         pop {r0}
080B5E0E: 0047         bx r0
