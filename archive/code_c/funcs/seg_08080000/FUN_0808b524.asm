; undefined FUN_0808b524(void)
; entry 0x808b524  size 20 bytes

0808B524: 00b5         push {lr}
0808B526: 044a         ldr r2,[0x0808b538]
0808B528: 817b         ldrb r1,[r0,#0xe]
0808B52A: 8900         lsl r1,r1,#0x2
0808B52C: 8918         add r1,r1,r2
0808B52E: 0968         ldr r1,[r1,#0x0]
0808B530: 9df026fd     bl 0x08128f80
0808B534: 01bc         pop {r0}
0808B536: 0047         bx r0
