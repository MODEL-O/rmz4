@ FUN_080190fc  entry 0x080190fc  size 102
.thumb
.org 0x190fc
FUN_080190fc:
	push {r4, r5, r6, lr}	@ 000190fc 70b5
.org 0x190fe
	ldr r0, [pc, #44]	@ 000190fe 0b48
.org 0x19100
	ldr r1, [pc, #44]	@ 00019100 0b49
.org 0x19102
	adds r6, r0, r1	@ 00019102 4618
.org 0x19104
	ldrb r0, [r6, #0]	@ 00019104 3078
.org 0x19106
	cmp r0, #0	@ 00019106 0028
.org 0x19108
	beq.n 0x19170	@ 00019108 32d0
.org 0x1910a
	cmp r0, #6	@ 0001910a 0628
.org 0x1910c
	bls.n 0x19140	@ 0001910c 18d9
.org 0x1910e
	ldr r4, [pc, #36]	@ 0001910e 094c
.org 0x19110
	ldr r0, [r4, #0]	@ 00019110 2068
.org 0x19112
	ldr r1, [pc, #36]	@ 00019112 0949
.org 0x19114
	adds r0, r0, r1	@ 00019114 4018
.org 0x19116
	movs r1, #128	@ 00019116 8021
.org 0x19118
	lsls r1, r1, #7	@ 00019118 c901
.org 0x1911a
	bl 0x1ea4	@ 0001911a e8f7c3fe
.org 0x1911e
	ldr r0, [r4, #0]	@ 0001911e 2068
.org 0x19120
	ldr r1, [pc, #24]	@ 00019120 0649
.org 0x19122
	adds r0, r0, r1	@ 00019122 4018
.org 0x19124
	movs r1, #0	@ 00019124 0021
.org 0x19126
	bl 0x2208	@ 00019126 e9f76ff8
.org 0x1912a
	b.n 0x19170	@ 0001912a 21e0
.org 0x1912c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001912c data
.org 0x19130
	.byte 0x24,0xd0,0x02,0x00	@ 00019130 data
.org 0x19134
	.byte 0x48,0x20,0xdf,0x08	@ 00019134 data
.org 0x19138
	.byte 0x1c,0x2e,0xdf,0x08	@ 00019138 data
.org 0x1913c
	.byte 0x28,0x2e,0xdf,0x08	@ 0001913c data
.org 0x19140
	ldr r5, [pc, #52]	@ 00019140 0d4d
.org 0x19142
	ldrb r0, [r6, #0]	@ 00019142 3078
.org 0x19144
	lsls r1, r0, #2	@ 00019144 8100
.org 0x19146
	adds r1, r1, r0	@ 00019146 0918
.org 0x19148
	lsls r1, r1, #2	@ 00019148 8900
.org 0x1914a
	ldr r4, [pc, #48]	@ 0001914a 0c4c
.org 0x1914c
	adds r1, r1, r4	@ 0001914c 0919
.org 0x1914e
	ldr r0, [r5, #0]	@ 0001914e 2868
.org 0x19150
	adds r0, r0, r1	@ 00019150 4018
.org 0x19152
	movs r1, #128	@ 00019152 8021
.org 0x19154
	lsls r1, r1, #7	@ 00019154 c901
.org 0x19156
	bl 0x1ea4	@ 00019156 e8f7a5fe
.org 0x1915a
	ldrb r0, [r6, #0]	@ 0001915a 3078
.org 0x1915c
	lsls r1, r0, #2	@ 0001915c 8100
.org 0x1915e
	adds r1, r1, r0	@ 0001915e 0918
.org 0x19160
	lsls r1, r1, #2	@ 00019160 8900
