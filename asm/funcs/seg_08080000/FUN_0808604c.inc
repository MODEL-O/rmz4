@ FUN_0808604c  entry 0x0808604c  size 202
.thumb
.org 0x8604c
FUN_0808604c:
	push {r4, r5, r6, lr}	@ 0008604c 70b5
.org 0x8604e
	sub sp, #4	@ 0008604e 81b0
.org 0x86050
	adds r5, r0, #0	@ 00086050 051c
.org 0x86052
	ldr r1, [pc, #196]	@ 00086052 3149
.org 0x86054
	mov r0, sp	@ 00086054 6846
.org 0x86056
	movs r2, #2	@ 00086056 0222
.org 0x86058
	bl 0x129258	@ 00086058 a3f0fef8
.org 0x8605c
	movs r3, #0	@ 0008605c 0023
.org 0x8605e
	ldrb r2, [r5, #16]	@ 0008605e 2a7c
.org 0x86060
	ldr r1, [pc, #184]	@ 00086060 2e49
.org 0x86062
	ldrb r0, [r5, #9]	@ 00086062 687a
.org 0x86064
	lsls r0, r0, #2	@ 00086064 8000
.org 0x86066
	adds r0, r0, r1	@ 00086066 4018
.org 0x86068
	movs r1, #1	@ 00086068 0121
.org 0x8606a
	str r1, [r5, #12]	@ 0008606a e960
.org 0x8606c
	ldr r0, [r0, #0]	@ 0008606c 0068
.org 0x8606e
	ldr r0, [r0, #4]	@ 0008606e 4068
.org 0x86070
	str r0, [r5, #20]	@ 00086070 6861
.org 0x86072
	mov r1, sp	@ 00086072 6946
.org 0x86074
	adds r0, r1, r2	@ 00086074 8818
.org 0x86076
	ldrb r0, [r0, #0]	@ 00086076 0078
.org 0x86078
	strb r0, [r5, #13]	@ 00086078 6873
.org 0x8607a
	strb r3, [r5, #14]	@ 0008607a ab73
.org 0x8607c
	strb r3, [r5, #15]	@ 0008607c eb73
.org 0x8607e
	ldrb r0, [r5, #10]	@ 0008607e a87a
.org 0x86080
	movs r1, #1	@ 00086080 0121
.org 0x86082
	movs r6, #0	@ 00086082 0026
.org 0x86084
	orrs r0, r1	@ 00086084 0843
.org 0x86086
	movs r1, #2	@ 00086086 0221
.org 0x86088
	orrs r0, r1	@ 00086088 0843
.org 0x8608a
	strb r0, [r5, #10]	@ 0008608a a872
.org 0x8608c
	adds r0, r5, #0	@ 0008608c 281c
.org 0x8608e
	adds r0, #180	@ 0008608e b430
.org 0x86090
	strb r3, [r0, #0]	@ 00086090 0370
.org 0x86092
	adds r0, #3	@ 00086092 0330
.org 0x86094
	strb r3, [r0, #0]	@ 00086094 0370
.org 0x86096
	ldr r0, [r5, #84]	@ 00086096 686d
.org 0x86098
	str r0, [r5, #100]	@ 00086098 6866
.org 0x8609a
	ldr r0, [r5, #88]	@ 0008609a a86d
.org 0x8609c
	str r0, [r5, #104]	@ 0008609c a866
.org 0x8609e
	adds r1, r5, #0	@ 0008609e 291c
.org 0x860a0
	adds r1, #184	@ 000860a0 b831
.org 0x860a2
	movs r4, #0	@ 000860a2 0024
.org 0x860a4
	movs r0, #225	@ 000860a4 e120
.org 0x860a6
	lsls r0, r0, #4	@ 000860a6 0001
.org 0x860a8
	strh r0, [r1, #0]	@ 000860a8 0880
.org 0x860aa
	adds r0, r5, #0	@ 000860aa 281c
.org 0x860ac
	adds r0, #188	@ 000860ac bc30
.org 0x860ae
	strb r4, [r0, #0]	@ 000860ae 0470
.org 0x860b0
	cmp r2, #0	@ 000860b0 002a
.org 0x860b2
	bne.n 0x860b6	@ 000860b2 00d1
.org 0x860b4
	str r3, [r5, #40]	@ 000860b4 ab62
.org 0x860b6
	str r3, [r5, #44]	@ 000860b6 eb62
.org 0x860b8
	adds r0, r5, #0	@ 000860b8 281c
.org 0x860ba
	bl 0x1cc9c	@ 000860ba 96f7effd
.org 0x860be
	ldrb r1, [r5, #10]	@ 000860be a97a
.org 0x860c0
	movs r0, #239	@ 000860c0 ef20
.org 0x860c2
	ands r0, r1	@ 000860c2 0840
.org 0x860c4
	strb r0, [r5, #10]	@ 000860c4 a872
.org 0x860c6
	adds r0, r5, #0	@ 000860c6 281c
.org 0x860c8
	adds r0, #76	@ 000860c8 4c30
.org 0x860ca
	strb r4, [r0, #0]	@ 000860ca 0470
.org 0x860cc
	adds r2, r5, #0	@ 000860cc 2a1c
.org 0x860ce
	adds r2, #74	@ 000860ce 4a32
.org 0x860d0
	ldrb r1, [r2, #0]	@ 000860d0 1178
.org 0x860d2
	movs r0, #17	@ 000860d2 1120
.org 0x860d4
	negs r0, r0	@ 000860d4 4042
.org 0x860d6
	ands r0, r1	@ 000860d6 0840
.org 0x860d8
	strb r0, [r2, #0]	@ 000860d8 1070
.org 0x860da
	ldr r1, [pc, #68]	@ 000860da 1149
.org 0x860dc
	adds r0, r5, #0	@ 000860dc 281c
.org 0x860de
	bl 0x1cf00	@ 000860de 96f70fff
.org 0x860e2
	adds r0, r5, #0	@ 000860e2 281c
.org 0x860e4
	bl 0x1cff0	@ 000860e4 96f784ff
.org 0x860e8
	ldrb r0, [r5, #10]	@ 000860e8 a87a
.org 0x860ea
	movs r1, #4	@ 000860ea 0421
.org 0x860ec
	orrs r0, r1	@ 000860ec 0843
.org 0x860ee
	strb r0, [r5, #10]	@ 000860ee a872
.org 0x860f0
	adds r4, r5, #0	@ 000860f0 2c1c
.org 0x860f2
	adds r4, #116	@ 000860f2 7434
.org 0x860f4
	ldr r1, [pc, #44]	@ 000860f4 0b49
.org 0x860f6
	adds r2, r5, #0	@ 000860f6 2a1c
.org 0x860f8
	adds r2, #84	@ 000860f8 5432
.org 0x860fa
	adds r0, r4, #0	@ 000860fa 201c
.org 0x860fc
	movs r3, #64	@ 000860fc 4023
.org 0x860fe
	bl 0x5760	@ 000860fe 7ff72ffb
.org 0x86102
	str r5, [r4, #44]	@ 00086102 e562
.org 0x86104
	ldr r0, [pc, #32]	@ 00086104 0848
.org 0x86106
	str r0, [r4, #36]	@ 00086106 6062
.org 0x86108
	adds r0, r5, #0	@ 00086108 281c
.org 0x8610a
	bl 0x8612c	@ 0008610a 00f00ff8
.org 0x8610e
	add sp, #4	@ 0008610e 01b0
.org 0x86110
	pop {r4, r5, r6}	@ 00086110 70bc
.org 0x86112
	pop {r0}	@ 00086112 01bc
.org 0x86114
	bx r0	@ 00086114 0047
