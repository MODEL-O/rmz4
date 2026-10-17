@ FUN_0808ab98  entry 0x0808ab98  size 210
.thumb
.org 0x8ab98
FUN_0808ab98:
	push {r4, r5, r6, r7, lr}	@ 0008ab98 f0b5
.org 0x8ab9a
	adds r5, r0, #0	@ 0008ab9a 051c
.org 0x8ab9c
	ldrb r0, [r5, #14]	@ 0008ab9c a87b
.org 0x8ab9e
	cmp r0, #0	@ 0008ab9e 0028
.org 0x8aba0
	beq.n 0x8aba8	@ 0008aba0 02d0
.org 0x8aba2
	cmp r0, #1	@ 0008aba2 0128
.org 0x8aba4
	beq.n 0x8abd6	@ 0008aba4 17d0
.org 0x8aba6
	b.n 0x8ac34	@ 0008aba6 45e0
.org 0x8aba8
	adds r0, r5, #0	@ 0008aba8 281c
.org 0x8abaa
	adds r0, #116	@ 0008abaa 7430
.org 0x8abac
	adds r4, r5, #0	@ 0008abac 2c1c
.org 0x8abae
	adds r4, #192	@ 0008abae c034
.org 0x8abb0
	ldrb r2, [r4, #0]	@ 0008abb0 2278
.org 0x8abb2
	lsls r1, r2, #1	@ 0008abb2 5100
.org 0x8abb4
	adds r1, r1, r2	@ 0008abb4 8918
.org 0x8abb6
	lsls r1, r1, #3	@ 0008abb6 c900
.org 0x8abb8
	ldr r2, [pc, #176]	@ 0008abb8 2c4a
.org 0x8abba
	adds r1, r1, r2	@ 0008abba 8918
.org 0x8abbc
	bl 0x5784	@ 0008abbc 7af7e2fd
.org 0x8abc0
	ldrb r1, [r4, #0]	@ 0008abc0 2178
.org 0x8abc2
	movs r2, #128	@ 0008abc2 8022
.org 0x8abc4
	lsls r2, r2, #6	@ 0008abc4 9201
.org 0x8abc6
	adds r0, r2, #0	@ 0008abc6 101c
.org 0x8abc8
	orrs r1, r0	@ 0008abc8 0143
.org 0x8abca
	adds r0, r5, #0	@ 0008abca 281c
.org 0x8abcc
	bl 0x1cf00	@ 0008abcc 92f798f9
.org 0x8abd0
	ldrb r0, [r5, #14]	@ 0008abd0 a87b
.org 0x8abd2
	adds r0, #1	@ 0008abd2 0130
.org 0x8abd4
	strb r0, [r5, #14]	@ 0008abd4 a873
.org 0x8abd6
	adds r0, r5, #0	@ 0008abd6 281c
.org 0x8abd8
	bl 0x1cff0	@ 0008abd8 92f70afa
.org 0x8abdc
	adds r0, r5, #0	@ 0008abdc 281c
.org 0x8abde
	adds r0, #192	@ 0008abde c030
.org 0x8abe0
	ldrb r4, [r0, #0]	@ 0008abe0 0478
.org 0x8abe2
	cmp r4, #0	@ 0008abe2 002c
.org 0x8abe4
	bne.n 0x8ac34	@ 0008abe4 26d1
.org 0x8abe6
	ldr r0, [r5, #96]	@ 0008abe6 286e
.org 0x8abe8
	adds r0, #64	@ 0008abe8 4030
.org 0x8abea
	str r0, [r5, #96]	@ 0008abea 2866
.org 0x8abec
	movs r6, #224	@ 0008abec e026
.org 0x8abee
	lsls r6, r6, #3	@ 0008abee f600
.org 0x8abf0
	cmp r0, r6	@ 0008abf0 b042
.org 0x8abf2
	ble.n 0x8abf6	@ 0008abf2 00dd
.org 0x8abf4
	str r6, [r5, #96]	@ 0008abf4 2e66
.org 0x8abf6
	ldr r1, [r5, #88]	@ 0008abf6 a96d
.org 0x8abf8
	ldr r0, [r5, #96]	@ 0008abf8 286e
.org 0x8abfa
	adds r1, r1, r0	@ 0008abfa 0918
.org 0x8abfc
	str r1, [r5, #88]	@ 0008abfc a965
.org 0x8abfe
	ldr r0, [r5, #84]	@ 0008abfe 686d
.org 0x8ac00
	ldr r2, [pc, #108]	@ 0008ac00 1b4a
.org 0x8ac02
	adds r0, r0, r2	@ 0008ac02 8018
.org 0x8ac04
	ldr r7, [pc, #108]	@ 0008ac04 1b4f
.org 0x8ac06
	adds r1, r1, r7	@ 0008ac06 c919
.org 0x8ac08
	bl 0x7db4	@ 0008ac08 7df7d4f8
.org 0x8ac0c
	adds r1, r0, #0	@ 0008ac0c 011c
.org 0x8ac0e
	cmp r1, #0	@ 0008ac0e 0029
.org 0x8ac10
	bge.n 0x8ac1a	@ 0008ac10 03da
.org 0x8ac12
	str r4, [r5, #96]	@ 0008ac12 2c66
.org 0x8ac14
	ldr r0, [r5, #88]	@ 0008ac14 a86d
.org 0x8ac16
	adds r0, r0, r1	@ 0008ac16 4018
.org 0x8ac18
	str r0, [r5, #88]	@ 0008ac18 a865
.org 0x8ac1a
	ldr r0, [r5, #84]	@ 0008ac1a 686d
.org 0x8ac1c
	adds r0, r0, r6	@ 0008ac1c 8019
.org 0x8ac1e
	ldr r1, [r5, #88]	@ 0008ac1e a96d
.org 0x8ac20
	adds r1, r1, r7	@ 0008ac20 c919
.org 0x8ac22
	bl 0x7db4	@ 0008ac22 7df7c7f8
.org 0x8ac26
	adds r1, r0, #0	@ 0008ac26 011c
.org 0x8ac28
	cmp r1, #0	@ 0008ac28 0029
.org 0x8ac2a
	bge.n 0x8ac34	@ 0008ac2a 03da
.org 0x8ac2c
	str r4, [r5, #96]	@ 0008ac2c 2c66
.org 0x8ac2e
	ldr r0, [r5, #88]	@ 0008ac2e a86d
.org 0x8ac30
	adds r0, r0, r1	@ 0008ac30 4018
.org 0x8ac32
	str r0, [r5, #88]	@ 0008ac32 a865
.org 0x8ac34
	adds r6, r5, #0	@ 0008ac34 2e1c
.org 0x8ac36
	adds r6, #188	@ 0008ac36 bc36
.org 0x8ac38
	ldr r0, [r6, #0]	@ 0008ac38 3068
.org 0x8ac3a
	bl 0x2b3e4	@ 0008ac3a a0f7d3fb
.org 0x8ac3e
	cmp r0, #0	@ 0008ac3e 0028
.org 0x8ac40
	beq.n 0x8ac64	@ 0008ac40 10d0
.org 0x8ac42
	adds r0, r5, #0	@ 0008ac42 281c
.org 0x8ac44
	adds r0, #116	@ 0008ac44 7430
.org 0x8ac46
	adds r4, r5, #0	@ 0008ac46 2c1c
.org 0x8ac48
	adds r4, #192	@ 0008ac48 c034
.org 0x8ac4a
	ldrb r2, [r4, #0]	@ 0008ac4a 2278
.org 0x8ac4c
	lsls r1, r2, #1	@ 0008ac4c 5100
.org 0x8ac4e
	adds r1, r1, r2	@ 0008ac4e 8918
.org 0x8ac50
	lsls r1, r1, #3	@ 0008ac50 c900
.org 0x8ac52
	ldr r2, [pc, #24]	@ 0008ac52 064a
.org 0x8ac54
	adds r1, r1, r2	@ 0008ac54 8918
.org 0x8ac56
	bl 0x5784	@ 0008ac56 7af795fd
.org 0x8ac5a
	movs r1, #0	@ 0008ac5a 0021
.org 0x8ac5c
	str r1, [r6, #0]	@ 0008ac5c 3160
.org 0x8ac5e
	ldrb r0, [r4, #0]	@ 0008ac5e 2078
.org 0x8ac60
	strb r0, [r5, #13]	@ 0008ac60 6873
.org 0x8ac62
	strb r1, [r5, #14]	@ 0008ac62 a973
.org 0x8ac64
	pop {r4, r5, r6, r7}	@ 0008ac64 f0bc
.org 0x8ac66
	pop {r0}	@ 0008ac66 01bc
.org 0x8ac68
	bx r0	@ 0008ac68 0047
