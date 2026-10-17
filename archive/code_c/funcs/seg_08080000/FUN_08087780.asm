; undefined FUN_08087780(void)
; entry 0x8087780  size 30 bytes

08087780: 00b5         push {lr}
08087782: 021c         add r2,r0,#0x0
08087784: b432         add r2,#0xb4
08087786: 0023         mov r3,#0x0
08087788: 0321         mov r1,#0x3
0808778A: 1170         strb r1,[r2,#0x0]
0808778C: 0121         mov r1,#0x1
0808778E: 8173         strb r1,[r0,#0xe]
08087790: c373         strb r3,[r0,#0xf]
08087792: 0349         ldr r1,[0x080877a0]
08087794: 4968         ldr r1,[r1,#0x4]
08087796: a1f0f3fb     bl 0x08128f80
0808779A: 01bc         pop {r0}
0808779C: 0047         bx r0
