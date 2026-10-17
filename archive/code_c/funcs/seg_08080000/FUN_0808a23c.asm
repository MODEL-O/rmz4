; undefined FUN_0808a23c(void)
; entry 0x808a23c  size 42 bytes

0808A23C: 10b5         push {r4,lr}
0808A23E: 041c         add r4,r0,#0x0
0808A240: 206e         ldr r0,[r4,#0x60]
0808A242: 0028         cmp r0,#0x0
0808A244: 0bdd         ble 0x0808a25e
0808A246: 606d         ldr r0,[r4,#0x54]
0808A248: a16d         ldr r1,[r4,#0x58]
0808A24A: 4031         add r1,#0x40
0808A24C: 7df716fd     bl 0x08007c7c
0808A250: 0004         lsl r0,r0,#0x10
0808A252: 0028         cmp r0,#0x0
0808A254: 03d0         beq 0x0808a25e
0808A256: 0021         mov r1,#0x0
0808A258: 0820         mov r0,#0x8
0808A25A: 6073         strb r0,[r4,#0xd]
0808A25C: a173         strb r1,[r4,#0xe]
0808A25E: 0020         mov r0,#0x0
0808A260: 10bc         pop {r4}
0808A262: 02bc         pop {r1}
0808A264: 0847         bx r1
