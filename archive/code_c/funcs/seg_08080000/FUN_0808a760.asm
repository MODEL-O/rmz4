; undefined FUN_0808a760(void)
; entry 0x808a760  size 44 bytes

0808A760: 10b5         push {r4,lr}
0808A762: 041c         add r4,r0,#0x0
0808A764: 92f744fc     bl 0x0801cff0
0808A768: 606d         ldr r0,[r4,#0x54]
0808A76A: e16d         ldr r1,[r4,#0x5c]
0808A76C: 4018         add r0,r0,r1
0808A76E: 6065         str r0,[r4,#0x54]
0808A770: a06d         ldr r0,[r4,#0x58]
0808A772: 216e         ldr r1,[r4,#0x60]
0808A774: 4018         add r0,r0,r1
0808A776: a065         str r0,[r4,#0x58]
0808A778: 4031         add r1,#0x40
0808A77A: 2166         str r1,[r4,#0x60]
0808A77C: e020         mov r0,#0xe0
0808A77E: c000         lsl r0,r0,#0x3
0808A780: 8142         cmp r1,r0
0808A782: 00dd         ble 0x0808a786
0808A784: 2066         str r0,[r4,#0x60]
0808A786: 10bc         pop {r4}
0808A788: 01bc         pop {r0}
0808A78A: 0047         bx r0
