; undefined FUN_080f177c(void)
; entry 0x80f177c  size 28 bytes

080F177C: 30b5         push {r4,r5,lr}
080F177E: 051c         add r5,r0,#0x0
080F1780: 687c         ldrb r0,[r5,#0x11]
080F1782: 2028         cmp r0,#0x20
080F1784: 00d9         bls 0x080f1788
080F1786: 0ee2         b 0x080f1ba6
080F1788: 8000         lsl r0,r0,#0x2
080F178A: 0249         ldr r1,[0x080f1794]
080F178C: 4018         add r0,r0,r1
080F178E: 0068         ldr r0,[r0,#0x0]
080F1790: 8746         mov pc,r0
080F1BA6: 30bc         pop {r4,r5}
080F1BA8: 01bc         pop {r0}
080F1BAA: 0047         bx r0
