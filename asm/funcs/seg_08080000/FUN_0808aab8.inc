@ FUN_0808aab8  entry 0x0808aab8  size 210
.thumb
.org 0x8aab8
FUN_0808aab8:
	push {r4, r5, r6, r7, lr}	@ 0008aab8 f0b5
.org 0x8aaba
	adds r5, r0, #0	@ 0008aaba 051c
.org 0x8aabc
	ldrb r0, [r5, #14]	@ 0008aabc a87b
.org 0x8aabe
	cmp r0, #0	@ 0008aabe 0028
.org 0x8aac0
	beq.n 0x8aac8	@ 0008aac0 02d0
.org 0x8aac2
	cmp r0, #1	@ 0008aac2 0128
.org 0x8aac4
	beq.n 0x8aaf6	@ 0008aac4 17d0
.org 0x8aac6
	b.n 0x8ab54	@ 0008aac6 45e0
.org 0x8aac8
	adds r0, r5, #0	@ 0008aac8 281c
.org 0x8aaca
	adds r0, #116	@ 0008aaca 7430
.org 0x8aacc
	adds r4, r5, #0	@ 0008aacc 2c1c
.org 0x8aace
	adds r4, #192	@ 0008aace c034
.org 0x8aad0
	ldrb r2, [r4, #0]	@ 0008aad0 2278
.org 0x8aad2
	lsls r1, r2, #1	@ 0008aad2 5100
.org 0x8aad4
	adds r1, r1, r2	@ 0008aad4 8918
.org 0x8aad6
	lsls r1, r1, #3	@ 0008aad6 c900
.org 0x8aad8
	ldr r2, [pc, #176]	@ 0008aad8 2c4a
.org 0x8aada
	adds r1, r1, r2	@ 0008aada 8918
.org 0x8aadc
	bl 0x5784	@ 0008aadc 7af752fe
.org 0x8aae0
	ldrb r1, [r4, #0]	@ 0008aae0 2178
.org 0x8aae2
	movs r2, #128	@ 0008aae2 8022
.org 0x8aae4
	lsls r2, r2, #6	@ 0008aae4 9201
.org 0x8aae6
	adds r0, r2, #0	@ 0008aae6 101c
.org 0x8aae8
	orrs r1, r0	@ 0008aae8 0143
.org 0x8aaea
	adds r0, r5, #0	@ 0008aaea 281c
.org 0x8aaec
	bl 0x1cf00	@ 0008aaec 92f708fa
.org 0x8aaf0
	ldrb r0, [r5, #14]	@ 0008aaf0 a87b
.org 0x8aaf2
	adds r0, #1	@ 0008aaf2 0130
.org 0x8aaf4
	strb r0, [r5, #14]	@ 0008aaf4 a873
.org 0x8aaf6
	adds r0, r5, #0	@ 0008aaf6 281c
.org 0x8aaf8
	bl 0x1cff0	@ 0008aaf8 92f77afa
.org 0x8aafc
	adds r0, r5, #0	@ 0008aafc 281c
.org 0x8aafe
	adds r0, #192	@ 0008aafe c030
.org 0x8ab00
	ldrb r4, [r0, #0]	@ 0008ab00 0478
.org 0x8ab02
	cmp r4, #0	@ 0008ab02 002c
.org 0x8ab04
	bne.n 0x8ab54	@ 0008ab04 26d1
.org 0x8ab06
	ldr r0, [r5, #96]	@ 0008ab06 286e
.org 0x8ab08
	adds r0, #64	@ 0008ab08 4030
.org 0x8ab0a
	str r0, [r5, #96]	@ 0008ab0a 2866
.org 0x8ab0c
	movs r6, #224	@ 0008ab0c e026
.org 0x8ab0e
	lsls r6, r6, #3	@ 0008ab0e f600
.org 0x8ab10
	cmp r0, r6	@ 0008ab10 b042
.org 0x8ab12
	ble.n 0x8ab16	@ 0008ab12 00dd
.org 0x8ab14
	str r6, [r5, #96]	@ 0008ab14 2e66
.org 0x8ab16
	ldr r1, [r5, #88]	@ 0008ab16 a96d
.org 0x8ab18
	ldr r0, [r5, #96]	@ 0008ab18 286e
.org 0x8ab1a
	adds r1, r1, r0	@ 0008ab1a 0918
.org 0x8ab1c
	str r1, [r5, #88]	@ 0008ab1c a965
.org 0x8ab1e
	ldr r0, [r5, #84]	@ 0008ab1e 686d
.org 0x8ab20
	ldr r2, [pc, #108]	@ 0008ab20 1b4a
.org 0x8ab22
	adds r0, r0, r2	@ 0008ab22 8018
.org 0x8ab24
	ldr r7, [pc, #108]	@ 0008ab24 1b4f
.org 0x8ab26
	adds r1, r1, r7	@ 0008ab26 c919
.org 0x8ab28
	bl 0x7db4	@ 0008ab28 7df744f9
.org 0x8ab2c
	adds r1, r0, #0	@ 0008ab2c 011c
.org 0x8ab2e
	cmp r1, #0	@ 0008ab2e 0029
.org 0x8ab30
	bge.n 0x8ab3a	@ 0008ab30 03da
.org 0x8ab32
	str r4, [r5, #96]	@ 0008ab32 2c66
.org 0x8ab34
	ldr r0, [r5, #88]	@ 0008ab34 a86d
.org 0x8ab36
	adds r0, r0, r1	@ 0008ab36 4018
.org 0x8ab38
	str r0, [r5, #88]	@ 0008ab38 a865
.org 0x8ab3a
	ldr r0, [r5, #84]	@ 0008ab3a 686d
.org 0x8ab3c
	adds r0, r0, r6	@ 0008ab3c 8019
.org 0x8ab3e
	ldr r1, [r5, #88]	@ 0008ab3e a96d
.org 0x8ab40
	adds r1, r1, r7	@ 0008ab40 c919
.org 0x8ab42
	bl 0x7db4	@ 0008ab42 7df737f9
.org 0x8ab46
	adds r1, r0, #0	@ 0008ab46 011c
.org 0x8ab48
	cmp r1, #0	@ 0008ab48 0029
.org 0x8ab4a
	bge.n 0x8ab54	@ 0008ab4a 03da
.org 0x8ab4c
	str r4, [r5, #96]	@ 0008ab4c 2c66
.org 0x8ab4e
	ldr r0, [r5, #88]	@ 0008ab4e a86d
.org 0x8ab50
	adds r0, r0, r1	@ 0008ab50 4018
.org 0x8ab52
	str r0, [r5, #88]	@ 0008ab52 a865
.org 0x8ab54
	adds r6, r5, #0	@ 0008ab54 2e1c
.org 0x8ab56
	adds r6, #188	@ 0008ab56 bc36
.org 0x8ab58
	ldr r0, [r6, #0]	@ 0008ab58 3068
.org 0x8ab5a
	bl 0x2b3e4	@ 0008ab5a a0f743fc
.org 0x8ab5e
	cmp r0, #0	@ 0008ab5e 0028
.org 0x8ab60
	beq.n 0x8ab84	@ 0008ab60 10d0
.org 0x8ab62
	adds r0, r5, #0	@ 0008ab62 281c
.org 0x8ab64
	adds r0, #116	@ 0008ab64 7430
.org 0x8ab66
	adds r4, r5, #0	@ 0008ab66 2c1c
.org 0x8ab68
	adds r4, #192	@ 0008ab68 c034
.org 0x8ab6a
	ldrb r2, [r4, #0]	@ 0008ab6a 2278
.org 0x8ab6c
	lsls r1, r2, #1	@ 0008ab6c 5100
.org 0x8ab6e
	adds r1, r1, r2	@ 0008ab6e 8918
.org 0x8ab70
	lsls r1, r1, #3	@ 0008ab70 c900
.org 0x8ab72
	ldr r2, [pc, #24]	@ 0008ab72 064a
.org 0x8ab74
	adds r1, r1, r2	@ 0008ab74 8918
.org 0x8ab76
	bl 0x5784	@ 0008ab76 7af705fe
.org 0x8ab7a
	movs r1, #0	@ 0008ab7a 0021
.org 0x8ab7c
	str r1, [r6, #0]	@ 0008ab7c 3160
.org 0x8ab7e
	ldrb r0, [r4, #0]	@ 0008ab7e 2078
.org 0x8ab80
	strb r0, [r5, #13]	@ 0008ab80 6873
.org 0x8ab82
	strb r1, [r5, #14]	@ 0008ab82 a973
.org 0x8ab84
	pop {r4, r5, r6, r7}	@ 0008ab84 f0bc
.org 0x8ab86
	pop {r0}	@ 0008ab86 01bc
.org 0x8ab88
	bx r0	@ 0008ab88 0047
