@ FUN_08077d84  entry 0x08077d84  size 202
.thumb
.org 0x77d84
FUN_08077d84:
	push {r4, r5, r6, r7, lr}	@ 00077d84 f0b5
.org 0x77d86
	mov r7, r8	@ 00077d86 4746
.org 0x77d88
	push {r7}	@ 00077d88 80b4
.org 0x77d8a
	adds r6, r0, #0	@ 00077d8a 061c
.org 0x77d8c
	ldrb r2, [r6, #15]	@ 00077d8c f27b
.org 0x77d8e
	cmp r2, #0	@ 00077d8e 002a
.org 0x77d90
	bne.n 0x77de6	@ 00077d90 29d1
.org 0x77d92
	adds r1, r6, #0	@ 00077d92 311c
.org 0x77d94
	adds r1, #204	@ 00077d94 cc31
.org 0x77d96
	ldr r0, [r1, #0]	@ 00077d96 0868
.org 0x77d98
	adds r0, #182	@ 00077d98 b630
.org 0x77d9a
	strb r2, [r0, #0]	@ 00077d9a 0270
.org 0x77d9c
	ldr r0, [r1, #0]	@ 00077d9c 0868
.org 0x77d9e
	adds r0, #185	@ 00077d9e b930
.org 0x77da0
	movs r5, #1	@ 00077da0 0125
.org 0x77da2
	movs r1, #1	@ 00077da2 0121
.org 0x77da4
	strb r1, [r0, #0]	@ 00077da4 0170
.org 0x77da6
	adds r0, r6, #0	@ 00077da6 301c
.org 0x77da8
	movs r1, #0	@ 00077da8 0021
.org 0x77daa
	bl 0x78fdc	@ 00077daa 01f017f9
.org 0x77dae
	movs r0, #197	@ 00077dae c520
.org 0x77db0
	adds r0, r0, r6	@ 00077db0 8019
.org 0x77db2
	mov r8, r0	@ 00077db2 8046
.org 0x77db4
	ldrb r4, [r0, #0]	@ 00077db4 0478
.org 0x77db6
	adds r4, #1	@ 00077db6 0134
.org 0x77db8
	ands r4, r5	@ 00077db8 2c40
.org 0x77dba
	adds r7, r4, #1	@ 00077dba 671c
.org 0x77dbc
	ands r7, r5	@ 00077dbc 2f40
.org 0x77dbe
	lsls r5, r7, #1	@ 00077dbe 7d00
.org 0x77dc0
	subs r5, #1	@ 00077dc0 013d
.org 0x77dc2
	lsls r0, r5, #9	@ 00077dc2 6802
.org 0x77dc4
	str r0, [r6, #92]	@ 00077dc4 f065
.org 0x77dc6
	adds r0, r6, #0	@ 00077dc6 301c
.org 0x77dc8
	adds r1, r4, #0	@ 00077dc8 211c
.org 0x77dca
	bl 0x79048	@ 00077dca 01f03df9
.org 0x77dce
	str r0, [r6, #104]	@ 00077dce b066
.org 0x77dd0
	lsls r1, r5, #2	@ 00077dd0 a900
.org 0x77dd2
	adds r1, r1, r5	@ 00077dd2 4919
.org 0x77dd4
	lsls r1, r1, #11	@ 00077dd4 c902
.org 0x77dd6
	subs r0, r0, r1	@ 00077dd6 401a
.org 0x77dd8
	str r0, [r6, #84]	@ 00077dd8 7065
.org 0x77dda
	mov r0, r8	@ 00077dda 4046
.org 0x77ddc
	strb r4, [r0, #0]	@ 00077ddc 0470
.org 0x77dde
	strb r7, [r6, #19]	@ 00077dde f774
.org 0x77de0
	ldrb r0, [r6, #15]	@ 00077de0 f07b
.org 0x77de2
	adds r0, #1	@ 00077de2 0130
.org 0x77de4
	strb r0, [r6, #15]	@ 00077de4 f073
.org 0x77de6
	ldrb r7, [r6, #19]	@ 00077de6 f77c
.org 0x77de8
	adds r0, r6, #0	@ 00077de8 301c
.org 0x77dea
	bl 0x1cff0	@ 00077dea a5f701f9
.org 0x77dee
	adds r0, r6, #0	@ 00077dee 301c
.org 0x77df0
	adds r0, #116	@ 00077df0 7430
.org 0x77df2
	ldr r3, [pc, #92]	@ 00077df2 174b
.org 0x77df4
	ldr r2, [pc, #92]	@ 00077df4 174a
.org 0x77df6
	adds r1, r6, #0	@ 00077df6 311c
.org 0x77df8
	adds r1, #196	@ 00077df8 c431
.org 0x77dfa
	ldrb r1, [r1, #0]	@ 00077dfa 0978
.org 0x77dfc
	lsls r1, r1, #1	@ 00077dfc 4900
.org 0x77dfe
	adds r1, r1, r2	@ 00077dfe 8918
.org 0x77e00
	ldrh r2, [r1, #0]	@ 00077e00 0a88
.org 0x77e02
	lsls r2, r2, #2	@ 00077e02 9200
.org 0x77e04
	adds r2, r2, r3	@ 00077e04 d218
.org 0x77e06
	adds r1, r6, #0	@ 00077e06 311c
.org 0x77e08
	adds r1, #113	@ 00077e08 7131
.org 0x77e0a
	ldrb r1, [r1, #0]	@ 00077e0a 0978
.org 0x77e0c
	lsls r1, r1, #24	@ 00077e0c 0906
.org 0x77e0e
	asrs r1, r1, #24	@ 00077e0e 0916
.org 0x77e10
	ldr r2, [r2, #0]	@ 00077e10 1268
.org 0x77e12
	lsls r1, r1, #2	@ 00077e12 8900
.org 0x77e14
	adds r1, r1, r2	@ 00077e14 8918
.org 0x77e16
	ldr r1, [r1, #0]	@ 00077e16 0968
.org 0x77e18
	bl 0x5784	@ 00077e18 8df7b4fc
.org 0x77e1c
	adds r0, r6, #0	@ 00077e1c 301c
.org 0x77e1e
	bl 0x78f64	@ 00077e1e 01f0a1f8
.org 0x77e22
	ldr r1, [r6, #84]	@ 00077e22 716d
.org 0x77e24
	ldr r0, [r6, #92]	@ 00077e24 f06d
.org 0x77e26
	adds r1, r1, r0	@ 00077e26 0918
.org 0x77e28
	str r1, [r6, #84]	@ 00077e28 7165
.org 0x77e2a
	ldr r2, [r6, #104]	@ 00077e2a b26e
.org 0x77e2c
	subs r1, r1, r2	@ 00077e2c 891a
.org 0x77e2e
	lsls r0, r7, #1	@ 00077e2e 7800
.org 0x77e30
	subs r0, #1	@ 00077e30 0138
.org 0x77e32
	muls r0, r1	@ 00077e32 4843
.org 0x77e34
	cmp r0, #0	@ 00077e34 0028
.org 0x77e36
	blt.n 0x77e44	@ 00077e36 05db
.org 0x77e38
	str r2, [r6, #84]	@ 00077e38 7265
.org 0x77e3a
	ldrb r0, [r6, #14]	@ 00077e3a b07b
.org 0x77e3c
	adds r0, #1	@ 00077e3c 0130
.org 0x77e3e
	movs r1, #0	@ 00077e3e 0021
.org 0x77e40
	strb r0, [r6, #14]	@ 00077e40 b073
.org 0x77e42
	strb r1, [r6, #15]	@ 00077e42 f173
.org 0x77e44
	pop {r3}	@ 00077e44 08bc
.org 0x77e46
	mov r8, r3	@ 00077e46 9846
.org 0x77e48
	pop {r4, r5, r6, r7}	@ 00077e48 f0bc
.org 0x77e4a
	pop {r0}	@ 00077e4a 01bc
.org 0x77e4c
	bx r0	@ 00077e4c 0047
