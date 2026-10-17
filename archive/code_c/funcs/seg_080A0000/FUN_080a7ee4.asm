; undefined FUN_080a7ee4(void)
; entry 0x80a7ee4  size 48 bytes

080A7EE4: f0b5         push {r4,r5,r6,r7,lr}
080A7EE6: 4f46         mov r7,r9
080A7EE8: 4646         mov r6,r8
080A7EEA: c0b4         push {r6,r7}
080A7EEC: 071c         add r7,r0,#0x0
080A7EEE: ba6a         ldr r2,[r7,#0x28]
080A7EF0: b87b         ldrb r0,[r7,#0xe]
080A7EF2: 0528         cmp r0,#0x5
080A7EF4: 00d9         bls 0x080a7ef8
080A7EF6: 5fe1         b 0x080a81b8
080A7EF8: 8000         lsl r0,r0,#0x2
080A7EFA: 0249         ldr r1,[0x080a7f04]
080A7EFC: 4018         add r0,r0,r1
080A7EFE: 0068         ldr r0,[r0,#0x0]
080A7F00: 8746         mov pc,r0
080A81B8: 381c         add r0,r7,#0x0
080A81BA: 74f719ff     bl 0x0801cff0
080A81BE: 18bc         pop {r3,r4}
080A81C0: 9846         mov r8,r3
080A81C2: a146         mov r9,r4
080A81C4: f0bc         pop {r4,r5,r6,r7}
080A81C6: 01bc         pop {r0}
080A81C8: 0047         bx r0
