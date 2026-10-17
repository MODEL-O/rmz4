@ FUN_08103b74  entry 0x08103b74  size 136
.thumb
.org 0x103b74
FUN_08103b74:
	push {r4, r5, r6, lr}	@ 00103b74 70b5
.org 0x103b76
	adds r6, r0, #0	@ 00103b76 061c
.org 0x103b78
	adds r0, #140	@ 00103b78 8c30
.org 0x103b7a
	ldr r0, [r0, #0]	@ 00103b7a 0068
.org 0x103b7c
	movs r1, #1	@ 00103b7c 0121
.org 0x103b7e
	ands r0, r1	@ 00103b7e 0840
.org 0x103b80
	cmp r0, #0	@ 00103b80 0028
.org 0x103b82
	beq.n 0x103bf6	@ 00103b82 38d0
.org 0x103b84
	adds r0, r6, #0	@ 00103b84 301c
.org 0x103b86
	adds r0, #151	@ 00103b86 9730
.org 0x103b88
	ldrb r1, [r0, #0]	@ 00103b88 0178
.org 0x103b8a
	movs r0, #15	@ 00103b8a 0f20
.org 0x103b8c
	ands r0, r1	@ 00103b8c 0840
.org 0x103b8e
	cmp r0, #8	@ 00103b8e 0828
.org 0x103b90
	bne.n 0x103bf6	@ 00103b90 31d1
.org 0x103b92
	movs r4, #226	@ 00103b92 e224
.org 0x103b94
	ldr r0, [pc, #100]	@ 00103b94 1948
.org 0x103b96
	lsls r2, r4, #1	@ 00103b96 6200
.org 0x103b98
	adds r0, r0, r2	@ 00103b98 8018
.org 0x103b9a
	movs r1, #240	@ 00103b9a f021
.org 0x103b9c
	lsls r1, r1, #1	@ 00103b9c 4900
.org 0x103b9e
	strh r1, [r0, #0]	@ 00103b9e 0180
.org 0x103ba0
	ldr r5, [pc, #92]	@ 00103ba0 174d
.org 0x103ba2
	adds r5, r5, r2	@ 00103ba2 ad18
.org 0x103ba4
	movs r0, #10	@ 00103ba4 0a20
.org 0x103ba6
	strh r0, [r5, #0]	@ 00103ba6 2880
.org 0x103ba8
	lsls r4, r4, #4	@ 00103ba8 2401
.org 0x103baa
	movs r0, #226	@ 00103baa e220
.org 0x103bac
	lsls r0, r0, #2	@ 00103bac 8000
.org 0x103bae
	adds r4, r4, r0	@ 00103bae 2418
.org 0x103bb0
	ldr r0, [pc, #80]	@ 00103bb0 1448
.org 0x103bb2
	adds r0, r4, r0	@ 00103bb2 2018
.org 0x103bb4
	ldrh r2, [r0, #6]	@ 00103bb4 c288
.org 0x103bb6
	lsrs r2, r2, #6	@ 00103bb6 9209
.org 0x103bb8
	subs r1, r1, r2	@ 00103bb8 891a
.org 0x103bba
	lsls r1, r1, #5	@ 00103bba 4901
.org 0x103bbc
	movs r2, #128	@ 00103bbc 8022
.org 0x103bbe
	lsls r2, r2, #9	@ 00103bbe 5202
.org 0x103bc0
	adds r1, r1, r2	@ 00103bc0 8918
.org 0x103bc2
	bl 0x1d30	@ 00103bc2 fef6b5f8
.org 0x103bc6
	ldr r0, [pc, #64]	@ 00103bc6 1048
.org 0x103bc8
	adds r4, r4, r0	@ 00103bc8 2418
.org 0x103bca
	ldrh r1, [r5, #0]	@ 00103bca 2988
.org 0x103bcc
	ldrb r0, [r4, #7]	@ 00103bcc e079
.org 0x103bce
	subs r1, r1, r0	@ 00103bce 091a
.org 0x103bd0
	lsls r1, r1, #5	@ 00103bd0 4901
.org 0x103bd2
	movs r2, #128	@ 00103bd2 8022
.org 0x103bd4
	lsls r2, r2, #2	@ 00103bd4 9200
.org 0x103bd6
	adds r1, r1, r2	@ 00103bd6 8918
.org 0x103bd8
	adds r0, r4, #0	@ 00103bd8 201c
.org 0x103bda
	bl 0x2208	@ 00103bda fef615fb
.org 0x103bde
	ldr r1, [pc, #44]	@ 00103bde 0b49
.org 0x103be0
	ldrb r0, [r6, #9]	@ 00103be0 707a
.org 0x103be2
	lsls r0, r0, #2	@ 00103be2 8000
.org 0x103be4
	adds r0, r0, r1	@ 00103be4 4018
.org 0x103be6
	movs r1, #2	@ 00103be6 0221
.org 0x103be8
	str r1, [r6, #12]	@ 00103be8 f160
.org 0x103bea
	ldr r0, [r0, #0]	@ 00103bea 0068
.org 0x103bec
	ldr r0, [r0, #8]	@ 00103bec 8068
.org 0x103bee
	str r0, [r6, #20]	@ 00103bee 7061
.org 0x103bf0
	adds r0, r6, #0	@ 00103bf0 301c
.org 0x103bf2
	bl 0x103c10	@ 00103bf2 00f00df8
.org 0x103bf6
	pop {r4, r5, r6}	@ 00103bf6 70bc
.org 0x103bf8
	pop {r0}	@ 00103bf8 01bc
.org 0x103bfa
	bx r0	@ 00103bfa 0047
