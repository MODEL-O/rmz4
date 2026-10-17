; undefined FUN_08033388(void)
; entry 0x8033388  size 30 bytes

08033388: 00b5         push {lr}
0803338A: 021c         add r2,r0,#0x0
0803338C: 9621         mov r1,#0x96
0803338E: 8900         lsl r1,r1,#0x2
08033390: 5018         add r0,r2,r1
08033392: 0168         ldr r1,[r0,#0x0]
08033394: 8020         mov r0,#0x80
08033396: 0140         and r1,r0
08033398: 0029         cmp r1,#0x0
0803339A: 02d1         bne 0x080333a2
0803339C: 0220         mov r0,#0x2
0803339E: 9073         strb r0,[r2,#0xe]
080333A0: d173         strb r1,[r2,#0xf]
080333A2: 01bc         pop {r0}
080333A4: 0047         bx r0
