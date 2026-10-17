@ FUN_08000ba8  entry 0x08000ba8  size 178
.thumb
.org 0xba8
FUN_08000ba8:
	push {r4, lr}	@ 00000ba8 10b5
.org 0xbaa
	ldr r4, [pc, #176]	@ 00000baa 2c4c
.org 0xbac
	ldr r0, [pc, #176]	@ 00000bac 2c48
.org 0xbae
	mov ip, r0	@ 00000bae 8446
.org 0xbb0
	ldr r3, [pc, #176]	@ 00000bb0 2c4b
.org 0xbb2
	mov r2, ip	@ 00000bb2 6246
.org 0xbb4
	subs r2, #56	@ 00000bb4 383a
.org 0xbb6
	movs r1, #13	@ 00000bb6 0d21
.org 0xbb8
	ldmia r3!, {r0}	@ 00000bb8 01cb
.org 0xbba
	stmia r2!, {r0}	@ 00000bba 01c2
.org 0xbbc
	subs r1, #1	@ 00000bbc 0139
.org 0xbbe
	cmp r1, #0	@ 00000bbe 0029
.org 0xbc0
	bge.n 0xbb8	@ 00000bc0 fada
.org 0xbc2
	ldr r0, [pc, #164]	@ 00000bc2 2948
.org 0xbc4
	str r4, [r0, #0]	@ 00000bc4 0460
.org 0xbc6
	mov r1, ip	@ 00000bc6 6146
.org 0xbc8
	str r1, [r0, #4]	@ 00000bc8 4160
.org 0xbca
	ldr r1, [pc, #160]	@ 00000bca 2849
.org 0xbcc
	str r1, [r0, #8]	@ 00000bcc 8160
.org 0xbce
	ldr r0, [r0, #8]	@ 00000bce 8068
.org 0xbd0
	ldr r0, [pc, #156]	@ 00000bd0 2748
.org 0xbd2
	mov r4, ip	@ 00000bd2 6446
.org 0xbd4
	str r4, [r0, #0]	@ 00000bd4 0460
.org 0xbd6
	movs r0, #144	@ 00000bd6 9020
.org 0xbd8
	lsls r0, r0, #1	@ 00000bd8 4000
.org 0xbda
	add r0, ip	@ 00000bda 6044
.org 0xbdc
	movs r1, #0	@ 00000bdc 0021
.org 0xbde
	str r1, [r0, #0]	@ 00000bde 0160
.org 0xbe0
	movs r0, #146	@ 00000be0 9220
.org 0xbe2
	lsls r0, r0, #1	@ 00000be2 4000
.org 0xbe4
	add r0, ip	@ 00000be4 6044
.org 0xbe6
	str r1, [r0, #0]	@ 00000be6 0160
.org 0xbe8
	movs r0, #151	@ 00000be8 9720
.org 0xbea
	lsls r0, r0, #1	@ 00000bea 4000
.org 0xbec
	add r0, ip	@ 00000bec 6044
.org 0xbee
	strb r1, [r0, #0]	@ 00000bee 0170
.org 0xbf0
	ldr r0, [pc, #128]	@ 00000bf0 2048
.org 0xbf2
	movs r3, #1	@ 00000bf2 0123
.org 0xbf4
	strh r3, [r0, #0]	@ 00000bf4 0380
.org 0xbf6
	ldr r2, [pc, #128]	@ 00000bf6 204a
.org 0xbf8
	ldr r4, [pc, #128]	@ 00000bf8 204c
.org 0xbfa
	adds r0, r4, #0	@ 00000bfa 201c
.org 0xbfc
	strh r0, [r2, #0]	@ 00000bfc 1080
.org 0xbfe
	ldr r2, [pc, #128]	@ 00000bfe 204a
.org 0xc00
	movs r0, #40	@ 00000c00 2820
.org 0xc02
	strh r0, [r2, #0]	@ 00000c02 1080
.org 0xc04
	ldr r2, [pc, #124]	@ 00000c04 1f4a
.org 0xc06
	add r2, ip	@ 00000c06 6244
.org 0xc08
	ldrb r0, [r2, #0]	@ 00000c08 1078
.org 0xc0a
	strb r3, [r2, #0]	@ 00000c0a 1370
.org 0xc0c
	movs r0, #150	@ 00000c0c 9620
.org 0xc0e
	lsls r0, r0, #1	@ 00000c0e 4000
.org 0xc10
	add r0, ip	@ 00000c10 6044
.org 0xc12
	ldrb r2, [r0, #0]	@ 00000c12 0278
.org 0xc14
	strb r1, [r0, #0]	@ 00000c14 0170
.org 0xc16
	movs r0, #148	@ 00000c16 9420
.org 0xc18
	lsls r0, r0, #1	@ 00000c18 4000
.org 0xc1a
	add r0, ip	@ 00000c1a 6044
.org 0xc1c
	str r1, [r0, #0]	@ 00000c1c 0160
.org 0xc1e
	ldr r0, [pc, #104]	@ 00000c1e 1a48
.org 0xc20
	add r0, ip	@ 00000c20 6044
.org 0xc22
	strb r1, [r0, #0]	@ 00000c22 0170
.org 0xc24
	movs r2, #156	@ 00000c24 9c22
.org 0xc26
	lsls r2, r2, #1	@ 00000c26 5200
.org 0xc28
	add r2, ip	@ 00000c28 6244
.org 0xc2a
	movs r0, #162	@ 00000c2a a220
.org 0xc2c
	lsls r0, r0, #1	@ 00000c2c 4000
.org 0xc2e
	add r0, ip	@ 00000c2e 6044
.org 0xc30
	str r1, [r0, #0]	@ 00000c30 0160
.org 0xc32
	str r1, [r2, #0]	@ 00000c32 1160
.org 0xc34
	movs r2, #168	@ 00000c34 a822
.org 0xc36
	lsls r2, r2, #1	@ 00000c36 5200
.org 0xc38
	add r2, ip	@ 00000c38 6244
.org 0xc3a
	movs r0, #176	@ 00000c3a b020
.org 0xc3c
	lsls r0, r0, #1	@ 00000c3c 4000
.org 0xc3e
	add r0, ip	@ 00000c3e 6044
.org 0xc40
	str r1, [r0, #0]	@ 00000c40 0160
.org 0xc42
	str r1, [r2, #0]	@ 00000c42 1160
.org 0xc44
	movs r2, #186	@ 00000c44 ba22
.org 0xc46
	lsls r2, r2, #1	@ 00000c46 5200
.org 0xc48
	add r2, ip	@ 00000c48 6244
.org 0xc4a
	movs r0, #194	@ 00000c4a c220
.org 0xc4c
	lsls r0, r0, #1	@ 00000c4c 4000
.org 0xc4e
	add r0, ip	@ 00000c4e 6044
.org 0xc50
	str r1, [r0, #0]	@ 00000c50 0160
.org 0xc52
	str r1, [r2, #0]	@ 00000c52 1160
.org 0xc54
	pop {r4}	@ 00000c54 10bc
.org 0xc56
	pop {r0}	@ 00000c56 01bc
.org 0xc58
	bx r0	@ 00000c58 0047
