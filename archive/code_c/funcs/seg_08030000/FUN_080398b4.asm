; undefined FUN_080398b4(void)
; entry 0x80398b4  size 38 bytes

080398B4: 10b5         push {r4,lr}
080398B6: 021c         add r2,r0,#0x0
080398B8: 0548         ldr r0,[0x080398d0]
080398BA: 1118         add r1,r2,r0
080398BC: 0878         ldrb r0,[r1,#0x0]
080398BE: 0628         cmp r0,#0x6
080398C0: 00d9         bls 0x080398c4
080398C2: d1e0         b 0x08039a68
080398C4: 8000         lsl r0,r0,#0x2
080398C6: 0349         ldr r1,[0x080398d4]
080398C8: 4018         add r0,r0,r1
080398CA: 0068         ldr r0,[r0,#0x0]
080398CC: 8746         mov pc,r0
08039A68: 0020         mov r0,#0x0
08039A6A: 0870         strb r0,[r1,#0x0]
08039A6C: 0020         mov r0,#0x0
08039A6E: 10bc         pop {r4}
08039A70: 02bc         pop {r1}
08039A72: 0847         bx r1
