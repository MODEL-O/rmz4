@ FUN_0808eecc  entry 0x0808eecc  size 168
.thumb
.org 0x8eecc
FUN_0808eecc:
	push {r4, r5, lr}	@ 0008eecc 30b5
.org 0x8eece
	adds r4, r0, #0	@ 0008eece 041c
.org 0x8eed0
	ldrb r0, [r4, #15]	@ 0008eed0 e07b
.org 0x8eed2
	cmp r0, #0	@ 0008eed2 0028
.org 0x8eed4
	bne.n 0x8eee4	@ 0008eed4 06d1
.org 0x8eed6
	adds r1, r4, #0	@ 0008eed6 211c
.org 0x8eed8
	adds r1, #184	@ 0008eed8 b831
.org 0x8eeda
	movs r0, #1	@ 0008eeda 0120
.org 0x8eedc
	strb r0, [r1, #0]	@ 0008eedc 0870
.org 0x8eede
	ldrb r0, [r4, #15]	@ 0008eede e07b
.org 0x8eee0
	adds r0, #1	@ 0008eee0 0130
.org 0x8eee2
	strb r0, [r4, #15]	@ 0008eee2 e073
.org 0x8eee4
	adds r0, r4, #0	@ 0008eee4 201c
.org 0x8eee6
	bl 0x1cff0	@ 0008eee6 8ef783f8
.org 0x8eeea
	adds r0, r4, #0	@ 0008eeea 201c
.org 0x8eeec
	adds r0, #116	@ 0008eeec 7430
.org 0x8eeee
	ldr r3, [pc, #132]	@ 0008eeee 214b
.org 0x8eef0
	ldrb r1, [r4, #30]	@ 0008eef0 a17f
.org 0x8eef2
	lsls r1, r1, #8	@ 0008eef2 0902
.org 0x8eef4
	adds r2, r4, #0	@ 0008eef4 221c
.org 0x8eef6
	adds r2, #112	@ 0008eef6 7032
.org 0x8eef8
	ldrb r2, [r2, #0]	@ 0008eef8 1278
.org 0x8eefa
	orrs r1, r2	@ 0008eefa 1143
.org 0x8eefc
	ldr r2, [pc, #120]	@ 0008eefc 1e4a
.org 0x8eefe
	adds r1, r1, r2	@ 0008eefe 8918
.org 0x8ef00
	lsls r1, r1, #2	@ 0008ef00 8900
.org 0x8ef02
	adds r1, r1, r3	@ 0008ef02 c918
.org 0x8ef04
	adds r2, r4, #0	@ 0008ef04 221c
.org 0x8ef06
	adds r2, #113	@ 0008ef06 7132
.org 0x8ef08
	ldrb r2, [r2, #0]	@ 0008ef08 1278
.org 0x8ef0a
	lsls r2, r2, #24	@ 0008ef0a 1206
.org 0x8ef0c
	asrs r2, r2, #24	@ 0008ef0c 1216
.org 0x8ef0e
	ldr r1, [r1, #0]	@ 0008ef0e 0968
.org 0x8ef10
	lsls r2, r2, #2	@ 0008ef10 9200
.org 0x8ef12
	adds r2, r2, r1	@ 0008ef12 5218
.org 0x8ef14
	ldr r1, [r2, #0]	@ 0008ef14 1168
.org 0x8ef16
	ldrb r2, [r1, #0]	@ 0008ef16 0a78
.org 0x8ef18
	lsls r1, r2, #1	@ 0008ef18 5100
.org 0x8ef1a
	adds r1, r1, r2	@ 0008ef1a 8918
.org 0x8ef1c
	lsls r1, r1, #3	@ 0008ef1c c900
.org 0x8ef1e
	ldr r2, [pc, #92]	@ 0008ef1e 174a
.org 0x8ef20
	adds r1, r1, r2	@ 0008ef20 8918
.org 0x8ef22
	bl 0x5784	@ 0008ef22 76f72ffc
.org 0x8ef26
	adds r5, r4, #0	@ 0008ef26 251c
.org 0x8ef28
	adds r5, #187	@ 0008ef28 bb35
.org 0x8ef2a
	ldrb r0, [r5, #0]	@ 0008ef2a 2878
.org 0x8ef2c
	cmp r0, #0	@ 0008ef2c 0028
.org 0x8ef2e
	beq.n 0x8ef44	@ 0008ef2e 09d0
.org 0x8ef30
	adds r0, r4, #0	@ 0008ef30 201c
.org 0x8ef32
	adds r0, #115	@ 0008ef32 7330
.org 0x8ef34
	ldrb r0, [r0, #0]	@ 0008ef34 0078
.org 0x8ef36
	cmp r0, #3	@ 0008ef36 0328
.org 0x8ef38
	bne.n 0x8ef44	@ 0008ef38 04d1
.org 0x8ef3a
	adds r0, r4, #0	@ 0008ef3a 201c
.org 0x8ef3c
	bl 0x8fc18	@ 0008ef3c 00f06cfe
.org 0x8ef40
	movs r0, #0	@ 0008ef40 0020
.org 0x8ef42
	strb r0, [r5, #0]	@ 0008ef42 2870
.org 0x8ef44
	adds r0, r4, #0	@ 0008ef44 201c
.org 0x8ef46
	bl 0x8faf4	@ 0008ef46 00f0d5fd
.org 0x8ef4a
	ldr r1, [r4, #100]	@ 0008ef4a 616e
.org 0x8ef4c
	negs r1, r1	@ 0008ef4c 4942
.org 0x8ef4e
	ldr r0, [r4, #92]	@ 0008ef4e e06d
.org 0x8ef50
	bl 0x128fb8	@ 0008ef50 9af032f8
.org 0x8ef54
	negs r0, r0	@ 0008ef54 4042
.org 0x8ef56
	cmp r0, #17	@ 0008ef56 1128
.org 0x8ef58
	bgt.n 0x8ef6e	@ 0008ef58 09dc
.org 0x8ef5a
	adds r0, r4, #0	@ 0008ef5a 201c
.org 0x8ef5c
	adds r0, #115	@ 0008ef5c 7330
.org 0x8ef5e
	ldrb r0, [r0, #0]	@ 0008ef5e 0078
.org 0x8ef60
	cmp r0, #3	@ 0008ef60 0328
.org 0x8ef62
	bne.n 0x8ef6e	@ 0008ef62 04d1
.org 0x8ef64
	movs r1, #0	@ 0008ef64 0021
.org 0x8ef66
	movs r0, #1	@ 0008ef66 0120
.org 0x8ef68
	strb r0, [r4, #13]	@ 0008ef68 6073
.org 0x8ef6a
	strb r1, [r4, #14]	@ 0008ef6a a173
.org 0x8ef6c
	strb r1, [r4, #15]	@ 0008ef6c e173
.org 0x8ef6e
	pop {r4, r5}	@ 0008ef6e 30bc
.org 0x8ef70
	pop {r0}	@ 0008ef70 01bc
.org 0x8ef72
	bx r0	@ 0008ef72 0047
