@ FUN_0801ea34  entry 0x0801ea34  size 380
.thumb
.org 0x1ea34
FUN_0801ea34:
	push {r4, r5, lr}	@ 0001ea34 30b5
.org 0x1ea36
	ldr r4, [pc, #60]	@ 0001ea36 0f4c
.org 0x1ea38
	ldr r1, [r4, #0]	@ 0001ea38 2168
.org 0x1ea3a
	ldrb r0, [r1, #20]	@ 0001ea3a 087d
.org 0x1ea3c
	adds r0, #1	@ 0001ea3c 0130
.org 0x1ea3e
	strb r0, [r1, #20]	@ 0001ea3e 0875
.org 0x1ea40
	ldr r2, [r4, #0]	@ 0001ea40 2268
.org 0x1ea42
	movs r1, #1	@ 0001ea42 0121
.org 0x1ea44
	ldrb r0, [r4, #4]	@ 0001ea44 2079
.org 0x1ea46
	lsls r1, r0	@ 0001ea46 8140
.org 0x1ea48
	ldr r0, [r2, #16]	@ 0001ea48 1069
.org 0x1ea4a
	orrs r0, r1	@ 0001ea4a 0843
.org 0x1ea4c
	str r0, [r2, #16]	@ 0001ea4c 1061
.org 0x1ea4e
	ldrb r0, [r4, #4]	@ 0001ea4e 2079
.org 0x1ea50
	strb r0, [r2, #21]	@ 0001ea50 5075
.org 0x1ea52
	ldrb r0, [r4, #7]	@ 0001ea52 e079
.org 0x1ea54
	strb r0, [r4, #20]	@ 0001ea54 2075
.org 0x1ea56
	ldr r0, [r4, #8]	@ 0001ea56 a068
.org 0x1ea58
	movs r1, #60	@ 0001ea58 3c21
.org 0x1ea5a
	bl 0x129120	@ 0001ea5a 0af161fb
.org 0x1ea5e
	ldr r2, [pc, #24]	@ 0001ea5e 064a
.org 0x1ea60
	ldrb r1, [r4, #4]	@ 0001ea60 2179
.org 0x1ea62
	lsls r1, r1, #2	@ 0001ea62 8900
.org 0x1ea64
	adds r1, r1, r2	@ 0001ea64 8918
.org 0x1ea66
	ldr r1, [r1, #0]	@ 0001ea66 0968
.org 0x1ea68
	subs r2, r0, r1	@ 0001ea68 421a
.org 0x1ea6a
	adds r5, r4, #0	@ 0001ea6a 251c
.org 0x1ea6c
	cmp r2, #0	@ 0001ea6c 002a
.org 0x1ea6e
	bgt.n 0x1ea7c	@ 0001ea6e 05dc
.org 0x1ea70
	movs r0, #20	@ 0001ea70 1420
.org 0x1ea72
	b.n 0x1ea94	@ 0001ea72 0fe0
.org 0x1ea74
	.byte 0xe0,0xe8,0x02,0x02	@ 0001ea74 data
.org 0x1ea78
	.byte 0xf8,0x27,0x84,0x08	@ 0001ea78 data
.org 0x1ea7c
	cmp r2, #199	@ 0001ea7c c72a
.org 0x1ea7e
	bgt.n 0x1ea92	@ 0001ea7e 08dc
.org 0x1ea80
	adds r0, r2, #0	@ 0001ea80 101c
.org 0x1ea82
	adds r0, #9	@ 0001ea82 0930
.org 0x1ea84
	movs r1, #10	@ 0001ea84 0a21
.org 0x1ea86
	bl 0x128fb8	@ 0001ea86 0af197fa
.org 0x1ea8a
	movs r1, #20	@ 0001ea8a 1421
.org 0x1ea8c
	subs r1, r1, r0	@ 0001ea8c 091a
.org 0x1ea8e
	strb r1, [r5, #21]	@ 0001ea8e 6975
.org 0x1ea90
	b.n 0x1ea96	@ 0001ea90 01e0
.org 0x1ea92
	movs r0, #0	@ 0001ea92 0020
.org 0x1ea94
	strb r0, [r5, #21]	@ 0001ea94 6875
.org 0x1ea96
	ldrh r0, [r5, #12]	@ 0001ea96 a889
.org 0x1ea98
	ldrh r1, [r5, #18]	@ 0001ea98 698a
.org 0x1ea9a
	adds r1, #1	@ 0001ea9a 0131
.org 0x1ea9c
	bl 0x128fb8	@ 0001ea9c 0af18cfa
.org 0x1eaa0
	adds r2, r0, #0	@ 0001eaa0 021c
.org 0x1eaa2
	cmp r2, #0	@ 0001eaa2 002a
.org 0x1eaa4
	bne.n 0x1eaaa	@ 0001eaa4 01d1
.org 0x1eaa6
	strb r2, [r5, #22]	@ 0001eaa6 aa75
.org 0x1eaa8
	b.n 0x1eade	@ 0001eaa8 19e0
.org 0x1eaaa
	ldr r1, [pc, #32]	@ 0001eaaa 0849
.org 0x1eaac
	ldrb r0, [r5, #4]	@ 0001eaac 2879
.org 0x1eaae
	lsls r0, r0, #2	@ 0001eaae 8000
.org 0x1eab0
	adds r0, r0, r1	@ 0001eab0 4018
.org 0x1eab2
	ldr r1, [r0, #0]	@ 0001eab2 0168
.org 0x1eab4
	lsls r0, r1, #2	@ 0001eab4 8800
.org 0x1eab6
	adds r0, r0, r1	@ 0001eab6 4018
.org 0x1eab8
	lsls r0, r0, #1	@ 0001eab8 4000
.org 0x1eaba
	adds r1, r2, #0	@ 0001eaba 111c
.org 0x1eabc
	bl 0x128fb8	@ 0001eabc 0af17cfa
.org 0x1eac0
	adds r2, r0, #0	@ 0001eac0 021c
.org 0x1eac2
	cmp r2, #10	@ 0001eac2 0a2a
.org 0x1eac4
	bgt.n 0x1ead0	@ 0001eac4 04dc
.org 0x1eac6
	movs r0, #15	@ 0001eac6 0f20
.org 0x1eac8
	b.n 0x1eadc	@ 0001eac8 08e0
.org 0x1eaca
	.byte 0x00	@ 0001eaca data
.org 0x1eacb
	.byte 0x00	@ 0001eacb data
.org 0x1eacc
	.byte 0x3c,0x28,0x84,0x08	@ 0001eacc data
.org 0x1ead0
	cmp r2, #24	@ 0001ead0 182a
.org 0x1ead2
	ble.n 0x1ead8	@ 0001ead2 01dd
.org 0x1ead4
	movs r0, #0	@ 0001ead4 0020
.org 0x1ead6
	b.n 0x1eadc	@ 0001ead6 01e0
.org 0x1ead8
	movs r0, #25	@ 0001ead8 1920
.org 0x1eada
	subs r0, r0, r2	@ 0001eada 801a
.org 0x1eadc
	strb r0, [r5, #22]	@ 0001eadc a875
.org 0x1eade
	ldrh r2, [r5, #14]	@ 0001eade ea89
.org 0x1eae0
	cmp r2, #0	@ 0001eae0 002a
.org 0x1eae2
	bne.n 0x1eaea	@ 0001eae2 02d1
.org 0x1eae4
	movs r0, #20	@ 0001eae4 1420
.org 0x1eae6
	strb r0, [r5, #23]	@ 0001eae6 e875
.org 0x1eae8
	b.n 0x1eb02	@ 0001eae8 0be0
.org 0x1eaea
	cmp r2, #120	@ 0001eaea 782a
.org 0x1eaec
	ble.n 0x1eaf4	@ 0001eaec 02dd
.org 0x1eaee
	movs r0, #0	@ 0001eaee 0020
.org 0x1eaf0
	strb r0, [r5, #23]	@ 0001eaf0 e875
.org 0x1eaf2
	b.n 0x1eb02	@ 0001eaf2 06e0
.org 0x1eaf4
	subs r0, r2, #1	@ 0001eaf4 501e
.org 0x1eaf6
	movs r1, #6	@ 0001eaf6 0621
.org 0x1eaf8
	bl 0x128fb8	@ 0001eaf8 0af15efa
.org 0x1eafc
	movs r1, #20	@ 0001eafc 1421
.org 0x1eafe
	subs r1, r1, r0	@ 0001eafe 091a
.org 0x1eb00
	strb r1, [r5, #23]	@ 0001eb00 e975
.org 0x1eb02
	ldrh r2, [r5, #18]	@ 0001eb02 6a8a
.org 0x1eb04
	cmp r2, #0	@ 0001eb04 002a
.org 0x1eb06
	bne.n 0x1eb0c	@ 0001eb06 01d1
.org 0x1eb08
	movs r0, #15	@ 0001eb08 0f20
.org 0x1eb0a
	b.n 0x1eb1c	@ 0001eb0a 07e0
.org 0x1eb0c
	cmp r2, #4	@ 0001eb0c 042a
.org 0x1eb0e
	ble.n 0x1eb14	@ 0001eb0e 01dd
.org 0x1eb10
	movs r0, #0	@ 0001eb10 0020
.org 0x1eb12
	b.n 0x1eb1c	@ 0001eb12 03e0
.org 0x1eb14
	lsls r1, r2, #1	@ 0001eb14 5100
.org 0x1eb16
	adds r1, r1, r2	@ 0001eb16 8918
.org 0x1eb18
	movs r0, #15	@ 0001eb18 0f20
.org 0x1eb1a
	subs r0, r0, r1	@ 0001eb1a 401a
.org 0x1eb1c
	strb r0, [r5, #24]	@ 0001eb1c 2876
.org 0x1eb1e
	ldr r0, [pc, #100]	@ 0001eb1e 1948
.org 0x1eb20
	ldr r1, [pc, #100]	@ 0001eb20 1949
.org 0x1eb22
	adds r0, r0, r1	@ 0001eb22 4018
.org 0x1eb24
	ldrb r1, [r0, #0]	@ 0001eb24 0178
.org 0x1eb26
	movs r0, #16	@ 0001eb26 1020
.org 0x1eb28
	ands r0, r1	@ 0001eb28 0840
.org 0x1eb2a
	lsls r0, r0, #24	@ 0001eb2a 0006
.org 0x1eb2c
	lsrs r0, r0, #24	@ 0001eb2c 000e
.org 0x1eb2e
	cmp r0, #0	@ 0001eb2e 0028
.org 0x1eb30
	beq.n 0x1eb34	@ 0001eb30 00d0
.org 0x1eb32
	movs r0, #10	@ 0001eb32 0a20
.org 0x1eb34
	strb r0, [r5, #25]	@ 0001eb34 6876
.org 0x1eb36
	ldrb r0, [r5, #17]	@ 0001eb36 687c
.org 0x1eb38
	ldrb r1, [r5, #16]	@ 0001eb38 297c
.org 0x1eb3a
	subs r0, r0, r1	@ 0001eb3a 401a
.org 0x1eb3c
	strb r0, [r5, #26]	@ 0001eb3c a876
.org 0x1eb3e
	lsls r0, r0, #24	@ 0001eb3e 0006
.org 0x1eb40
	cmp r0, #0	@ 0001eb40 0028
.org 0x1eb42
	ble.n 0x1eb48	@ 0001eb42 01dd
.org 0x1eb44
	movs r0, #0	@ 0001eb44 0020
.org 0x1eb46
	strb r0, [r5, #26]	@ 0001eb46 a876
.org 0x1eb48
	ldrb r1, [r5, #21]	@ 0001eb48 697d
.org 0x1eb4a
	ldrb r2, [r5, #20]	@ 0001eb4a 2a7d
.org 0x1eb4c
	adds r1, r1, r2	@ 0001eb4c 8918
.org 0x1eb4e
	ldrb r0, [r5, #22]	@ 0001eb4e a87d
.org 0x1eb50
	adds r0, r0, r1	@ 0001eb50 4018
.org 0x1eb52
	ldrb r1, [r5, #23]	@ 0001eb52 e97d
.org 0x1eb54
	adds r0, r0, r1	@ 0001eb54 4018
.org 0x1eb56
	ldrb r1, [r5, #24]	@ 0001eb56 297e
.org 0x1eb58
	adds r1, r1, r0	@ 0001eb58 0918
.org 0x1eb5a
	ldrb r2, [r5, #25]	@ 0001eb5a 6a7e
.org 0x1eb5c
	adds r1, r1, r2	@ 0001eb5c 8918
.org 0x1eb5e
	ldrb r0, [r5, #26]	@ 0001eb5e a87e
.org 0x1eb60
	adds r0, r0, r1	@ 0001eb60 4018
.org 0x1eb62
	strb r0, [r5, #5]	@ 0001eb62 6871
.org 0x1eb64
	ldr r1, [r5, #0]	@ 0001eb64 2968
.org 0x1eb66
	movs r0, #5	@ 0001eb66 0520
.org 0x1eb68
	ldrsb r0, [r5, r0]	@ 0001eb68 2856
.org 0x1eb6a
	ldrh r2, [r1, #12]	@ 0001eb6a 8a89
.org 0x1eb6c
	adds r0, r0, r2	@ 0001eb6c 8018
.org 0x1eb6e
	strh r0, [r1, #12]	@ 0001eb6e 8881
.org 0x1eb70
	ldr r1, [r5, #0]	@ 0001eb70 2968
.org 0x1eb72
	movs r2, #12	@ 0001eb72 0c22
.org 0x1eb74
	ldrsh r0, [r1, r2]	@ 0001eb74 885e
.org 0x1eb76
	ldrb r1, [r1, #20]	@ 0001eb76 097d
.org 0x1eb78
	bl 0x128fb8	@ 0001eb78 0af11efa
.org 0x1eb7c
	adds r3, r0, #0	@ 0001eb7c 031c
.org 0x1eb7e
	movs r2, #0	@ 0001eb7e 0022
.org 0x1eb80
	ldr r1, [pc, #8]	@ 0001eb80 0249
.org 0x1eb82
	b.n 0x1eb94	@ 0001eb82 07e0
.org 0x1eb84
	.byte 0xb0,0x0a,0x00,0x02	@ 0001eb84 data
.org 0x1eb88
	.byte 0x10,0xc0,0x02,0x00	@ 0001eb88 data
.org 0x1eb8c
	.byte 0x80,0x28,0x84,0x08	@ 0001eb8c data
.org 0x1eb90
	adds r1, #4	@ 0001eb90 0431
.org 0x1eb92
	adds r2, #1	@ 0001eb92 0132
.org 0x1eb94
	ldr r0, [r1, #0]	@ 0001eb94 0868
.org 0x1eb96
	cmp r3, r0	@ 0001eb96 8342
.org 0x1eb98
	bge.n 0x1eb90	@ 0001eb98 fada
.org 0x1eb9a
	adds r4, r5, #0	@ 0001eb9a 2c1c
.org 0x1eb9c
	ldr r0, [r4, #0]	@ 0001eb9c 2068
.org 0x1eb9e
	strb r2, [r0, #1]	@ 0001eb9e 4270
.org 0x1eba0
	bl 0x1ebf4	@ 0001eba0 00f028f8
.org 0x1eba4
	ldrh r0, [r4, #30]	@ 0001eba4 e08b
.org 0x1eba6
	cmp r0, #0	@ 0001eba6 0028
.org 0x1eba8
	beq.n 0x1ebb4	@ 0001eba8 04d0
.org 0x1ebaa
	ldr r2, [pc, #32]	@ 0001ebaa 084a
.org 0x1ebac
	ldrb r1, [r2, #20]	@ 0001ebac 117d
.org 0x1ebae
	movs r0, #239	@ 0001ebae ef20
