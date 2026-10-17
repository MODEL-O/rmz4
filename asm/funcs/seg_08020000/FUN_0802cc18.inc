@ FUN_0802cc18  entry 0x0802cc18  size 300
.thumb
.org 0x2cc18
FUN_0802cc18:
	push {r4, r5, r6, r7, lr}	@ 0002cc18 f0b5
.org 0x2cc1a
	mov r7, r9	@ 0002cc1a 4f46
.org 0x2cc1c
	mov r6, r8	@ 0002cc1c 4646
.org 0x2cc1e
	push {r6, r7}	@ 0002cc1e c0b4
.org 0x2cc20
	adds r6, r0, #0	@ 0002cc20 061c
.org 0x2cc22
	adds r7, r1, #0	@ 0002cc22 0f1c
.org 0x2cc24
	lsls r2, r2, #24	@ 0002cc24 1206
.org 0x2cc26
	lsrs r2, r2, #24	@ 0002cc26 120e
.org 0x2cc28
	mov r9, r2	@ 0002cc28 9146
.org 0x2cc2a
	ldrb r0, [r6, #13]	@ 0002cc2a 707b
.org 0x2cc2c
	cmp r0, #9	@ 0002cc2c 0928
.org 0x2cc2e
	bne.n 0x2cc32	@ 0002cc2e 00d1
.org 0x2cc30
	b.n 0x2cd36	@ 0002cc30 81e0
.org 0x2cc32
	movs r1, #188	@ 0002cc32 bc21
.org 0x2cc34
	lsls r1, r1, #1	@ 0002cc34 4900
.org 0x2cc36
	adds r0, r6, r1	@ 0002cc36 7018
.org 0x2cc38
	movs r2, #190	@ 0002cc38 be22
.org 0x2cc3a
	lsls r2, r2, #1	@ 0002cc3a 5200
.org 0x2cc3c
	adds r1, r6, r2	@ 0002cc3c b118
.org 0x2cc3e
	ldr r3, [r0, #0]	@ 0002cc3e 0368
.org 0x2cc40
	ldr r2, [r1, #0]	@ 0002cc40 0a68
.org 0x2cc42
	mov ip, r0	@ 0002cc42 8446
.org 0x2cc44
	mov r8, r1	@ 0002cc44 8846
.org 0x2cc46
	cmp r3, r2	@ 0002cc46 9342
.org 0x2cc48
	bge.n 0x2cd36	@ 0002cc48 75da
.org 0x2cc4a
	ldrb r1, [r6, #10]	@ 0002cc4a b17a
.org 0x2cc4c
	movs r0, #16	@ 0002cc4c 1020
.org 0x2cc4e
	ands r0, r1	@ 0002cc4e 0840
.org 0x2cc50
	cmp r0, #0	@ 0002cc50 0028
.org 0x2cc52
	beq.n 0x2cc5c	@ 0002cc52 03d0
.org 0x2cc54
	movs r0, #0	@ 0002cc54 0020
.org 0x2cc56
	ldrsh r1, [r7, r0]	@ 0002cc56 395e
.org 0x2cc58
	negs r1, r1	@ 0002cc58 4942
.org 0x2cc5a
	b.n 0x2cc60	@ 0002cc5a 01e0
.org 0x2cc5c
	movs r2, #0	@ 0002cc5c 0022
.org 0x2cc5e
	ldrsh r1, [r7, r2]	@ 0002cc5e b95e
.org 0x2cc60
	ldrh r0, [r7, #4]	@ 0002cc60 b888
.org 0x2cc62
	lsls r0, r0, #16	@ 0002cc62 0004
.org 0x2cc64
	asrs r0, r0, #17	@ 0002cc64 4014
.org 0x2cc66
	subs r4, r1, r0	@ 0002cc66 0c1a
.org 0x2cc68
	adds r5, r1, r0	@ 0002cc68 0d18
.org 0x2cc6a
	ldr r0, [r6, #84]	@ 0002cc6a 706d
.org 0x2cc6c
	adds r0, r0, r4	@ 0002cc6c 0019
.org 0x2cc6e
	mov r2, ip	@ 0002cc6e 6246
.org 0x2cc70
	ldr r1, [r2, #0]	@ 0002cc70 1168
.org 0x2cc72
	cmp r1, r0	@ 0002cc72 8142
.org 0x2cc74
	ble.n 0x2cc7c	@ 0002cc74 02dd
.org 0x2cc76
	subs r0, r1, r4	@ 0002cc76 081b
.org 0x2cc78
	adds r0, #1	@ 0002cc78 0130
.org 0x2cc7a
	str r0, [r6, #84]	@ 0002cc7a 7065
.org 0x2cc7c
	mov r0, r9	@ 0002cc7c 4846
.org 0x2cc7e
	cmp r0, #0	@ 0002cc7e 0028
.org 0x2cc80
	beq.n 0x2ccce	@ 0002cc80 25d0
.org 0x2cc82
	ldr r3, [r6, #84]	@ 0002cc82 736d
.org 0x2cc84
	adds r0, r3, r4	@ 0002cc84 1819
.org 0x2cc86
	subs r0, #1	@ 0002cc86 0138
.org 0x2cc88
	mov r2, ip	@ 0002cc88 6246
.org 0x2cc8a
	ldr r1, [r2, #0]	@ 0002cc8a 1168
.org 0x2cc8c
	cmp r1, r0	@ 0002cc8c 8142
.org 0x2cc8e
	ble.n 0x2ccce	@ 0002cc8e 1edd
.org 0x2cc90
	movs r1, #2	@ 0002cc90 0221
.org 0x2cc92
	ldrsh r0, [r7, r1]	@ 0002cc92 785e
.org 0x2cc94
	ldr r1, [r6, #88]	@ 0002cc94 b16d
.org 0x2cc96
	adds r1, r1, r0	@ 0002cc96 0918
.org 0x2cc98
	ldrh r0, [r7, #6]	@ 0002cc98 f888
.org 0x2cc9a
	lsls r0, r0, #16	@ 0002cc9a 0004
.org 0x2cc9c
	asrs r0, r0, #17	@ 0002cc9c 4014
.org 0x2cc9e
	adds r2, r1, r0	@ 0002cc9e 0a18
.org 0x2cca0
	adds r1, r3, r5	@ 0002cca0 5919
.org 0x2cca2
	adds r0, r6, #0	@ 0002cca2 301c
.org 0x2cca4
	bl 0x2e058	@ 0002cca4 01f0d8f9
.org 0x2cca8
	lsls r0, r0, #16	@ 0002cca8 0004
.org 0x2ccaa
	cmp r0, #0	@ 0002ccaa 0028
.org 0x2ccac
	bne.n 0x2cd32	@ 0002ccac 41d1
.org 0x2ccae
	movs r2, #2	@ 0002ccae 0222
.org 0x2ccb0
	ldrsh r0, [r7, r2]	@ 0002ccb0 b85e
.org 0x2ccb2
	ldr r1, [r6, #88]	@ 0002ccb2 b16d
.org 0x2ccb4
	adds r1, r1, r0	@ 0002ccb4 0918
.org 0x2ccb6
	ldrh r0, [r7, #6]	@ 0002ccb6 f888
.org 0x2ccb8
	lsls r0, r0, #16	@ 0002ccb8 0004
.org 0x2ccba
	asrs r0, r0, #17	@ 0002ccba 4014
.org 0x2ccbc
	subs r2, r1, r0	@ 0002ccbc 0a1a
.org 0x2ccbe
	ldr r1, [r6, #84]	@ 0002ccbe 716d
.org 0x2ccc0
	adds r1, r1, r5	@ 0002ccc0 4919
.org 0x2ccc2
	adds r0, r6, #0	@ 0002ccc2 301c
.org 0x2ccc4
	bl 0x2e058	@ 0002ccc4 01f0c8f9
.org 0x2ccc8
	lsls r0, r0, #16	@ 0002ccc8 0004
.org 0x2ccca
	cmp r0, #0	@ 0002ccca 0028
.org 0x2cccc
	bne.n 0x2cd32	@ 0002cccc 31d1
.org 0x2ccce
	ldr r0, [r6, #84]	@ 0002ccce 706d
.org 0x2ccd0
	adds r0, r0, r5	@ 0002ccd0 4019
.org 0x2ccd2
	mov r2, r8	@ 0002ccd2 4246
.org 0x2ccd4
	ldr r1, [r2, #0]	@ 0002ccd4 1168
.org 0x2ccd6
	cmp r1, r0	@ 0002ccd6 8142
.org 0x2ccd8
	bge.n 0x2cce0	@ 0002ccd8 02da
.org 0x2ccda
	subs r0, r1, r5	@ 0002ccda 481b
.org 0x2ccdc
	subs r0, #1	@ 0002ccdc 0138
.org 0x2ccde
	str r0, [r6, #84]	@ 0002ccde 7065
.org 0x2cce0
	mov r0, r9	@ 0002cce0 4846
.org 0x2cce2
	cmp r0, #0	@ 0002cce2 0028
.org 0x2cce4
	beq.n 0x2cd36	@ 0002cce4 27d0
.org 0x2cce6
	ldr r3, [r6, #84]	@ 0002cce6 736d
.org 0x2cce8
	adds r0, r3, r5	@ 0002cce8 5819
.org 0x2ccea
	adds r0, #1	@ 0002ccea 0130
.org 0x2ccec
	mov r2, r8	@ 0002ccec 4246
.org 0x2ccee
	ldr r1, [r2, #0]	@ 0002ccee 1168
.org 0x2ccf0
	cmp r1, r0	@ 0002ccf0 8142
.org 0x2ccf2
	bge.n 0x2cd36	@ 0002ccf2 20da
.org 0x2ccf4
	movs r1, #2	@ 0002ccf4 0221
.org 0x2ccf6
	ldrsh r0, [r7, r1]	@ 0002ccf6 785e
.org 0x2ccf8
	ldr r1, [r6, #88]	@ 0002ccf8 b16d
.org 0x2ccfa
	adds r1, r1, r0	@ 0002ccfa 0918
.org 0x2ccfc
	ldrh r0, [r7, #6]	@ 0002ccfc f888
.org 0x2ccfe
	lsls r0, r0, #16	@ 0002ccfe 0004
.org 0x2cd00
	asrs r0, r0, #17	@ 0002cd00 4014
.org 0x2cd02
	adds r2, r1, r0	@ 0002cd02 0a18
.org 0x2cd04
	adds r1, r3, r4	@ 0002cd04 1919
.org 0x2cd06
	adds r0, r6, #0	@ 0002cd06 301c
.org 0x2cd08
	bl 0x2e058	@ 0002cd08 01f0a6f9
.org 0x2cd0c
	lsls r0, r0, #16	@ 0002cd0c 0004
.org 0x2cd0e
	cmp r0, #0	@ 0002cd0e 0028
.org 0x2cd10
	bne.n 0x2cd32	@ 0002cd10 0fd1
.org 0x2cd12
	movs r2, #2	@ 0002cd12 0222
.org 0x2cd14
	ldrsh r0, [r7, r2]	@ 0002cd14 b85e
.org 0x2cd16
	ldr r1, [r6, #88]	@ 0002cd16 b16d
.org 0x2cd18
	adds r1, r1, r0	@ 0002cd18 0918
.org 0x2cd1a
	ldrh r0, [r7, #6]	@ 0002cd1a f888
.org 0x2cd1c
	lsls r0, r0, #16	@ 0002cd1c 0004
.org 0x2cd1e
	asrs r0, r0, #17	@ 0002cd1e 4014
.org 0x2cd20
	subs r2, r1, r0	@ 0002cd20 0a1a
.org 0x2cd22
	ldr r1, [r6, #84]	@ 0002cd22 716d
.org 0x2cd24
	adds r1, r1, r4	@ 0002cd24 0919
.org 0x2cd26
	adds r0, r6, #0	@ 0002cd26 301c
.org 0x2cd28
	bl 0x2e058	@ 0002cd28 01f096f9
.org 0x2cd2c
	lsls r0, r0, #16	@ 0002cd2c 0004
.org 0x2cd2e
	cmp r0, #0	@ 0002cd2e 0028
.org 0x2cd30
	beq.n 0x2cd36	@ 0002cd30 01d0
.org 0x2cd32
	movs r0, #1	@ 0002cd32 0120
.org 0x2cd34
	b.n 0x2cd38	@ 0002cd34 00e0
.org 0x2cd36
	movs r0, #0	@ 0002cd36 0020
.org 0x2cd38
	pop {r3, r4}	@ 0002cd38 18bc
.org 0x2cd3a
	mov r8, r3	@ 0002cd3a 9846
.org 0x2cd3c
	mov r9, r4	@ 0002cd3c a146
.org 0x2cd3e
	pop {r4, r5, r6, r7}	@ 0002cd3e f0bc
.org 0x2cd40
	pop {r1}	@ 0002cd40 02bc
.org 0x2cd42
	bx r1	@ 0002cd42 0847
