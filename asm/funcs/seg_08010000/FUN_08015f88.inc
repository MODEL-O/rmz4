@ FUN_08015f88  entry 0x08015f88  size 150
.thumb
.org 0x15f88
FUN_08015f88:
	push {r4, r5, r6, lr}	@ 00015f88 70b5
.org 0x15f8a
	ldr r5, [pc, #148]	@ 00015f8a 254d
.org 0x15f8c
	ldr r1, [pc, #148]	@ 00015f8c 2549
.org 0x15f8e
	adds r0, r5, r1	@ 00015f8e 6818
.org 0x15f90
	ldrh r1, [r0, #0]	@ 00015f90 0188
.org 0x15f92
	lsrs r0, r1, #8	@ 00015f92 080a
.org 0x15f94
	cmp r0, #10	@ 00015f94 0a28
.org 0x15f96
	bne.n 0x15fd8	@ 00015f96 1fd1
.org 0x15f98
	movs r0, #255	@ 00015f98 ff20
.org 0x15f9a
	ands r0, r1	@ 00015f9a 0840
.org 0x15f9c
	cmp r0, #0	@ 00015f9c 0028
.org 0x15f9e
	bne.n 0x15fd8	@ 00015f9e 1bd1
.org 0x15fa0
	ldr r6, [pc, #132]	@ 00015fa0 214e
.org 0x15fa2
	ldr r0, [pc, #136]	@ 00015fa2 2248
.org 0x15fa4
	adds r5, r5, r0	@ 00015fa4 2d18
.org 0x15fa6
	ldrb r0, [r5, #0]	@ 00015fa6 2878
.org 0x15fa8
	lsrs r0, r0, #2	@ 00015fa8 8008
.org 0x15faa
	lsls r1, r0, #2	@ 00015faa 8100
.org 0x15fac
	adds r1, r1, r0	@ 00015fac 0918
.org 0x15fae
	lsls r1, r1, #2	@ 00015fae 8900
.org 0x15fb0
	ldr r4, [pc, #124]	@ 00015fb0 1f4c
.org 0x15fb2
	adds r1, r1, r4	@ 00015fb2 0919
.org 0x15fb4
	ldr r0, [r6, #0]	@ 00015fb4 3068
.org 0x15fb6
	adds r0, r0, r1	@ 00015fb6 4018
.org 0x15fb8
	movs r1, #128	@ 00015fb8 8021
.org 0x15fba
	lsls r1, r1, #7	@ 00015fba c901
.org 0x15fbc
	bl 0x1ea4	@ 00015fbc ebf772ff
.org 0x15fc0
	ldrb r0, [r5, #0]	@ 00015fc0 2878
.org 0x15fc2
	lsrs r0, r0, #2	@ 00015fc2 8008
.org 0x15fc4
	lsls r1, r0, #2	@ 00015fc4 8100
.org 0x15fc6
	adds r1, r1, r0	@ 00015fc6 0918
.org 0x15fc8
	lsls r1, r1, #2	@ 00015fc8 8900
.org 0x15fca
	adds r1, r1, r4	@ 00015fca 0919
.org 0x15fcc
	ldr r0, [r6, #0]	@ 00015fcc 3068
.org 0x15fce
	adds r0, r0, r1	@ 00015fce 4018
.org 0x15fd0
	adds r0, #12	@ 00015fd0 0c30
.org 0x15fd2
	movs r1, #0	@ 00015fd2 0021
.org 0x15fd4
	bl 0x2208	@ 00015fd4 ecf718f9
.org 0x15fd8
	ldr r2, [pc, #68]	@ 00015fd8 114a
.org 0x15fda
	ldr r1, [pc, #72]	@ 00015fda 1249
.org 0x15fdc
	adds r0, r2, r1	@ 00015fdc 5018
.org 0x15fde
	ldrh r1, [r0, #0]	@ 00015fde 0188
.org 0x15fe0
	lsrs r0, r1, #8	@ 00015fe0 080a
.org 0x15fe2
	cmp r0, #10	@ 00015fe2 0a28
.org 0x15fe4
	bne.n 0x16018	@ 00015fe4 18d1
.org 0x15fe6
	movs r0, #255	@ 00015fe6 ff20
.org 0x15fe8
	ands r0, r1	@ 00015fe8 0840
.org 0x15fea
	cmp r0, #2	@ 00015fea 0228
.org 0x15fec
	bne.n 0x16018	@ 00015fec 14d1
.org 0x15fee
	ldr r1, [pc, #68]	@ 00015fee 1149
.org 0x15ff0
	adds r0, r2, r1	@ 00015ff0 5018
.org 0x15ff2
	ldrb r1, [r0, #0]	@ 00015ff2 0178
.org 0x15ff4
	movs r0, #15	@ 00015ff4 0f20
.org 0x15ff6
	ands r0, r1	@ 00015ff6 0840
.org 0x15ff8
	cmp r0, #2	@ 00015ff8 0228
.org 0x15ffa
	bne.n 0x16018	@ 00015ffa 0dd1
.org 0x15ffc
	ldr r4, [pc, #40]	@ 00015ffc 0a4c
.org 0x15ffe
	ldr r0, [r4, #0]	@ 00015ffe 2068
.org 0x16000
	ldr r1, [pc, #52]	@ 00016000 0d49
.org 0x16002
	adds r0, r0, r1	@ 00016002 4018
.org 0x16004
	movs r1, #128	@ 00016004 8021
.org 0x16006
	lsls r1, r1, #7	@ 00016006 c901
.org 0x16008
	bl 0x1ea4	@ 00016008 ebf74cff
.org 0x1600c
	ldr r0, [r4, #0]	@ 0001600c 2068
.org 0x1600e
	ldr r1, [pc, #44]	@ 0001600e 0b49
.org 0x16010
	adds r0, r0, r1	@ 00016010 4018
.org 0x16012
	movs r1, #0	@ 00016012 0021
.org 0x16014
	bl 0x2208	@ 00016014 ecf7f8f8
.org 0x16018
	pop {r4, r5, r6}	@ 00016018 70bc
.org 0x1601a
	pop {r0}	@ 0001601a 01bc
.org 0x1601c
	bx r0	@ 0001601c 0047
