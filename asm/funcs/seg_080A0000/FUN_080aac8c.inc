@ FUN_080aac8c  entry 0x080aac8c  size 174
.thumb
.org 0xaac8c
FUN_080aac8c:
	push {r4, r5, r6, lr}	@ 000aac8c 70b5
.org 0xaac8e
	sub sp, #4	@ 000aac8e 81b0
.org 0xaac90
	adds r4, r0, #0	@ 000aac90 041c
.org 0xaac92
	ldr r1, [pc, #76]	@ 000aac92 1349
.org 0xaac94
	mov r0, sp	@ 000aac94 6846
.org 0xaac96
	movs r2, #2	@ 000aac96 0222
.org 0xaac98
	bl 0x129258	@ 000aac98 7ef0defa
.org 0xaac9c
	ldr r6, [r4, #40]	@ 000aac9c a66a
.org 0xaac9e
	adds r5, r4, #0	@ 000aac9e 251c
.org 0xaaca0
	adds r5, #140	@ 000aaca0 8c35
.org 0xaaca2
	ldr r0, [r5, #0]	@ 000aaca2 2868
.org 0xaaca4
	movs r1, #1	@ 000aaca4 0121
.org 0xaaca6
	ands r0, r1	@ 000aaca6 0840
.org 0xaaca8
	cmp r0, #0	@ 000aaca8 0028
.org 0xaacaa
	beq.n 0xaacb2	@ 000aacaa 02d0
.org 0xaacac
	movs r0, #18	@ 000aacac 1220
.org 0xaacae
	bl 0x6984	@ 000aacae 5bf769fe
.org 0xaacb2
	ldrb r0, [r6, #12]	@ 000aacb2 307b
.org 0xaacb4
	cmp r0, #1	@ 000aacb4 0128
.org 0xaacb6
	bhi.n 0xaacc4	@ 000aacb6 05d8
.org 0xaacb8
	ldr r0, [r5, #0]	@ 000aacb8 2868
.org 0xaacba
	movs r1, #128	@ 000aacba 8021
.org 0xaacbc
	lsls r1, r1, #2	@ 000aacbc 8900
.org 0xaacbe
	ands r0, r1	@ 000aacbe 0840
.org 0xaacc0
	cmp r0, #0	@ 000aacc0 0028
.org 0xaacc2
	beq.n 0xaace8	@ 000aacc2 11d0
.org 0xaacc4
	ldr r1, [pc, #28]	@ 000aacc4 0749
.org 0xaacc6
	ldrb r0, [r4, #9]	@ 000aacc6 607a
.org 0xaacc8
	lsls r0, r0, #2	@ 000aacc8 8000
.org 0xaacca
	adds r0, r0, r1	@ 000aacca 4018
.org 0xaaccc
	movs r1, #2	@ 000aaccc 0221
.org 0xaacce
	str r1, [r4, #12]	@ 000aacce e160
.org 0xaacd0
	ldr r0, [r0, #0]	@ 000aacd0 0068
.org 0xaacd2
	ldr r0, [r0, #8]	@ 000aacd2 8068
.org 0xaacd4
	str r0, [r4, #20]	@ 000aacd4 6061
.org 0xaacd6
	adds r0, r4, #0	@ 000aacd6 201c
.org 0xaacd8
	bl 0xab580	@ 000aacd8 00f052fc
.org 0xaacdc
	b.n 0xaad40	@ 000aacdc 30e0
.org 0xaacde
	.byte 0x00	@ 000aacde data
.org 0xaacdf
	.byte 0x00	@ 000aacdf data
.org 0xaace0
	.byte 0x94,0x9d,0x12,0x08	@ 000aace0 data
.org 0xaace4
	.byte 0x40,0xdb,0x85,0x08	@ 000aace4 data
.org 0xaace8
	adds r0, r6, #0	@ 000aace8 301c
.org 0xaacea
	adds r0, #200	@ 000aacea c830
.org 0xaacec
	ldrb r0, [r0, #0]	@ 000aacec 0078
.org 0xaacee
	cmp r0, #0	@ 000aacee 0028
.org 0xaacf0
	beq.n 0xaad14	@ 000aacf0 10d0
.org 0xaacf2
	adds r0, r4, #0	@ 000aacf2 201c
.org 0xaacf4
	adds r0, #116	@ 000aacf4 7430
.org 0xaacf6
	adds r1, r4, #0	@ 000aacf6 211c
.org 0xaacf8
	adds r1, #185	@ 000aacf8 b931
.org 0xaacfa
	ldrb r1, [r1, #0]	@ 000aacfa 0978
.org 0xaacfc
	add r1, sp	@ 000aacfc 6944
.org 0xaacfe
	ldrb r2, [r1, #0]	@ 000aacfe 0a78
.org 0xaad00
	lsls r1, r2, #1	@ 000aad00 5100
.org 0xaad02
	adds r1, r1, r2	@ 000aad02 8918
.org 0xaad04
	lsls r1, r1, #3	@ 000aad04 c900
.org 0xaad06
	ldr r2, [pc, #8]	@ 000aad06 024a
.org 0xaad08
	adds r1, r1, r2	@ 000aad08 8918
.org 0xaad0a
	bl 0x5784	@ 000aad0a 5af73bfd
.org 0xaad0e
	b.n 0xaad40	@ 000aad0e 17e0
.org 0xaad10
	.byte 0x9c,0x2b,0x86,0x08	@ 000aad10 data
.org 0xaad14
	adds r0, r4, #0	@ 000aad14 201c
.org 0xaad16
	adds r0, #184	@ 000aad16 b830
.org 0xaad18
	ldrb r0, [r0, #0]	@ 000aad18 0078
.org 0xaad1a
	cmp r0, #0	@ 000aad1a 0028
.org 0xaad1c
	beq.n 0xaad30	@ 000aad1c 08d0
.org 0xaad1e
	adds r1, r4, #0	@ 000aad1e 211c
.org 0xaad20
	adds r1, #180	@ 000aad20 b431
.org 0xaad22
	ldrh r2, [r1, #0]	@ 000aad22 0a88
.org 0xaad24
	movs r3, #0	@ 000aad24 0023
.org 0xaad26
	ldrsh r0, [r1, r3]	@ 000aad26 c85e
.org 0xaad28
	cmp r0, #0	@ 000aad28 0028
.org 0xaad2a
	ble.n 0xaad30	@ 000aad2a 01dd
.org 0xaad2c
	subs r0, r2, #1	@ 000aad2c 501e
.org 0xaad2e
	strh r0, [r1, #0]	@ 000aad2e 0880
.org 0xaad30
	ldr r0, [pc, #20]	@ 000aad30 0548
.org 0xaad32
	ldrb r1, [r4, #13]	@ 000aad32 617b
.org 0xaad34
	lsls r1, r1, #2	@ 000aad34 8900
.org 0xaad36
	adds r1, r1, r0	@ 000aad36 0918
.org 0xaad38
	ldr r1, [r1, #0]	@ 000aad38 0968
