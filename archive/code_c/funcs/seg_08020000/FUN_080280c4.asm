; undefined FUN_080280c4(void)
; entry 0x80280c4  size 46 bytes

080280C4: f0b5         push {r4,r5,r6,r7,lr}
080280C6: 4746         mov r7,r8
080280C8: 80b4         push {r7}
080280CA: 83b0         sub sp,#0xc
080280CC: 021c         add r2,r0,#0x0
080280CE: d768         ldr r7,[r2,#0xc]
080280D0: 0221         mov r1,#0x2
080280D2: 785e         ldrsh r0,[r7,r1]
080280D4: 0628         cmp r0,#0x6
080280D6: 00d9         bls 0x080280da
080280D8: 62e1         b 0x080283a0
080280DA: 8000         lsl r0,r0,#0x2
080280DC: 0149         ldr r1,[0x080280e4]
080280DE: 4018         add r0,r0,r1
080280E0: 0068         ldr r0,[r0,#0x0]
080280E2: 8746         mov pc,r0
080283A0: 0020         mov r0,#0x0
080283A2: 03b0         add sp,#0xc
080283A4: 08bc         pop {r3}
080283A6: 9846         mov r8,r3
080283A8: f0bc         pop {r4,r5,r6,r7}
080283AA: 02bc         pop {r1}
080283AC: 0847         bx r1
