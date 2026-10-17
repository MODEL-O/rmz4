@ FUN_08062dc0  entry 0x08062dc0  size 128
.thumb
.org 0x62dc0
FUN_08062dc0:
	push {r4, r5, r6, lr}	@ 00062dc0 70b5
.org 0x62dc2
	adds r6, r0, #0	@ 00062dc2 061c
.org 0x62dc4
	ldrb r0, [r6, #15]	@ 00062dc4 f07b
.org 0x62dc6
	cmp r0, #0	@ 00062dc6 0028
.org 0x62dc8
	bne.n 0x62dd8	@ 00062dc8 06d1
.org 0x62dca
	adds r0, r6, #0	@ 00062dca 301c
.org 0x62dcc
	movs r1, #25	@ 00062dcc 1921
.org 0x62dce
	bl 0x65a94	@ 00062dce 02f061fe
.org 0x62dd2
	ldrb r0, [r6, #15]	@ 00062dd2 f07b
.org 0x62dd4
	adds r0, #1	@ 00062dd4 0130
.org 0x62dd6
	strb r0, [r6, #15]	@ 00062dd6 f073
.org 0x62dd8
	adds r0, r6, #0	@ 00062dd8 301c
.org 0x62dda
	bl 0x1cff0	@ 00062dda baf709f9
.org 0x62dde
	adds r0, r6, #0	@ 00062dde 301c
.org 0x62de0
	adds r0, #116	@ 00062de0 7430
.org 0x62de2
	ldr r4, [pc, #92]	@ 00062de2 174c
.org 0x62de4
	ldr r3, [pc, #92]	@ 00062de4 174b
.org 0x62de6
	adds r1, r6, #0	@ 00062de6 311c
.org 0x62de8
	adds r1, #180	@ 00062de8 b431
.org 0x62dea
	ldrb r2, [r1, #0]	@ 00062dea 0a78
.org 0x62dec
	lsls r1, r2, #1	@ 00062dec 5100
.org 0x62dee
	adds r1, r1, r3	@ 00062dee c918
.org 0x62df0
	ldrh r1, [r1, #0]	@ 00062df0 0988
.org 0x62df2
	lsls r1, r1, #2	@ 00062df2 8900
.org 0x62df4
	adds r1, r1, r4	@ 00062df4 0919
.org 0x62df6
	adds r3, r6, #0	@ 00062df6 331c
.org 0x62df8
	adds r3, #113	@ 00062df8 7133
.org 0x62dfa
	movs r5, #0	@ 00062dfa 0025
.org 0x62dfc
	ldrsb r5, [r3, r5]	@ 00062dfc 5d57
.org 0x62dfe
	ldr r1, [r1, #0]	@ 00062dfe 0968
.org 0x62e00
	lsls r3, r5, #2	@ 00062e00 ab00
.org 0x62e02
	adds r3, r3, r1	@ 00062e02 5b18
.org 0x62e04
	ldr r4, [pc, #64]	@ 00062e04 104c
.org 0x62e06
	adds r1, r6, #0	@ 00062e06 311c
.org 0x62e08
	adds r1, #181	@ 00062e08 b531
.org 0x62e0a
	ldrb r1, [r1, #0]	@ 00062e0a 0978
.org 0x62e0c
	lsls r1, r1, #2	@ 00062e0c 8900
.org 0x62e0e
	adds r1, r1, r4	@ 00062e0e 0919
.org 0x62e10
	ldr r1, [r1, #0]	@ 00062e10 0968
.org 0x62e12
	lsls r2, r2, #2	@ 00062e12 9200
.org 0x62e14
	adds r2, r2, r1	@ 00062e14 5218
.org 0x62e16
	ldr r1, [r2, #0]	@ 00062e16 1168
.org 0x62e18
	adds r1, r1, r5	@ 00062e18 4919
.org 0x62e1a
	ldrb r1, [r1, #0]	@ 00062e1a 0978
.org 0x62e1c
	lsls r2, r1, #1	@ 00062e1c 4a00
.org 0x62e1e
	adds r2, r2, r1	@ 00062e1e 5218
.org 0x62e20
	lsls r2, r2, #3	@ 00062e20 d200
.org 0x62e22
	ldr r1, [r3, #0]	@ 00062e22 1968
.org 0x62e24
	adds r1, r1, r2	@ 00062e24 8918
.org 0x62e26
	bl 0x5784	@ 00062e26 a2f7adfc
.org 0x62e2a
	adds r0, r6, #0	@ 00062e2a 301c
.org 0x62e2c
	adds r0, #196	@ 00062e2c c430
.org 0x62e2e
	ldr r1, [r0, #0]	@ 00062e2e 0168
.org 0x62e30
	cmp r1, #0	@ 00062e30 0029
.org 0x62e32
	bne.n 0x62e3a	@ 00062e32 02d1
.org 0x62e34
	movs r0, #1	@ 00062e34 0120
.org 0x62e36
	strb r0, [r6, #14]	@ 00062e36 b073
.org 0x62e38
	strb r1, [r6, #15]	@ 00062e38 f173
.org 0x62e3a
	pop {r4, r5, r6}	@ 00062e3a 70bc
.org 0x62e3c
	pop {r0}	@ 00062e3c 01bc
.org 0x62e3e
	bx r0	@ 00062e3e 0047
