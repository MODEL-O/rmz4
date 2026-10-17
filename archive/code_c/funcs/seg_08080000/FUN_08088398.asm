; undefined FUN_08088398(void)
; entry 0x8088398  size 72 bytes

08088398: 30b5         push {r4,r5,lr}
0808839A: 021c         add r2,r0,#0x0
0808839C: 907a         ldrb r0,[r2,#0xa]
0808839E: 0309         lsr r3,r0,#0x4
080883A0: 0125         mov r5,#0x1
080883A2: 2b40         and r3,r5
080883A4: 0024         mov r4,#0x0
080883A6: 0748         ldr r0,[0x080883c4]
080883A8: 0068         ldr r0,[r0,#0x0]
080883AA: 516d         ldr r1,[r2,#0x54]
080883AC: 406d         ldr r0,[r0,#0x54]
080883AE: 8142         cmp r1,r0
080883B0: 00da         bge 0x080883b4
080883B2: 0124         mov r4,#0x1
080883B4: 191c         add r1,r3,#0x0
080883B6: 6140         eor r1,r4
080883B8: 0029         cmp r1,#0x0
080883BA: 05d0         beq 0x080883c8
080883BC: 0020         mov r0,#0x0
080883BE: 9573         strb r5,[r2,#0xe]
080883C0: d073         strb r0,[r2,#0xf]
080883C2: 04e0         b 0x080883ce
080883C8: 0220         mov r0,#0x2
080883CA: 9073         strb r0,[r2,#0xe]
080883CC: d173         strb r1,[r2,#0xf]
080883CE: 0548         ldr r0,[0x080883e4]
080883D0: 917b         ldrb r1,[r2,#0xe]
080883D2: 8900         lsl r1,r1,#0x2
080883D4: 0918         add r1,r1,r0
080883D6: 0968         ldr r1,[r1,#0x0]
080883D8: 101c         add r0,r2,#0x0
080883DA: a0f0d1fd     bl 0x08128f80
080883DE: 30bc         pop {r4,r5}
080883E0: 01bc         pop {r0}
080883E2: 0047         bx r0
