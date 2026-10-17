; undefined FUN_0808bbc0(void)
; entry 0x808bbc0  size 22 bytes

0808BBC0: 0906         lsl r1,r1,#0x18
0808BBC2: 090e         lsr r1,r1,#0x18
0808BBC4: 4b00         lsl r3,r1,#0x1
0808BBC6: 013b         sub r3,#0x1
0808BBC8: 9a00         lsl r2,r3,#0x2
0808BBCA: d218         add r2,r2,r3
0808BBCC: 9201         lsl r2,r2,#0x6
0808BBCE: c265         str r2,[r0,#0x5c]
0808BBD0: b830         add r0,#0xb8
0808BBD2: 0170         strb r1,[r0,#0x0]
0808BBD4: 7047         bx lr
