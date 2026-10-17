; undefined FUN_08054fb0(void)
; entry 0x8054fb0  size 56 bytes

08054FB0: 00b5         push {lr}
08054FB2: 8446         mov r12,r0
08054FB4: 6346         mov r3,r12
08054FB6: b733         add r3,#0xb7
08054FB8: 1878         ldrb r0,[r3,#0x0]
08054FBA: 0130         add r0,#0x1
08054FBC: 1870         strb r0,[r3,#0x0]
08054FBE: 6246         mov r2,r12
08054FC0: b832         add r2,#0xb8
08054FC2: 0849         ldr r1,[0x08054fe4]
08054FC4: 1878         ldrb r0,[r3,#0x0]
08054FC6: 4000         lsl r0,r0,#0x1
08054FC8: 4018         add r0,r0,r1
08054FCA: 0021         mov r1,#0x0
08054FCC: 405e         ldrsh r0,[r0,r1]
08054FCE: 0001         lsl r0,r0,#0x4
08054FD0: 1168         ldr r1,[r2,#0x0]
08054FD2: 0918         add r1,r1,r0
08054FD4: 6046         mov r0,r12
08054FD6: 8165         str r1,[r0,#0x58]
08054FD8: 1068         ldr r0,[r2,#0x0]
08054FDA: 8142         cmp r1,r0
08054FDC: 04d0         beq 0x08054fe8
08054FDE: 0020         mov r0,#0x0
08054FE0: 03e0         b 0x08054fea
08054FE8: 0120         mov r0,#0x1
08054FEA: 02bc         pop {r1}
08054FEC: 0847         bx r1
