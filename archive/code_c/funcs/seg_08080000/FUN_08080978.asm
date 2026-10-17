; undefined FUN_08080978(void)
; entry 0x8080978  size 66 bytes

08080978: 10b5         push {r4,lr}
0808097A: 021c         add r2,r0,#0x0
0808097C: 0f48         ldr r0,[0x080809bc]
0808097E: 0468         ldr r4,[r0,#0x0]
08080980: 606d         ldr r0,[r4,#0x54]
08080982: 516d         ldr r1,[r2,#0x54]
08080984: 401a         sub r0,r0,r1
08080986: c021         mov r1,#0xc0
08080988: 8901         lsl r1,r1,#0x6
0808098A: 4018         add r0,r0,r1
0808098C: c021         mov r1,#0xc0
0808098E: c901         lsl r1,r1,#0x7
08080990: 8842         cmp r0,r1
08080992: 0fd8         bhi 0x080809b4
08080994: 936d         ldr r3,[r2,#0x58]
08080996: 0a49         ldr r1,[0x080809c0]
08080998: 5818         add r0,r3,r1
0808099A: a16d         ldr r1,[r4,#0x58]
0808099C: 8142         cmp r1,r0
0808099E: 09dd         ble 0x080809b4
080809A0: 8024         mov r4,#0x80
080809A2: 6401         lsl r4,r4,#0x5
080809A4: 1819         add r0,r3,r4
080809A6: 8142         cmp r1,r0
080809A8: 04da         bge 0x080809b4
080809AA: 0021         mov r1,#0x0
080809AC: 0120         mov r0,#0x1
080809AE: 5073         strb r0,[r2,#0xd]
080809B0: 9173         strb r1,[r2,#0xe]
080809B2: d173         strb r1,[r2,#0xf]
080809B4: 10bc         pop {r4}
080809B6: 01bc         pop {r0}
080809B8: 0047         bx r0
