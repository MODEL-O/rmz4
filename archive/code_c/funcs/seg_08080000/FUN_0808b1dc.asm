; undefined FUN_0808b1dc(void)
; entry 0x808b1dc  size 52 bytes

0808B1DC: 30b5         push {r4,r5,lr}
0808B1DE: 041c         add r4,r0,#0x0
0808B1E0: c130         add r0,#0xc1
0808B1E2: 0578         ldrb r5,[r0,#0x0]
0808B1E4: 002d         cmp r5,#0x0
0808B1E6: 0fd1         bne 0x0808b208
0808B1E8: 606d         ldr r0,[r4,#0x54]
0808B1EA: a16d         ldr r1,[r4,#0x58]
0808B1EC: 7df7acfa     bl 0x08008748
0808B1F0: 021c         add r2,r0,#0x0
0808B1F2: a06d         ldr r0,[r4,#0x58]
0808B1F4: 101a         sub r0,r2,r0
0808B1F6: 8821         mov r1,#0x88
0808B1F8: c900         lsl r1,r1,#0x3
0808B1FA: 8842         cmp r0,r1
0808B1FC: 04dd         ble 0x0808b208
0808B1FE: a265         str r2,[r4,#0x58]
0808B200: 206e         ldr r0,[r4,#0x60]
0808B202: 4028         cmp r0,#0x40
0808B204: 00dd         ble 0x0808b208
0808B206: 2566         str r5,[r4,#0x60]
0808B208: 0020         mov r0,#0x0
0808B20A: 30bc         pop {r4,r5}
0808B20C: 02bc         pop {r1}
0808B20E: 0847         bx r1
