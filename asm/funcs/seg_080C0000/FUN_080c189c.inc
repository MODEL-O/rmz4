@ FUN_080c189c  entry 0x080c189c  size 136
.thumb
.org 0xc189c
FUN_080c189c:
	push {r4, r5, r6, lr}	@ 000c189c 70b5
.org 0xc189e
	adds r4, r0, #0	@ 000c189e 041c
.org 0xc18a0
	ldrb r0, [r4, #15]	@ 000c18a0 e07b
.org 0xc18a2
	cmp r0, #0	@ 000c18a2 0028
.org 0xc18a4
	bne.n 0xc18d2	@ 000c18a4 15d1
.org 0xc18a6
	ldr r1, [pc, #116]	@ 000c18a6 1d49
.org 0xc18a8
	adds r0, r4, #0	@ 000c18a8 201c
.org 0xc18aa
	bl 0x1cf00	@ 000c18aa 5bf729fb
.org 0xc18ae
	movs r0, #128	@ 000c18ae 8020
.org 0xc18b0
	lsls r0, r0, #3	@ 000c18b0 c000
.org 0xc18b2
	str r0, [r4, #96]	@ 000c18b2 2066
.org 0xc18b4
	ldr r5, [r4, #84]	@ 000c18b4 656d
.org 0xc18b6
	ldr r6, [r4, #88]	@ 000c18b6 a66d
.org 0xc18b8
	adds r0, r5, #0	@ 000c18b8 281c
.org 0xc18ba
	adds r1, r6, #0	@ 000c18ba 311c
.org 0xc18bc
	bl 0x7c7c	@ 000c18bc 46f7def9
.org 0xc18c0
	movs r1, #0	@ 000c18c0 0021
.org 0xc18c2
	lsls r0, r0, #16	@ 000c18c2 0004
.org 0xc18c4
	cmp r0, #0	@ 000c18c4 0028
.org 0xc18c6
	bne.n 0xc18ca	@ 000c18c6 00d1
.org 0xc18c8
	movs r1, #1	@ 000c18c8 0121
.org 0xc18ca
	strb r1, [r4, #19]	@ 000c18ca e174
.org 0xc18cc
	ldrb r0, [r4, #15]	@ 000c18cc e07b
.org 0xc18ce
	adds r0, #1	@ 000c18ce 0130
.org 0xc18d0
	strb r0, [r4, #15]	@ 000c18d0 e073
.org 0xc18d2
	adds r0, r4, #0	@ 000c18d2 201c
.org 0xc18d4
	bl 0x1cff0	@ 000c18d4 5bf78cfb
.org 0xc18d8
	adds r0, r4, #0	@ 000c18d8 201c
.org 0xc18da
	adds r0, #116	@ 000c18da 7430
.org 0xc18dc
	ldr r1, [pc, #64]	@ 000c18dc 1049
.org 0xc18de
	bl 0x5784	@ 000c18de 43f751ff
.org 0xc18e2
	ldr r2, [r4, #84]	@ 000c18e2 626d
.org 0xc18e4
	adds r5, r2, #0	@ 000c18e4 151c
.org 0xc18e6
	ldr r1, [r4, #88]	@ 000c18e6 a16d
.org 0xc18e8
	ldr r0, [r4, #96]	@ 000c18e8 206e
.org 0xc18ea
	adds r1, r1, r0	@ 000c18ea 0918
.org 0xc18ec
	adds r6, r1, #0	@ 000c18ec 0e1c
.org 0xc18ee
	ldrb r0, [r4, #19]	@ 000c18ee e07c
.org 0xc18f0
	cmp r0, #0	@ 000c18f0 0028
.org 0xc18f2
	beq.n 0xc1928	@ 000c18f2 19d0
.org 0xc18f4
	adds r0, r2, #0	@ 000c18f4 101c
.org 0xc18f6
	bl 0x7c7c	@ 000c18f6 46f7c1f9
.org 0xc18fa
	lsls r0, r0, #16	@ 000c18fa 0004
.org 0xc18fc
	cmp r0, #0	@ 000c18fc 0028
.org 0xc18fe
	beq.n 0xc1928	@ 000c18fe 13d0
.org 0xc1900
	ldr r1, [pc, #32]	@ 000c1900 0849
.org 0xc1902
	ldrb r0, [r4, #9]	@ 000c1902 607a
.org 0xc1904
	lsls r0, r0, #2	@ 000c1904 8000
.org 0xc1906
	adds r0, r0, r1	@ 000c1906 4018
.org 0xc1908
	movs r1, #2	@ 000c1908 0221
.org 0xc190a
	str r1, [r4, #12]	@ 000c190a e160
.org 0xc190c
	ldr r0, [r0, #0]	@ 000c190c 0068
.org 0xc190e
	ldr r0, [r0, #8]	@ 000c190e 8068
.org 0xc1910
	str r0, [r4, #20]	@ 000c1910 6061
.org 0xc1912
	adds r0, r4, #0	@ 000c1912 201c
.org 0xc1914
	bl 0xc1934	@ 000c1914 00f00ef8
.org 0xc1918
	b.n 0xc192c	@ 000c1918 08e0
.org 0xc191a
	.byte 0x00	@ 000c191a data
.org 0xc191b
	.byte 0x00	@ 000c191b data
.org 0xc191c
	.byte 0x0c,0x90,0x00,0x00	@ 000c191c data
.org 0xc1920
	.byte 0x9c,0x52,0x86,0x08	@ 000c1920 data
