; undefined FUN_08121134(void)
; entry 0x8121134  size 24 bytes

08121134: f0b5         push {r4,r5,r6,r7,lr}
08121136: 061c         add r6,r0,#0x0
08121138: b078         ldrb r0,[r6,#0x2]
0812113A: 6328         cmp r0,#0x63
0812113C: 01d9         bls 0x08121142
0812113E: 01f05cf9     bl 0x081223fa
08121142: 8000         lsl r0,r0,#0x2
08121144: 0149         ldr r1,[0x0812114c]
08121146: 4018         add r0,r0,r1
08121148: 0068         ldr r0,[r0,#0x0]
0812114A: 8746         mov pc,r0
