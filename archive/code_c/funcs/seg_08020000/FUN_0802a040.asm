; undefined FUN_0802a040(void)
; entry 0x802a040  size 54 bytes

0802A040: 70b5         push {r4,r5,r6,lr}
0802A042: 81b0         sub sp,#0x4
0802A044: 051c         add r5,r0,#0x0
0802A046: 0026         mov r6,#0x0
0802A048: 0848         ldr r0,[0x0802a06c]
0802A04A: 0188         ldrh r1,[r0,#0x0]
0802A04C: 0b20         mov r0,#0xb
0802A04E: 0840         and r0,r1
0802A050: 0028         cmp r0,#0x0
0802A052: 02d0         beq 0x0802a05a
0802A054: 0126         mov r6,#0x1
0802A056: 0648         ldr r0,[0x0802a070]
0802A058: a880         strh r0,[r5,#0x4]
0802A05A: 6878         ldrb r0,[r5,#0x1]
0802A05C: 1b28         cmp r0,#0x1b
0802A05E: 00d9         bls 0x0802a062
0802A060: 80e2         b 0x0802a564
0802A062: 8000         lsl r0,r0,#0x2
0802A064: 0349         ldr r1,[0x0802a074]
0802A066: 4018         add r0,r0,r1
0802A068: 0068         ldr r0,[r0,#0x0]
0802A06A: 8746         mov pc,r0
0802A564: 0120         mov r0,#0x1
0802A566: 01b0         add sp,#0x4
0802A568: 70bc         pop {r4,r5,r6}
0802A56A: 02bc         pop {r1}
0802A56C: 0847         bx r1
