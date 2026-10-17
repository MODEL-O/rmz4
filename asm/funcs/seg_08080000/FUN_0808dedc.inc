@ FUN_0808dedc  entry 0x0808dedc  size 150
.thumb
.org 0x8dedc
FUN_0808dedc:
	push {r4, r5, r6, lr}	@ 0008dedc 70b5
.org 0x8dede
	adds r5, r0, #0	@ 0008dede 051c
.org 0x8dee0
	ldr r3, [r5, #40]	@ 0008dee0 ab6a
.org 0x8dee2
	ldrb r4, [r5, #17]	@ 0008dee2 6c7c
.org 0x8dee4
	movs r2, #0	@ 0008dee4 0022
.org 0x8dee6
	ldr r1, [pc, #84]	@ 0008dee6 1549
.org 0x8dee8
	ldrb r0, [r5, #9]	@ 0008dee8 687a
.org 0x8deea
	lsls r0, r0, #2	@ 0008deea 8000
.org 0x8deec
	adds r0, r0, r1	@ 0008deec 4018
.org 0x8deee
	movs r1, #1	@ 0008deee 0121
.org 0x8def0
	str r1, [r5, #12]	@ 0008def0 e960
.org 0x8def2
	ldr r0, [r0, #0]	@ 0008def2 0068
.org 0x8def4
	ldr r0, [r0, #4]	@ 0008def4 4068
.org 0x8def6
	str r0, [r5, #20]	@ 0008def6 6861
.org 0x8def8
	strb r2, [r5, #13]	@ 0008def8 6a73
.org 0x8defa
	strb r2, [r5, #14]	@ 0008defa aa73
.org 0x8defc
	strb r2, [r5, #15]	@ 0008defc ea73
.org 0x8defe
	ldrb r0, [r5, #10]	@ 0008defe a87a
.org 0x8df00
	movs r6, #0	@ 0008df00 0026
.org 0x8df02
	orrs r0, r1	@ 0008df02 0843
.org 0x8df04
	movs r1, #2	@ 0008df04 0221
.org 0x8df06
	orrs r0, r1	@ 0008df06 0843
.org 0x8df08
	strb r0, [r5, #10]	@ 0008df08 a872
.org 0x8df0a
	adds r1, r5, #0	@ 0008df0a 291c
.org 0x8df0c
	adds r1, #180	@ 0008df0c b431
.org 0x8df0e
	adds r3, #180	@ 0008df0e b433
.org 0x8df10
	ldr r0, [r3, #0]	@ 0008df10 1868
.org 0x8df12
	str r0, [r1, #0]	@ 0008df12 0860
.org 0x8df14
	adds r0, r5, #0	@ 0008df14 281c
.org 0x8df16
	bl 0x1cc9c	@ 0008df16 8ef7c1fe
.org 0x8df1a
	adds r2, r5, #0	@ 0008df1a 2a1c
.org 0x8df1c
	adds r2, #73	@ 0008df1c 4932
.org 0x8df1e
	ldrb r0, [r2, #0]	@ 0008df1e 1078
.org 0x8df20
	movs r1, #12	@ 0008df20 0c21
.org 0x8df22
	orrs r0, r1	@ 0008df22 0843
.org 0x8df24
	strb r0, [r2, #0]	@ 0008df24 1070
.org 0x8df26
	adds r1, r5, #0	@ 0008df26 291c
.org 0x8df28
	adds r1, #37	@ 0008df28 2531
.org 0x8df2a
	movs r0, #26	@ 0008df2a 1a20
.org 0x8df2c
	strb r0, [r1, #0]	@ 0008df2c 0870
.org 0x8df2e
	cmp r4, #0	@ 0008df2e 002c
.org 0x8df30
	beq.n 0x8df40	@ 0008df30 06d0
.org 0x8df32
	ldrb r0, [r5, #10]	@ 0008df32 a87a
.org 0x8df34
	movs r1, #16	@ 0008df34 1021
.org 0x8df36
	orrs r0, r1	@ 0008df36 0843
.org 0x8df38
	b.n 0x8df46	@ 0008df38 05e0
.org 0x8df3a
	.byte 0x00	@ 0008df3a data
.org 0x8df3b
	.byte 0x00	@ 0008df3b data
.org 0x8df3c
	.byte 0x40,0xdb,0x85,0x08	@ 0008df3c data
.org 0x8df40
	ldrb r1, [r5, #10]	@ 0008df40 a97a
.org 0x8df42
	movs r0, #239	@ 0008df42 ef20
.org 0x8df44
	ands r0, r1	@ 0008df44 0840
.org 0x8df46
	strb r0, [r5, #10]	@ 0008df46 a872
.org 0x8df48
	movs r1, #1	@ 0008df48 0121
.org 0x8df4a
	ands r1, r4	@ 0008df4a 2140
.org 0x8df4c
	adds r0, r5, #0	@ 0008df4c 281c
.org 0x8df4e
	adds r0, #76	@ 0008df4e 4c30
.org 0x8df50
	strb r1, [r0, #0]	@ 0008df50 0170
.org 0x8df52
	adds r3, r5, #0	@ 0008df52 2b1c
.org 0x8df54
	adds r3, #74	@ 0008df54 4a33
.org 0x8df56
	lsls r1, r1, #4	@ 0008df56 0901
.org 0x8df58
	ldrb r2, [r3, #0]	@ 0008df58 1a78
.org 0x8df5a
	movs r0, #17	@ 0008df5a 1120
.org 0x8df5c
	negs r0, r0	@ 0008df5c 4042
.org 0x8df5e
	ands r0, r2	@ 0008df5e 1040
.org 0x8df60
	orrs r0, r1	@ 0008df60 0843
.org 0x8df62
	strb r0, [r3, #0]	@ 0008df62 1870
.org 0x8df64
	ldr r1, [pc, #16]	@ 0008df64 0449
.org 0x8df66
	adds r0, r5, #0	@ 0008df66 281c
.org 0x8df68
	bl 0x1cf00	@ 0008df68 8ef7caff
.org 0x8df6c
	adds r0, r5, #0	@ 0008df6c 281c
.org 0x8df6e
	bl 0x8df7c	@ 0008df6e 00f005f8
