@ FUN_08063078  entry 0x08063078  size 164
.thumb
.org 0x63078
FUN_08063078:
	push {r4, r5, r6, lr}	@ 00063078 70b5
.org 0x6307a
	adds r6, r0, #0	@ 0006307a 061c
.org 0x6307c
	ldrb r0, [r6, #15]	@ 0006307c f07b
.org 0x6307e
	cmp r0, #0	@ 0006307e 0028
.org 0x63080
	bne.n 0x630a2	@ 00063080 0fd1
.org 0x63082
	adds r0, r6, #0	@ 00063082 301c
.org 0x63084
	adds r0, #200	@ 00063084 c830
.org 0x63086
	ldr r0, [r0, #0]	@ 00063086 0068
.org 0x63088
	cmp r0, #0	@ 00063088 0028
.org 0x6308a
	beq.n 0x63094	@ 0006308a 03d0
.org 0x6308c
	adds r1, r0, #0	@ 0006308c 011c
.org 0x6308e
	adds r1, #188	@ 0006308e bc31
.org 0x63090
	movs r0, #1	@ 00063090 0120
.org 0x63092
	strb r0, [r1, #0]	@ 00063092 0870
.org 0x63094
	adds r0, r6, #0	@ 00063094 301c
.org 0x63096
	movs r1, #8	@ 00063096 0821
.org 0x63098
	bl 0x65a94	@ 00063098 02f0fcfc
.org 0x6309c
	ldrb r0, [r6, #15]	@ 0006309c f07b
.org 0x6309e
	adds r0, #1	@ 0006309e 0130
.org 0x630a0
	strb r0, [r6, #15]	@ 000630a0 f073
.org 0x630a2
	adds r0, r6, #0	@ 000630a2 301c
.org 0x630a4
	bl 0x1cff0	@ 000630a4 b9f7a4ff
.org 0x630a8
	adds r0, r6, #0	@ 000630a8 301c
.org 0x630aa
	adds r0, #116	@ 000630aa 7430
.org 0x630ac
	ldr r4, [pc, #108]	@ 000630ac 1b4c
.org 0x630ae
	ldr r3, [pc, #112]	@ 000630ae 1c4b
.org 0x630b0
	adds r1, r6, #0	@ 000630b0 311c
.org 0x630b2
	adds r1, #180	@ 000630b2 b431
.org 0x630b4
	ldrb r2, [r1, #0]	@ 000630b4 0a78
.org 0x630b6
	lsls r1, r2, #1	@ 000630b6 5100
.org 0x630b8
	adds r1, r1, r3	@ 000630b8 c918
.org 0x630ba
	ldrh r1, [r1, #0]	@ 000630ba 0988
.org 0x630bc
	lsls r1, r1, #2	@ 000630bc 8900
.org 0x630be
	adds r1, r1, r4	@ 000630be 0919
.org 0x630c0
	adds r3, r6, #0	@ 000630c0 331c
.org 0x630c2
	adds r3, #113	@ 000630c2 7133
.org 0x630c4
	movs r5, #0	@ 000630c4 0025
.org 0x630c6
	ldrsb r5, [r3, r5]	@ 000630c6 5d57
.org 0x630c8
	ldr r1, [r1, #0]	@ 000630c8 0968
.org 0x630ca
	lsls r3, r5, #2	@ 000630ca ab00
.org 0x630cc
	adds r3, r3, r1	@ 000630cc 5b18
.org 0x630ce
	ldr r4, [pc, #84]	@ 000630ce 154c
.org 0x630d0
	adds r1, r6, #0	@ 000630d0 311c
.org 0x630d2
	adds r1, #181	@ 000630d2 b531
.org 0x630d4
	ldrb r1, [r1, #0]	@ 000630d4 0978
.org 0x630d6
	lsls r1, r1, #2	@ 000630d6 8900
.org 0x630d8
	adds r1, r1, r4	@ 000630d8 0919
.org 0x630da
	ldr r1, [r1, #0]	@ 000630da 0968
.org 0x630dc
	lsls r2, r2, #2	@ 000630dc 9200
.org 0x630de
	adds r2, r2, r1	@ 000630de 5218
.org 0x630e0
	ldr r1, [r2, #0]	@ 000630e0 1168
.org 0x630e2
	adds r1, r1, r5	@ 000630e2 4919
.org 0x630e4
	ldrb r1, [r1, #0]	@ 000630e4 0978
.org 0x630e6
	lsls r2, r1, #1	@ 000630e6 4a00
.org 0x630e8
	adds r2, r2, r1	@ 000630e8 5218
.org 0x630ea
	lsls r2, r2, #3	@ 000630ea d200
.org 0x630ec
	ldr r1, [r3, #0]	@ 000630ec 1968
.org 0x630ee
	adds r1, r1, r2	@ 000630ee 8918
.org 0x630f0
	bl 0x5784	@ 000630f0 a2f748fb
.org 0x630f4
	adds r1, r6, #0	@ 000630f4 311c
.org 0x630f6
	adds r1, #200	@ 000630f6 c831
.org 0x630f8
	ldr r0, [r1, #0]	@ 000630f8 0868
.org 0x630fa
	cmp r0, #0	@ 000630fa 0028
.org 0x630fc
	beq.n 0x6310e	@ 000630fc 07d0
.org 0x630fe
	ldrb r0, [r0, #12]	@ 000630fe 007b
.org 0x63100
	cmp r0, #1	@ 00063100 0128
.org 0x63102
	bls.n 0x63108	@ 00063102 01d9
.org 0x63104
	movs r0, #0	@ 00063104 0020
.org 0x63106
	str r0, [r1, #0]	@ 00063106 0860
.org 0x63108
	ldr r0, [r1, #0]	@ 00063108 0868
.org 0x6310a
	cmp r0, #0	@ 0006310a 0028
.org 0x6310c
	bne.n 0x63116	@ 0006310c 03d1
.org 0x6310e
	movs r1, #0	@ 0006310e 0021
.org 0x63110
	movs r0, #4	@ 00063110 0420
.org 0x63112
	strb r0, [r6, #14]	@ 00063112 b073
.org 0x63114
	strb r1, [r6, #15]	@ 00063114 f173
.org 0x63116
	pop {r4, r5, r6}	@ 00063116 70bc
.org 0x63118
	pop {r0}	@ 00063118 01bc
.org 0x6311a
	bx r0	@ 0006311a 0047
