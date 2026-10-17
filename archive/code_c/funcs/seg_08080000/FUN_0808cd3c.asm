; undefined FUN_0808cd3c(void)
; entry 0x808cd3c  size 34 bytes

0808CD3C: 00b5         push {lr}
0808CD3E: 0906         lsl r1,r1,#0x18
0808CD40: 090e         lsr r1,r1,#0x18
0808CD42: 407c         ldrb r0,[r0,#0x11]
0808CD44: 0023         mov r3,#0x0
0808CD46: 064a         ldr r2,[0x0808cd60]
0808CD48: 8018         add r0,r0,r2
0808CD4A: 0078         ldrb r0,[r0,#0x0]
0808CD4C: 091a         sub r1,r1,r0
0808CD4E: 0906         lsl r1,r1,#0x18
0808CD50: 090e         lsr r1,r1,#0x18
0808CD52: 8029         cmp r1,#0x80
0808CD54: 00d8         bhi 0x0808cd58
0808CD56: 0123         mov r3,#0x1
0808CD58: 181c         add r0,r3,#0x0
0808CD5A: 02bc         pop {r1}
0808CD5C: 0847         bx r1
