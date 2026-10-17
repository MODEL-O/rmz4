; undefined FUN_080d1cbc(void)
; entry 0x80d1cbc  size 70 bytes

080D1CBC: 10b5         push {r4,lr}
080D1CBE: 82b0         sub sp,#0x8
080D1CC0: 021c         add r2,r0,#0x0
080D1CC2: 0906         lsl r1,r1,#0x18
080D1CC4: 0c0e         lsr r4,r1,#0x18
080D1CC6: 002c         cmp r4,#0x0
080D1CC8: 03d0         beq 0x080d1cd2
080D1CCA: 1068         ldr r0,[r2,#0x0]
080D1CCC: 8021         mov r1,#0x80
080D1CCE: 4901         lsl r1,r1,#0x5
080D1CD0: 01e0         b 0x080d1cd6
080D1CD2: 1068         ldr r0,[r2,#0x0]
080D1CD4: 0b49         ldr r1,[0x080d1d04]
080D1CD6: 4018         add r0,r0,r1
080D1CD8: 0090         str r0,[sp,#0x0]
080D1CDA: 5168         ldr r1,[r2,#0x4]
080D1CDC: c020         mov r0,#0xc0
080D1CDE: 8000         lsl r0,r0,#0x2
080D1CE0: 0918         add r1,r1,r0
080D1CE2: 0191         str r1,[sp,#0x4]
080D1CE4: 0098         ldr r0,[sp,#0x0]
080D1CE6: 35f7c9ff     bl 0x08007c7c
080D1CEA: 0004         lsl r0,r0,#0x10
080D1CEC: 0028         cmp r0,#0x0
080D1CEE: 04d0         beq 0x080d1cfa
080D1CF0: 6846         mov r0,sp
080D1CF2: 0721         mov r1,#0x7
080D1CF4: 221c         add r2,r4,#0x0
080D1CF6: fff769ff     bl 0x080d1bcc
080D1CFA: 02b0         add sp,#0x8
080D1CFC: 10bc         pop {r4}
080D1CFE: 01bc         pop {r0}
080D1D00: 0047         bx r0
