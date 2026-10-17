@ FUN_080fad7c  entry 0x080fad7c  size 230
.thumb
.org 0xfad7c
FUN_080fad7c:
	push {r4, r5, r6, r7, lr}	@ 000fad7c f0b5
.org 0xfad7e
	sub sp, #12	@ 000fad7e 83b0
.org 0xfad80
	adds r6, r0, #0	@ 000fad80 061c
.org 0xfad82
	ldr r1, [pc, #224]	@ 000fad82 3849
.org 0xfad84
	mov r0, sp	@ 000fad84 6846
.org 0xfad86
	movs r2, #2	@ 000fad86 0222
.org 0xfad88
	bl 0x129258	@ 000fad88 2ef066fa
.org 0xfad8c
	ldr r0, [pc, #216]	@ 000fad8c 3648
.org 0xfad8e
	ldr r1, [r0, #4]	@ 000fad8e 4168
.org 0xfad90
	ldr r0, [r0, #0]	@ 000fad90 0068
.org 0xfad92
	str r0, [sp, #4]	@ 000fad92 0190
.org 0xfad94
	str r1, [sp, #8]	@ 000fad94 0291
.org 0xfad96
	ldrb r7, [r6, #17]	@ 000fad96 777c
.org 0xfad98
	movs r1, #0	@ 000fad98 0021
.org 0xfad9a
	ldr r0, [pc, #208]	@ 000fad9a 3448
.org 0xfad9c
	ldrh r0, [r0, #0]	@ 000fad9c 0088
.org 0xfad9e
	cmp r0, #16	@ 000fad9e 1028
.org 0xfada0
	bne.n 0xfada4	@ 000fada0 00d1
.org 0xfada2
	movs r1, #1	@ 000fada2 0121
.org 0xfada4
	lsls r0, r1, #2	@ 000fada4 8800
.org 0xfada6
	add r1, sp, #4	@ 000fada6 01a9
.org 0xfada8
	adds r0, r0, r1	@ 000fada8 4018
.org 0xfadaa
	ldr r4, [r0, #0]	@ 000fadaa 0468
.org 0xfadac
	lsls r4, r4, #8	@ 000fadac 2402
.org 0xfadae
	asrs r4, r4, #16	@ 000fadae 2414
.org 0xfadb0
	lsls r5, r4, #2	@ 000fadb0 a500
.org 0xfadb2
	adds r5, r5, r4	@ 000fadb2 2d19
.org 0xfadb4
	lsls r5, r5, #2	@ 000fadb4 ad00
.org 0xfadb6
	ldr r1, [pc, #184]	@ 000fadb6 2e49
.org 0xfadb8
	adds r0, r5, r1	@ 000fadb8 6818
.org 0xfadba
	ldr r1, [pc, #184]	@ 000fadba 2e49
.org 0xfadbc
	lsls r4, r4, #1	@ 000fadbc 6400
.org 0xfadbe
	adds r1, r4, r1	@ 000fadbe 6118
.org 0xfadc0
	ldrh r1, [r1, #0]	@ 000fadc0 0988
.org 0xfadc2
	ldrh r2, [r0, #6]	@ 000fadc2 c288
.org 0xfadc4
	lsrs r2, r2, #6	@ 000fadc4 9209
.org 0xfadc6
	subs r1, r1, r2	@ 000fadc6 891a
.org 0xfadc8
	lsls r1, r1, #5	@ 000fadc8 4901
.org 0xfadca
	movs r2, #128	@ 000fadca 8022
.org 0xfadcc
	lsls r2, r2, #9	@ 000fadcc 5202
.org 0xfadce
	adds r1, r1, r2	@ 000fadce 8918
.org 0xfadd0
	bl 0x1d30	@ 000fadd0 06f7aeff
.org 0xfadd4
	ldr r0, [pc, #160]	@ 000fadd4 2848
.org 0xfadd6
	adds r5, r5, r0	@ 000fadd6 2d18
.org 0xfadd8
	ldr r0, [pc, #160]	@ 000fadd8 2848
.org 0xfadda
	adds r4, r4, r0	@ 000fadda 2418
.org 0xfaddc
	ldrh r1, [r4, #0]	@ 000faddc 2188
.org 0xfadde
	ldrb r0, [r5, #7]	@ 000fadde e879
.org 0xfade0
	subs r1, r1, r0	@ 000fade0 091a
.org 0xfade2
	lsls r1, r1, #5	@ 000fade2 4901
.org 0xfade4
	movs r2, #128	@ 000fade4 8022
.org 0xfade6
	lsls r2, r2, #2	@ 000fade6 9200
.org 0xfade8
	adds r1, r1, r2	@ 000fade8 8918
.org 0xfadea
	adds r0, r5, #0	@ 000fadea 281c
.org 0xfadec
	bl 0x2208	@ 000fadec 07f70cfa
.org 0xfadf0
	ldr r1, [pc, #140]	@ 000fadf0 2349
.org 0xfadf2
	ldrb r0, [r6, #9]	@ 000fadf2 707a
.org 0xfadf4
	lsls r0, r0, #2	@ 000fadf4 8000
.org 0xfadf6
	adds r0, r0, r1	@ 000fadf6 4018
.org 0xfadf8
	movs r1, #1	@ 000fadf8 0121
.org 0xfadfa
	str r1, [r6, #12]	@ 000fadfa f160
.org 0xfadfc
	ldr r0, [r0, #0]	@ 000fadfc 0068
.org 0xfadfe
	ldr r0, [r0, #4]	@ 000fadfe 4068
.org 0xfae00
	str r0, [r6, #20]	@ 000fae00 7061
.org 0xfae02
	mov r1, sp	@ 000fae02 6946
.org 0xfae04
	adds r0, r1, r7	@ 000fae04 c819
.org 0xfae06
	ldrb r0, [r0, #0]	@ 000fae06 0078
.org 0xfae08
	movs r4, #0	@ 000fae08 0024
.org 0xfae0a
	strb r0, [r6, #13]	@ 000fae0a 7073
.org 0xfae0c
	strb r4, [r6, #14]	@ 000fae0c b473
.org 0xfae0e
	strb r4, [r6, #15]	@ 000fae0e f473
.org 0xfae10
	ldrb r1, [r6, #10]	@ 000fae10 b17a
.org 0xfae12
	movs r0, #254	@ 000fae12 fe20
.org 0xfae14
	ands r0, r1	@ 000fae14 0840
.org 0xfae16
	movs r1, #2	@ 000fae16 0221
.org 0xfae18
	orrs r0, r1	@ 000fae18 0843
.org 0xfae1a
	strb r0, [r6, #10]	@ 000fae1a b072
.org 0xfae1c
	ldr r0, [r6, #84]	@ 000fae1c 706d
.org 0xfae1e
	ldr r1, [r6, #88]	@ 000fae1e b16d
.org 0xfae20
	bl 0x8534	@ 000fae20 0df788fb
.org 0xfae24
	adds r5, r0, #0	@ 000fae24 051c
.org 0xfae26
	ldr r0, [r6, #84]	@ 000fae26 706d
.org 0xfae28
	ldr r2, [pc, #88]	@ 000fae28 164a
.org 0xfae2a
	adds r1, r5, r2	@ 000fae2a a918
.org 0xfae2c
	bl 0x8988	@ 000fae2c 0df7acfd
.org 0xfae30
	movs r1, #208	@ 000fae30 d021
.org 0xfae32
	lsls r1, r1, #7	@ 000fae32 c901
.org 0xfae34
	adds r0, r0, r1	@ 000fae34 4018
.org 0xfae36
	str r0, [r6, #84]	@ 000fae36 7065
.org 0xfae38
	str r5, [r6, #88]	@ 000fae38 b565
.org 0xfae3a
	adds r0, r6, #0	@ 000fae3a 301c
.org 0xfae3c
	adds r0, #181	@ 000fae3c b530
.org 0xfae3e
	strb r4, [r0, #0]	@ 000fae3e 0470
.org 0xfae40
	adds r0, #3	@ 000fae40 0330
.org 0xfae42
	str r4, [r0, #0]	@ 000fae42 0460
.org 0xfae44
	lsls r1, r4, #24	@ 000fae44 2106
.org 0xfae46
	lsrs r1, r1, #24	@ 000fae46 090e
.org 0xfae48
	adds r0, r6, #0	@ 000fae48 301c
.org 0xfae4a
	bl 0xfad08	@ 000fae4a fff75dff
.org 0xfae4e
	adds r4, #1	@ 000fae4e 0134
.org 0xfae50
	cmp r4, #2	@ 000fae50 022c
.org 0xfae52
	ble.n 0xfae44	@ 000fae52 f7dd
.org 0xfae54
	adds r0, r6, #0	@ 000fae54 301c
.org 0xfae56
	bl 0xfafc4	@ 000fae56 00f0b5f8
.org 0xfae5a
	add sp, #12	@ 000fae5a 03b0
.org 0xfae5c
	pop {r4, r5, r6, r7}	@ 000fae5c f0bc
.org 0xfae5e
	pop {r0}	@ 000fae5e 01bc
.org 0xfae60
	bx r0	@ 000fae60 0047
