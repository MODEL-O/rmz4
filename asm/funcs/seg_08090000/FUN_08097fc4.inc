@ FUN_08097fc4  entry 0x08097fc4  size 158
.thumb
.org 0x97fc4
FUN_08097fc4:
	push {r4, r5, r6, lr}	@ 00097fc4 70b5
.org 0x97fc6
	sub sp, #8	@ 00097fc6 82b0
.org 0x97fc8
	adds r5, r0, #0	@ 00097fc8 051c
.org 0x97fca
	ldrb r0, [r5, #14]	@ 00097fca a87b
.org 0x97fcc
	cmp r0, #0	@ 00097fcc 0028
.org 0x97fce
	bne.n 0x9804e	@ 00097fce 3ed1
.org 0x97fd0
	adds r0, r5, #0	@ 00097fd0 281c
.org 0x97fd2
	adds r0, #189	@ 00097fd2 bd30
.org 0x97fd4
	ldrb r0, [r0, #0]	@ 00097fd4 0078
.org 0x97fd6
	cmp r0, #0	@ 00097fd6 0028
.org 0x97fd8
	beq.n 0x97fe4	@ 00097fd8 04d0
.org 0x97fda
	movs r0, #2	@ 00097fda 0220
.org 0x97fdc
	strb r0, [r5, #13]	@ 00097fdc 6873
.org 0x97fde
	adds r6, r5, #0	@ 00097fde 2e1c
.org 0x97fe0
	adds r6, #140	@ 00097fe0 8c36
.org 0x97fe2
	b.n 0x98032	@ 00097fe2 26e0
.org 0x97fe4
	adds r1, r5, #0	@ 00097fe4 291c
.org 0x97fe6
	adds r1, #140	@ 00097fe6 8c31
.org 0x97fe8
	ldr r2, [r1, #0]	@ 00097fe8 0a68
.org 0x97fea
	movs r0, #128	@ 00097fea 8020
.org 0x97fec
	lsls r0, r0, #9	@ 00097fec 4002
.org 0x97fee
	ands r2, r0	@ 00097fee 0240
.org 0x97ff0
	adds r6, r1, #0	@ 00097ff0 0e1c
.org 0x97ff2
	cmp r2, #0	@ 00097ff2 002a
.org 0x97ff4
	beq.n 0x98030	@ 00097ff4 1cd0
.org 0x97ff6
	ldr r0, [r5, #84]	@ 00097ff6 686d
.org 0x97ff8
	str r0, [sp, #0]	@ 00097ff8 0090
.org 0x97ffa
	ldr r0, [r5, #88]	@ 00097ffa a86d
.org 0x97ffc
	ldr r1, [pc, #44]	@ 00097ffc 0b49
.org 0x97ffe
	adds r0, r0, r1	@ 00097ffe 4018
.org 0x98000
	str r0, [sp, #4]	@ 00098000 0190
.org 0x98002
	movs r2, #128	@ 00098002 8022
.org 0x98004
	lsls r2, r2, #2	@ 00098004 9200
.org 0x98006
	adds r0, r5, #0	@ 00098006 281c
.org 0x98008
	adds r0, #188	@ 00098008 bc30
.org 0x9800a
	ldrb r3, [r0, #0]	@ 0009800a 0378
.org 0x9800c
	movs r0, #0	@ 0009800c 0020
.org 0x9800e
	mov r1, sp	@ 0009800e 6946
.org 0x98010
	bl 0xd0dc4	@ 00098010 38f0d8fe
.org 0x98014
	adds r0, r5, #0	@ 00098014 281c
.org 0x98016
	adds r0, #84	@ 00098016 5430
.org 0x98018
	ldrb r3, [r5, #10]	@ 00098018 ab7a
.org 0x9801a
	lsrs r3, r3, #4	@ 0009801a 1b09
.org 0x9801c
	movs r4, #1	@ 0009801c 0124
.org 0x9801e
	ands r3, r4	@ 0009801e 2340
.org 0x98020
	movs r1, #3	@ 00098020 0321
.org 0x98022
	movs r2, #0	@ 00098022 0022
.org 0x98024
	bl 0xdd574	@ 00098024 45f0a6fa
.org 0x98028
	strb r4, [r5, #13]	@ 00098028 6c73
.org 0x9802a
	b.n 0x98032	@ 0009802a 02e0
.org 0x9802c
	.byte 0x00,0xec,0xff,0xff	@ 0009802c data
.org 0x98030
	strb r2, [r5, #13]	@ 00098030 6a73
.org 0x98032
	movs r1, #0	@ 00098032 0021
.org 0x98034
	str r1, [r6, #0]	@ 00098034 3160
.org 0x98036
	adds r0, r5, #0	@ 00098036 281c
.org 0x98038
	adds r0, #144	@ 00098038 9030
.org 0x9803a
	str r1, [r0, #0]	@ 0009803a 0160
.org 0x9803c
	adds r0, #4	@ 0009803c 0430
.org 0x9803e
	strb r1, [r0, #0]	@ 0009803e 0170
.org 0x98040
	ldrb r1, [r5, #10]	@ 00098040 a97a
.org 0x98042
	movs r0, #251	@ 00098042 fb20
.org 0x98044
	ands r0, r1	@ 00098044 0840
.org 0x98046
	strb r0, [r5, #10]	@ 00098046 a872
.org 0x98048
	ldrb r0, [r5, #14]	@ 00098048 a87b
.org 0x9804a
	adds r0, #1	@ 0009804a 0130
.org 0x9804c
	strb r0, [r5, #14]	@ 0009804c a873
.org 0x9804e
	ldr r0, [pc, #24]	@ 0009804e 0648
.org 0x98050
	ldrb r1, [r5, #13]	@ 00098050 697b
.org 0x98052
	lsls r1, r1, #2	@ 00098052 8900
.org 0x98054
	adds r1, r1, r0	@ 00098054 0918
.org 0x98056
	ldr r1, [r1, #0]	@ 00098056 0968
.org 0x98058
	adds r0, r5, #0	@ 00098058 281c
.org 0x9805a
	bl 0x128f80	@ 0009805a 90f091ff
.org 0x9805e
	add sp, #8	@ 0009805e 02b0
.org 0x98060
	pop {r4, r5, r6}	@ 00098060 70bc
