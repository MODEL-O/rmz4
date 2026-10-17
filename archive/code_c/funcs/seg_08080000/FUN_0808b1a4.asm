; undefined FUN_0808b1a4(void)
; entry 0x808b1a4  size 50 bytes

0808B1A4: 30b5         push {r4,r5,lr}
0808B1A6: 041c         add r4,r0,#0x0
0808B1A8: c130         add r0,#0xc1
0808B1AA: 0578         ldrb r5,[r0,#0x0]
0808B1AC: 002d         cmp r5,#0x0
0808B1AE: 0ed1         bne 0x0808b1ce
0808B1B0: 606d         ldr r0,[r4,#0x54]
0808B1B2: a16d         ldr r1,[r4,#0x58]
0808B1B4: 7df7bef9     bl 0x08008534
0808B1B8: 021c         add r2,r0,#0x0
0808B1BA: a06d         ldr r0,[r4,#0x58]
0808B1BC: 101a         sub r0,r2,r0
0808B1BE: 0649         ldr r1,[0x0808b1d8]
0808B1C0: 8842         cmp r0,r1
0808B1C2: 04dc         bgt 0x0808b1ce
0808B1C4: a265         str r2,[r4,#0x58]
0808B1C6: 206e         ldr r0,[r4,#0x60]
0808B1C8: 4028         cmp r0,#0x40
0808B1CA: 00dd         ble 0x0808b1ce
0808B1CC: 2566         str r5,[r4,#0x60]
0808B1CE: 0020         mov r0,#0x0
0808B1D0: 30bc         pop {r4,r5}
0808B1D2: 02bc         pop {r1}
0808B1D4: 0847         bx r1
