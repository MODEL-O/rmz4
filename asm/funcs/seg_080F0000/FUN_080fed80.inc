@ FUN_080fed80  entry 0x080fed80  size 140
.thumb
.org 0xfed80
FUN_080fed80:
	push {r4, r5, r6, lr}	@ 000fed80 70b5
.org 0xfed82
	mov r6, r8	@ 000fed82 4646
.org 0xfed84
	push {r6}	@ 000fed84 40b4
.org 0xfed86
	adds r4, r0, #0	@ 000fed86 041c
.org 0xfed88
	bl 0x1cc9c	@ 000fed88 1df788ff
.org 0xfed8c
	ldrb r1, [r4, #10]	@ 000fed8c a17a
.org 0xfed8e
	movs r0, #1	@ 000fed8e 0120
.org 0xfed90
	orrs r0, r1	@ 000fed90 0843
.org 0xfed92
	movs r1, #2	@ 000fed92 0221
.org 0xfed94
	orrs r0, r1	@ 000fed94 0843
.org 0xfed96
	strb r0, [r4, #10]	@ 000fed96 a072
.org 0xfed98
	movs r1, #171	@ 000fed98 ab21
.org 0xfed9a
	lsls r1, r1, #8	@ 000fed9a 0902
.org 0xfed9c
	adds r0, r4, #0	@ 000fed9c 201c
.org 0xfed9e
	bl 0x1cf00	@ 000fed9e 1ef7aff8
.org 0xfeda2
	adds r0, r4, #0	@ 000feda2 201c
.org 0xfeda4
	bl 0x1cff0	@ 000feda4 1ef724f9
.org 0xfeda8
	movs r6, #0	@ 000feda8 0026
.org 0xfedaa
	ldrb r1, [r4, #10]	@ 000fedaa a17a
.org 0xfedac
	movs r0, #239	@ 000fedac ef20
.org 0xfedae
	ands r0, r1	@ 000fedae 0840
.org 0xfedb0
	strb r0, [r4, #10]	@ 000fedb0 a072
.org 0xfedb2
	movs r0, #1	@ 000fedb2 0120
.org 0xfedb4
	mov r8, r0	@ 000fedb4 8046
.org 0xfedb6
	adds r0, r4, #0	@ 000fedb6 201c
.org 0xfedb8
	adds r0, #76	@ 000fedb8 4c30
.org 0xfedba
	strb r6, [r0, #0]	@ 000fedba 0670
.org 0xfedbc
	adds r2, r4, #0	@ 000fedbc 221c
.org 0xfedbe
	adds r2, #74	@ 000fedbe 4a32
.org 0xfedc0
	ldrb r1, [r2, #0]	@ 000fedc0 1178
.org 0xfedc2
	movs r0, #17	@ 000fedc2 1120
.org 0xfedc4
	negs r0, r0	@ 000fedc4 4042
.org 0xfedc6
	ands r0, r1	@ 000fedc6 0840
.org 0xfedc8
	strb r0, [r2, #0]	@ 000fedc8 1070
.org 0xfedca
	ldrb r1, [r4, #10]	@ 000fedca a17a
.org 0xfedcc
	movs r0, #4	@ 000fedcc 0420
.org 0xfedce
	orrs r0, r1	@ 000fedce 0843
.org 0xfedd0
	strb r0, [r4, #10]	@ 000fedd0 a072
.org 0xfedd2
	adds r5, r4, #0	@ 000fedd2 251c
.org 0xfedd4
	adds r5, #116	@ 000fedd4 7435
.org 0xfedd6
	ldr r1, [pc, #52]	@ 000fedd6 0d49
.org 0xfedd8
	adds r2, #10	@ 000fedd8 0a32
.org 0xfedda
	adds r0, r5, #0	@ 000fedda 281c
.org 0xfeddc
	movs r3, #8	@ 000feddc 0823
.org 0xfedde
	bl 0x5760	@ 000fedde 06f7bffc
.org 0xfede2
	str r4, [r5, #44]	@ 000fede2 ec62
.org 0xfede4
	str r6, [r5, #36]	@ 000fede4 6e62
.org 0xfede6
	str r6, [r4, #92]	@ 000fede6 e665
.org 0xfede8
	str r6, [r4, #96]	@ 000fede8 2666
.org 0xfedea
	ldr r1, [pc, #36]	@ 000fedea 0949
.org 0xfedec
	ldrb r0, [r4, #9]	@ 000fedec 607a
.org 0xfedee
	lsls r0, r0, #2	@ 000fedee 8000
.org 0xfedf0
	adds r0, r0, r1	@ 000fedf0 4018
.org 0xfedf2
	mov r1, r8	@ 000fedf2 4146
.org 0xfedf4
	str r1, [r4, #12]	@ 000fedf4 e160
.org 0xfedf6
	ldr r0, [r0, #0]	@ 000fedf6 0068
.org 0xfedf8
	ldr r0, [r0, #4]	@ 000fedf8 4068
.org 0xfedfa
	str r0, [r4, #20]	@ 000fedfa 6061
.org 0xfedfc
	adds r0, r4, #0	@ 000fedfc 201c
.org 0xfedfe
	bl 0xfee14	@ 000fedfe 00f009f8
.org 0xfee02
	pop {r3}	@ 000fee02 08bc
.org 0xfee04
	mov r8, r3	@ 000fee04 9846
.org 0xfee06
	pop {r4, r5, r6}	@ 000fee06 70bc
.org 0xfee08
	pop {r0}	@ 000fee08 01bc
.org 0xfee0a
	bx r0	@ 000fee0a 0047
