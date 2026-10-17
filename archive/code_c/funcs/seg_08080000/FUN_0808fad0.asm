; undefined FUN_0808fad0(void)
; entry 0x808fad0  size 34 bytes

0808FAD0: 10b5         push {r4,lr}
0808FAD2: 5b06         lsl r3,r3,#0x19
0808FAD4: ff24         mov r4,#0xff
0808FAD6: 2406         lsl r4,r4,#0x18
0808FAD8: 1b19         add r3,r3,r4
0808FADA: 1b16         asr r3,r3,#0x18
0808FADC: 5943         mul r1,r3
0808FADE: c165         str r1,[r0,#0x5c]
0808FAE0: 111c         add r1,r2,#0x0
0808FAE2: 5943         mul r1,r3
0808FAE4: 4166         str r1,[r0,#0x64]
0808FAE6: b830         add r0,#0xb8
0808FAE8: 0021         mov r1,#0x0
0808FAEA: 0170         strb r1,[r0,#0x0]
0808FAEC: 10bc         pop {r4}
0808FAEE: 01bc         pop {r0}
0808FAF0: 0047         bx r0
