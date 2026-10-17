; undefined FUN_08072da4(void)
; entry 0x8072da4  size 70 bytes

08072DA4: f0b5         push {r4,r5,r6,r7,lr}
08072DA6: 5746         mov r7,r10
08072DA8: 4e46         mov r6,r9
08072DAA: 4546         mov r5,r8
08072DAC: e0b4         push {r5,r6,r7}
08072DAE: 8ab0         sub sp,#0x28
08072DB0: 061c         add r6,r0,#0x0
08072DB2: f07b         ldrb r0,[r6,#0xf]
08072DB4: 0528         cmp r0,#0x5
08072DB6: 00d9         bls 0x08072dba
08072DB8: 6be1         b 0x08073092
08072DBA: 8000         lsl r0,r0,#0x2
08072DBC: 0749         ldr r1,[0x08072ddc]
08072DBE: 4018         add r0,r0,r1
08072DC0: 0068         ldr r0,[r0,#0x0]
08072DC2: 7421         mov r1,#0x74
08072DC4: 8919         add r1,r1,r6
08072DC6: 8a46         mov r10,r1
08072DC8: 351c         add r5,r6,#0x0
08072DCA: b835         add r5,#0xb8
08072DCC: 7122         mov r2,#0x71
08072DCE: 9219         add r2,r2,r6
08072DD0: 9046         mov r8,r2
08072DD2: b924         mov r4,#0xb9
08072DD4: a419         add r4,r4,r6
08072DD6: a146         mov r9,r4
08072DD8: 8746         mov pc,r0
08073092: 0ab0         add sp,#0x28
08073094: 38bc         pop {r3,r4,r5}
08073096: 9846         mov r8,r3
08073098: a146         mov r9,r4
0807309A: aa46         mov r10,r5
0807309C: f0bc         pop {r4,r5,r6,r7}
0807309E: 01bc         pop {r0}
080730A0: 0047         bx r0
